#ifndef MITIGATION_H_
#define MITIGATION_H_

#include <omnetpp.h>
#include "openflow.h"
#include "IPv4Datagram.h"

class Mitigation: public cSimpleModule { 
	private:
		simsignal_t mitigationSignal;
		std::map<IPv4Address,IPv4Address> ongoingMitigations;
	protected:
		virtual void initialize();
		virtual void handleMessage(cMessage *msg);
	public:
		Mitigation();
		~Mitigation();
		void mitigate(IPv4Address victim, IPv4Address source, int inport);
		bool isOngoing(IPv4Address adr);
};


#endif /* MITIGATION_H_ */
