#include "SmartMeter.h"


Define_Module(SmartMeter);


void SmartMeter::SmartMeter() {
}

void SmartMeter::~SmartMeter() {
    reading = NULL;
}


void SmartMeter::initialize() {
    int randomInterval = generateRandomValue("int");
    reading = new cMessage("ReadingData");
	scheduleAt(simTime()+ randomInterval, reading);
	
	measurementDataSignal = registerSignal("MeasurementData");
}

void SmartMeter::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage() && msg == reading) {
        //notify data concentrator
        
        //reschedule the new message
        int randomInterval = generateRandomValue("int");
        scheduleAt(simTime()+ randomInterval, reading);
    }

}

void SmartMeter::finish() {
}

