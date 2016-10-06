#include <omnetpp.h>
#include "Entropy.h"
#include "openflow.h"
#include "IPv4Datagram.h"
#include "OFA_controller.h"


using namespace std;

Define_Module(Entropy);

simsignal_t Entropy::entropySignal = registerSignal("entropy");

Entropy::Entropy() {}

Entropy::~Entropy() {}

void Entropy::initialize() {	
	cModule *ITModule2 = getParentModule()->getSubmodule("ofa_controller");
    controller = check_and_cast<OFA_controller *>(ITModule2);
    
	threshold = par("threshold");
	interval = controller->returnStatsInterval();
	alert = false;
}

void Entropy::handleMessage(cMessage *msg)
{
    opp_error("This module doesn't process messages");
}

bool Entropy::entropyCalc(std::map<IPv4Address, int> &data) { //map: data set (dstIP, dst ports..) and their counters
	double entropy_value = 0.0;
	double p = 0.0;
	int size = data.size();
	alert = false;
	std::map<IPv4Address, int>::iterator i =  data.begin();
	while (i!=data.end()) {
		p = i->second/size;
		if (p!=0)
			entropy_value += -p*log10(p);		
		i++;
	}
	
	double entropy = (entropy_value/interval);
	emit(entropySignal, entropy);
	
	if (entropy <= threshold) {
		alert = true;
	}
		
	return alert;

}
