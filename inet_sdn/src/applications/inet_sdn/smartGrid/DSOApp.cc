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

#include "DSOApp.h"
#include "MonitoringData_m.h"
#include "SetPoints_m.h"
#include "TCPCommand_m.h"
#include "TCPSocket.h"
#include "TCPSocketMap.h"
#include "IPvXAddressResolver.h"

#include <fstream>

Define_Module(DSOApp);


simsignal_t DSOApp::rcvdPkSignal = registerSignal("rcvdPk");
simsignal_t DSOApp::sentPkSignal = registerSignal("sentPk");

simsignal_t DSOApp::sum_of_sumSignal = registerSignal("sum_of_sum");
simsignal_t DSOApp::avg_of_sumSignal = registerSignal("avg_of_sum");
simsignal_t DSOApp::sum_of_avgSignal = registerSignal("sum_of_avg");
simsignal_t DSOApp::avg_of_avgSignal = registerSignal("avg_of_avg");

DSOApp::DSOApp() 
{
    record = new RecordDSO();
}

DSOApp::~DSOApp() 
{
    delete record;
}

void DSOApp::initialize(int stage) 
{
    cSimpleModule::initialize(stage);
    if (stage == 0) {
        numSent = 0;
        numReceived = 0;
        WATCH(numSent);
        WATCH(numReceived);
    }
    
    //bind the socket and wait for connections
    listen();
    
    // limits
    threshold = par("maxEnergyGen");
    thr_per_domain = threshold;
    
    fileName = "LogDSO.dat";
    file.open(fileName.c_str(), ios::out|ios::trunc);
    file << "msgRcvd\t\t msgSent\t\t sender\t\t avgEnergy\t\t sumEnergy \t\t thresholdPerDomain \n";
    file.close();
}

void DSOApp::listen() 
{
    const char *localAddress = par("localAddress");
    int localPort = par("localPort");
    socket.setOutputGate(gate("tcpOut"));
    socket.setDataTransferMode(TCP_TRANSFER_OBJECT);
    socket.bind(localAddress[0] ? IPvXAddress(localAddress) : IPvXAddress(), localPort);
    socket.listen();
}  

void DSOApp::handleMessage(cMessage *msg) 
{
    //connection has been established. Notification sent by TCP. Keep the connection id
    if (msg->getKind() == TCP_I_ESTABLISHED) { 
        TCPSocket *socket = socketMap.findSocketFor(msg);
        if(!socket) {
            socket = new TCPSocket(msg);
            socket->setOutputGate(gate("tcpOut"));
            socketMap.addSocket(socket);
        }
        
        defineSetPoints(msg);
    }
    else if (dynamic_cast<MonitoringData *>(msg) != NULL) {
             
        MonitoringData *data = (MonitoringData *) msg;   
        
        // extract info
        double recordedAvgEnergy = data->getAvgEnergyGen();
        double recordedSumEnergy = data->getSumEnergyGen();
        simtime_t timestamp = data->getTimestamp();
        const string rtu = data->getSender();
        double cur_thr = data->getThreshold();
        //update data structure
        info[rtu].push_back(data);
        
        //write output to a file:view per RTU
        updateFile(data); 
        
        //compute avg and sum energy consumption for the system
        record->updateRecord(recordedAvgEnergy, recordedSumEnergy, rtu);
        
        if (record->getSenders() == socketMap.size() ) {
            
            //record the values of avg and sum
            double sumEnergy = record->getSumEnergy();
            double avgEnergy = record->getAvgEnergy();
            double sumAvgEnergy = record->getSumAvgEnergy();
            double avgAvgEnergy = record->getAvgAvgEnergy();
            
            emit(sum_of_sumSignal, sumEnergy);
            emit(avg_of_sumSignal, avgEnergy);
            emit(sum_of_avgSignal, sumAvgEnergy);
            emit(avg_of_avgSignal, avgAvgEnergy);
                                                        
            record->reset();
            
        }
               
        numReceived++;
        emit(rcvdPkSignal, data);
        
        if (!withinLimits(recordedSumEnergy)) {
            //send new configuration points
            SetPoints *set_points = new SetPoints("SetPoints");
            set_points->setByteLength(1);
            set_points->setTimestamp(simTime());
            set_points->setKind(TCP_C_SEND);
            
            set_points->setEnergyGenLimit(cur_thr-1);
          
            emit(sentPkSignal, set_points);
            numSent++;
            
            TCPSocket *socket = socketMap.findSocketFor(data);
            socket->send(set_points);              
        }
    }
    else {}
    
    displayGUI();     
    delete msg;
}


void DSOApp::updateFile(MonitoringData *msg)
{   
    string data;
    
    data.assign(simTime().str());
    data.append("\t\t" + msg->getTimestamp().str() + "\t\t" + msg->getSender() + "\t\t");
    data.append(to_string(msg->getAvgEnergyGen()) + "\t\t" + to_string(msg->getSumEnergyGen()) + "\t\t" + to_string(msg->getThreshold()));
    
    file.open(fileName.c_str(), ios::out|ios::app);
    if (file.is_open()) {
        file << data << '\n';
        file.close();
    }
    else {
        cout << "Error opening file\n";
    }
}

void DSOApp::defineSetPoints(cMessage *msg) {
    SetPoints *set_points = new SetPoints("SetPoints");
    set_points->setByteLength(1);
    set_points->setTimestamp(simTime());
    set_points->setKind(TCP_C_SEND);
    
    int num_rtus = getRTUs();
    thr_per_domain = threshold/num_rtus;
    set_points->setEnergyGenLimit((int)thr_per_domain);
           
    emit(sentPkSignal, set_points);
    numSent++;
            
    TCPSocket *socket = socketMap.findSocketFor(msg);
    socket->send(set_points);    
}

void DSOApp::displayGUI() 
{
    if (ev.isGUI()) {
        char buf[40];
        sprintf(buf, "rcvd: %d pks\nsent: %d pks", numReceived, numSent);
        getDisplayString().setTagArg("t", 0, buf);
    }
}

void DSOApp::finish() 
{ 
}

bool DSOApp::withinLimits(double energy) 
{
    if (energy <= (thr_per_domain+1))
        return true;
    else 
        return false;
}

int DSOApp::getRTUs() 
{
    int rtus = 0;
    for (cSubModIterator iter(*getParentModule()->getParentModule()); !iter.end(); iter++) {
        string name = iter()->getFullName();
        if (name.find("RTU") != std::string::npos)
            rtus++;
    }
    return rtus;
}

