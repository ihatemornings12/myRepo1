#ifndef DATACONCENTRATORAPP_H
#define DATACONCENTRATORAPP_H

#include "INETDefs.h"
#include "omnetpp.h"
#include "TCPSocket.h"

using namespace std;

class DataConcentratorApp : public cSimpleModule, public cListener
{
    private:
        struct Report {
            int cnt = 0;
            int sum = 0;
            void reset() { cnt = 0; sum = 0;};
        } report;
        
        cListener *listener;
        int interval;
        TCPSocket socket;
	private:
		void sendMeasurementData();
		
		//TCP related functions
        void connect();
        void handleTimer(cMessage *msg);
		
	protected:
	    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);

  	public:
    	virtual void initialize();
    	virtual void handleMessage(cMessage *msg);
    	virtual void finish();
 
};

#endif
