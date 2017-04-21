//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#include "RTUApp.h"
#include "IPvXAddressResolver.h"1
#include "seapputils.h"
#include "MonitoringData_m.h"
#include "SetPoints_m.h"
#include "Command_m.h"


Define_Module(RTUApp);

simsignal_t RTUApp::rcvdPkSignal = registerSignal("rcvdPk");
simsignal_t RTUApp::sentPkSignal = registerSignal("sentPk");

simsignal_t RTUApp::sum_energySignal = registerSignal("sum_energy");
simsignal_t RTUApp::avg_energySignal = registerSignal("avg_energy");
simsignal_t RTUApp::thresholdSignal = registerSignal("RTU_threshold");

simsignal_t RTUApp::setPointsDelaySignal = registerSignal("set_points_delay");


RTUApp::RTUApp() 
{
    record = new Record();
}

RTUApp::~RTUApp() 
{
    record = nullptr;
    delete record;
}

void RTUApp::finish() 
{
    cout << this->getParentModule()->getName() <<": Total number of sent messages = " << numSent << endl;
}

void RTUApp::initialize(int stage) 
{
    cSimpleModule::initialize(stage);
    if (stage == 0) {
        numSent = 0;
        numReceived = 0;
        WATCH(numSent);
        WATCH(numReceived);
    }
    
    bind();
    
    threshold = 0.0;
    getParentModule()->subscribe("Measurement", this);
    commandSignal = registerSignal("ConfigCommand");
    
    //periodically send Report to DSO
    interval = par("intervalReport");
    reportMsg = new cMessage("SendReport");
    reportMsg->setKind(SEND);
    scheduleAt(simTime()+interval, reportMsg);
    
    //timer to establish the TCP connection
    startTime = par("startTime");
    timeoutMsg = new cMessage("timer");
    timeoutMsg->setKind(CONNECT);
    scheduleAt(simTime()+startTime, timeoutMsg);
    
    ied = getParentModule()->par("IEDs");
    timestamp = simTime();
}

void RTUApp::handleMessage(cMessage *msg) 
{
    if (msg->isSelfMessage()) {
        switch (msg->getKind()) {
            case CONNECT: 
                connect();
                break;
            case SEND:
                sendReportToDSO();
                break;
            default: 
                throw cRuntimeError("Invalid kind %d in self message", (int)msg->getKind());	   
        }
    }
    else
        process(msg); 
     
    delete msg;
}

void RTUApp::process(cMessage *msg) 
{
    if (dynamic_cast<SetPoints *>(msg) != NULL) {
        SetPoints *setPoints = (SetPoints *) msg;

        //update stats
        numReceived++;
        emit(rcvdPkSignal, setPoints);
        
        simtime_t delay = simTime() - timestamp;    
        emit(setPointsDelaySignal, delay);
        
        Command *cmd = new Command();

        if (faulty_ied.empty() ) {
            //new configuration message
            cout << "[" << simTime() << "]" << this->getParentModule()->getFullPath();
            cout << ": SetPoints received: Configuration change. (avg)Threshold per domain: " << setPoints->getEnergyGenLimit() << endl;        
           
            threshold = setPoints->getEnergyGenLimit();
            if (threshold == 0)
                cmd->setLimit(0);
            else
                cmd->setLimit((int)threshold/ied);
            cmd->setName("config");
           
            //notify IEDs:send signal with the new threshold
            emit(commandSignal, cmd);     
        }
        else {
            //reduce energy production to faulty ieds
            map<string, int>::iterator i = faulty_ied.begin();
            while (i != faulty_ied.end()) {
                cmd->setLimit(i->second - 1);
                if (i->second == 0)
                    cmd->setLimit(0);
                cmd->setName(i->first.c_str());
                cout << "[" << simTime() << "]" << this->getParentModule()->getFullPath()<<": send new configuration setting to faulty IED " << i->first <<endl;
                i++;
                emit(commandSignal, cmd);    
            }
            faulty_ied.clear();
        }
        delete cmd;
    }
}

void RTUApp::bind() 
{
    const char *localAddress = par("localAddress");
    int localPort = par("localPort");       
    socket.setOutputGate(gate("tcpOut"));
    socket.setDataTransferMode(TCP_TRANSFER_OBJECT);
    socket.bind(*localAddress ? IPvXAddressResolver().resolve(localAddress) : IPvXAddress(), localPort);
}

void RTUApp::connect() 
{
    socket.renewSocket();
    const char *connectAddress = par("connectAddress");
    int connectPort = par("connectPort");
    IPvXAddress destination;
    IPvXAddressResolver().tryResolve(connectAddress, destination);
    if (destination.isUnspecified())
        EV << "cannot resolve destination address: " << connectAddress << endl;
    else 
        socket.connect(destination, connectPort);
        
    cout << this->getParentModule()->getFullPath() << ": connID = " << socket.getConnectionId() << endl;
}


/*
 * Signal sent by the IEDs. Information icludes the measurements from the field: energy generation and power quality
 */
void RTUApp::receiveSignal(cComponent *src, simsignal_t id, cObject *obj) 
{ 
    // Notification from IEDs
    Enter_Method_Silent();

    string signalName(getSignalName(id));
    if (signalName == "Measurement") {
        if (dynamic_cast<Measurement *>(obj) != NULL) {
            Measurement *data = (Measurement *) obj;
            //check if the value is higher than the threshold
            checkMeasurement(data);
            // updates the aggregated data
            record->updateRecord(data->getEnergyProduction());           
            
            delete data;
        }
    }
}

void RTUApp::checkMeasurement(Measurement *data) 
{
     string sender = data->getName();
     double energy = data->getEnergyProduction();
     int limit = data->getLimit();
     
     if (energy > limit) 
        faulty_ied.insert(pair<string, int>(sender, limit));
     
}
void RTUApp::sendReportToDSO() 
{
    MonitoringData *data = new MonitoringData("MonitoringData");
       
    data->setAvgEnergy(record->getAvgEnergy());
    data->setSumEnergy(record->getSumEnergy());
    data->setSender(this->getParentModule()->getName());
    data->setThreshold(threshold);
    
    data->setByteLength(1250);
    data->setTimestamp(simTime());
    data->setKind(TCP_C_SEND);

    timestamp = simTime();
    emit(sentPkSignal, data);
    numSent++;
    
    //record the values sent to DSO
    emit(sum_energySignal, record->getSumEnergy());
    emit(avg_energySignal, record->getAvgEnergy());
    emit(thresholdSignal, threshold);
    
    record->reset(); 
    
    string name = this->getFullPath().c_str();

    socket.send(data); 
    
    //set timer
    cMessage *report = new cMessage("SendReport");
    report->setKind(SEND);
    scheduleAt(simTime()+interval, report);
    displayGUI();
}

void RTUApp::displayGUI() 
{
    if (ev.isGUI()) {
        char buf[40];
        sprintf(buf, "rcvd: %d pks\nsent: %d pks", numReceived, numSent);
        getDisplayString().setTagArg("t", 0, buf);
    }
}


