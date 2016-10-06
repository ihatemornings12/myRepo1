
#include "CommandNodeSinkApp.h"
#include "UDPControlInfo_m.h"
#include "TrafficLightPacket_m.h"

#include <math.h>
#include <fstream>
#include <iostream>
#include <string>


Define_Module(CommandNodeSinkApp);

simsignal_t CommandNodeSinkApp::rcvdPkSignal = registerSignal("rcvdPk");


void CommandNodeSinkApp::initialize(int stage)
{
    ApplicationBase::initialize(stage);

    if (stage == 0)
    {
        numReceived = 0;
        WATCH(numReceived);
    }
}

void CommandNodeSinkApp::handleMessageWhenUp(cMessage *msg)
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

void CommandNodeSinkApp::finish()
{
    ApplicationBase::finish();
    EV << getFullPath() << ": received " << numReceived << " packets\n";
}

// dumps packet on file
void CommandNodeSinkApp::processPacket(cPacket *pk)
{

	EV << "Received packet: " << UDPSocket::getReceivedPacketInfo(pk) << endl;
	emit(rcvdPkSignal, pk);
    
    TrafficLightStatus* payload = (TrafficLightStatus*) pk;
    
    double periodGreen = payload->getPeriodGreen();
    double periodYellow = payload->getPeriodYellow();
    double periodRed = payload->getPeriodRed();
    double timeStamp = payload->getTime();
    string roadType = payload->getRoadType();

    double sequencePeriod = periodGreen + periodYellow + periodRed; 
	
	double timeInActualSequence = fmod(timeStamp, sequencePeriod);
	
	// r = -5
    // y = 0
    // g = 5
    int translatedColor;
	
	// maind road sequence:	g->y->r
	if (roadType == "m") {
		if (timeInActualSequence < periodGreen) {
			translatedColor = 5;
		}
		else {
			if (timeInActualSequence < (periodGreen + periodYellow)) {
				translatedColor = 0;
			}
			else {
				translatedColor = -5;
			}
		}
	}
	// secondary road sequence: r->g->y
	else {
		if (timeInActualSequence < periodRed) {
			translatedColor = -5;
		}
		else {
			if (timeInActualSequence < (periodRed + periodGreen)) {
				translatedColor = 5;
			}
			else {
				translatedColor = 0;
			}
		}
	}
       
	ofstream outputFile;
	string fileName;
	string number;
	number.assign(par("relatedTrafficLightNumber").stringValue());

	if (number == "-1") {
		opp_error("Traffic Light hasn't a proper number, please assign a number to each traffic light");
	}
	else {

		fileName.assign("cn_tl");
		fileName.append(number);
		
		outputFile.open(fileName.c_str(), ios::app);
		outputFile << timeStamp << " " << translatedColor << '\n';
		outputFile.close();
	
	}
   
   
    delete pk;

    numReceived++;
}

bool CommandNodeSinkApp::handleNodeStart(IDoneCallback *doneCallback)
{
    socket.setOutputGate(gate("udpOut"));
    int localPort = par("localPort");
    socket.bind(localPort);
    socket.joinLocalMulticastGroups();
    return true;
}

bool CommandNodeSinkApp::handleNodeShutdown(IDoneCallback *doneCallback)
{
    //TODO if(socket.isOpened()) socket.close();
    return true;
}

void CommandNodeSinkApp::handleNodeCrash()
{
}

