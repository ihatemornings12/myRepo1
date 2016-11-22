#include "DataConcentratorApp.h"
#include "MeasurementData_m.h"

Define_Module(DataConcentratorApp);


void DataConcentratorApp::initialize() {
    getParentModule()->subscribe("MeasurementData", this);
    
    cMessage *report = new cMessage("SendReport");
    interval = par("intervalReport");
    scheduleAt(simTime()+interval, report);
}

void DataConcentratorApp::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {
        //send the report
        cout <<"[" << simTime() << "] Time to send Report to RTU: sum = " << report.sum << " cnt = " << report.cnt << endl;
        report.reset();
        scheduleAt(simTime()+interval, msg);
    }
}

void DataConcentratorApp::finish() {
}

void DataConcentratorApp::receiveSignal(cComponent *src, simsignal_t id, cObject *obj) {
	string signalName(getSignalName(id));
	if (signalName == "MeasurementData") { 
        if (dynamic_cast<MeasurementData *>(obj) != NULL) {
		   MeasurementData *data = (MeasurementData *) obj;
		   
		   cout <<"[" << simTime() << "] received signal with data = " << data->getInfo() << endl;
		   
		   report.cnt++;
		   report.sum += data->getInfo();
		   delete data;
		}
	}
}

void DataConcentratorApp::handleTimer(cMessage *msg)
{
    switch (msg->getKind()) {
        case MSGKIND_CONNECT:
            connect(); // active OPEN
		    break;
        case MSGKIND_SEND:
            break;
    }
}

void DataConcentratorApp::connect() {
    socket.renewSocket();
    // connect
    const char *connectAddress = par("connectAddress");
    int connectPort = par("connectPort");

    IPvXAddress destination;
    IPvXAddressResolver().tryResolve(connectAddress, destination);
    if (destination.isUnspecified())
        EV << "cannot resolve destination address: " << connectAddress << endl;
    else {
        socket.connect(destination, connectPort);
    }
}

