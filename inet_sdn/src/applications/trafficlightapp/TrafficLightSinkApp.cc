
#include "TrafficLightSinkApp.h"
#include "UDPControlInfo_m.h"
#include "TrafficLightPacket_m.h"

#include <math.h>
#include <fstream>
#include <iostream>

Define_Module(TrafficLightSinkApp);

simsignal_t TrafficLightSinkApp::rcvdPkSignal = registerSignal("rcvdPk");


void TrafficLightSinkApp::initialize(int stage)
{
    ApplicationBase::initialize(stage);

    if (stage == 0)
    {
        numReceived = 0;
        WATCH(numReceived);
    }
}

void TrafficLightSinkApp::handleMessageWhenUp(cMessage *msg)
{
    if (msg->getKind() == UDP_I_DATA)
    {
        // process incoming packet
        processPacket(PK(msg));
    }
    else if (msg->getKind() == UDP_I_ERROR)
    {
        EV << "Ignoring UDP error report\n";
        delete msg;
    }
    else
    {
        error("Unrecognized message (%s)%s", msg->getClassName(), msg->getName());
    }

    if (ev.isGUI())
    {
        char buf[32];
        sprintf(buf, "rcvd: %d pks", numReceived);
        getDisplayString().setTagArg("t", 0, buf);
    }
}

void TrafficLightSinkApp::finish()
{
    ApplicationBase::finish();
    EV << getFullPath() << ": received " << numReceived << " packets\n";
}

void TrafficLightSinkApp::processPacket(cPacket *pk)
{
    EV << "Received packet: " << UDPSocket::getReceivedPacketInfo(pk) << endl;
    emit(rcvdPkSignal, pk);
    
    
    TrafficLightCmd* cmd = (TrafficLightCmd*) pk;

	double periodGreen = cmd->getPeriodGreen();
	double periodYellow = cmd->getPeriodYellow();
	double periodRed = cmd->getPeriodRed();
    
    getParentModule()->par("periodGreen").setDoubleValue(periodGreen);
    getParentModule()->par("periodYellow").setDoubleValue(periodYellow);
    getParentModule()->par("periodRed").setDoubleValue(periodRed);
    
	string roadType = getParentModule()->par("roadType").stringValue();

	double t = (simTime()).dbl();
	double scheduleTime = t + updatePeriod;
	
	double sequencePeriod = periodGreen + periodYellow + periodRed; 
	
	double timeInActualSequence = fmod(t, sequencePeriod);
    
    // maind road sequence:	g->y->r
	if (roadType == "m") {
		if (timeInActualSequence < periodGreen) {
			setGreen();
		}
		else {
			if (timeInActualSequence < (periodGreen + periodYellow)) {
				setYellow();
			}
			else {
				setRed();
			}
		}
	}
	// secondary road sequence: r->g->y
	else {
		if (timeInActualSequence < periodRed) {
			setRed();
		}
		else {
			if (timeInActualSequence < (periodRed + periodGreen)) {
				setGreen();
			}
			else {
				setYellow();
			}
		}
	}
	
	string color = getParentModule()->par("status").stringValue();
	updateFile(t, color);
    
    delete pk;

    numReceived++;
}

bool TrafficLightSinkApp::handleNodeStart(IDoneCallback *doneCallback)
{
    socket.setOutputGate(gate("udpOut"));
    int localPort = par("localPort");
    socket.bind(localPort);
    socket.joinLocalMulticastGroups();
    return true;
}

bool TrafficLightSinkApp::handleNodeShutdown(IDoneCallback *doneCallback)
{
    //TODO if(socket.isOpened()) socket.close();
    return true;
}

void TrafficLightSinkApp::handleNodeCrash()
{
}



void TrafficLightSinkApp::setRed() {

	getParentModule()->par("status").setStringValue("r");
	getParentModule()->getDisplayString().setTagArg("i",0,"misc/tl-r");

}


void TrafficLightSinkApp::setYellow() {

	getParentModule()->par("status").setStringValue("y");
	getParentModule()->getDisplayString().setTagArg("i",0,"misc/tl-y");

}


void TrafficLightSinkApp::setGreen() {

	getParentModule()->par("status").setStringValue("g");
	getParentModule()->getDisplayString().setTagArg("i",0,"misc/tl-g");

}


void TrafficLightSinkApp::updateFile(double t, string color) {

	ofstream outputFile;
	string fileName;
	string number;
	number.assign(getParentModule()->par("number").stringValue());

	int convertedColor;
	
	if (color == "g") {
		convertedColor = 5;
	}
	if (color == "y") {
		convertedColor = 0;
	}
	if (color == "r") {
		convertedColor = -5;
	}


	if (number == "-1") {
		opp_error("Traffic Light hasn't a proper number, please assign a number to each traffic light");
	}
	else {

		fileName.assign("tl");
		fileName.append(number);
		
		outputFile.open(fileName.c_str(), ios::app);
		outputFile << t << " " << convertedColor << '\n';
		outputFile.close();
	
	}

}





