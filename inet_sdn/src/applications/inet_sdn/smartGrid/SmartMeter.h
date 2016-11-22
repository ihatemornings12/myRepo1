
#ifndef SMARTMETER_H
#define SMARTMETER_H

#include "INETDefs.h"
#include "omnetpp.h"
#include <string>

using namespace std;

class SmartMeter : public cSimpleModule
{
    private:
        //self messages
        cMessage *reading;
        
        //signal
        simsignal_t measurementDataSignal;
	private:
		void sendMeasurementData();

  	public:
  	    SmartMeter();
  	    ~SmartMeter();
    	virtual void initialize();
    	virtual void handleMessage(cMessage *msg);
    	virtual void finish();
 
};

#endif
