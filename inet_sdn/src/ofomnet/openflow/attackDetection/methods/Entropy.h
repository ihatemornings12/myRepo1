#ifndef ENTROPY_H_
#define ENTROPY_H_

#include <omnetpp.h>

#include "IPv4Datagram.h"
#include "TCPSocket.h"
#include "openflow.h"
#include "OFA_controller.h"

class OFA_controller;

class Entropy: public cSimpleModule {
	private:
		double threshold;
		bool alert;		
		double interval;
		OFA_controller *controller;
	protected:
		static simsignal_t entropySignal;
	
		virtual void initialize();		
		virtual void handleMessage(cMessage *msg);				
	public:
		Entropy();
		~Entropy();
		bool entropyCalc(std::map<IPv4Address, int> &data);
		
};

#endif /* ENTROPY_H_ */
