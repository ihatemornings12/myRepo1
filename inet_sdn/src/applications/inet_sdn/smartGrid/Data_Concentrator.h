#ifndef DATACONCENTRATOR_H
#define DATACONCENTRATOR_H

#include "INETDefs.h"
#include "omnetpp.h"
#include <string>

using namespace std;

class Data_Concentrator : public cSimpleModule
{
	private:
		void sendMeasurementData();

  	public:
    	virtual void initialize();
    	virtual void handleMessage(cMessage *msg);
    	virtual void finish();
 
};

#endif
