#ifndef ATTACK_DETECTOR_H_
#define ATTACK_DETECTOR_H_

#include <omnetpp.h>
#include "IPv4Datagram.h"
#include "openflow.h"
#include "Entropy.h"
#include "Mitigation.h"
#include "OFA_controller.h"

class Entropy;
class OFA_controller;

class AttackDetection: public cSimpleModule { 
	private:
		int rcv_cnt_threshold;
		int sent_cnt_threshold;
		
		Entropy *entropy;
		Mitigation *mitigation;
		OFA_controller *controller;
		
		IPv4Address identifyTarget(std::map<IPv4Address, int> &data, std::string target);
		std::map<IPv4Address, int> collectInfo(std::map<int, ofp_flow_stats *> &stats, std::string target);
		int findInPort(std::map<int, ofp_flow_stats *> &stats, IPv4Address src);
		bool existingFlow(std::map<int, ofp_flow_stats *> &stats, IPv4Address src, IPv4Address dst);
		
	protected:
		virtual void initialize();
		virtual void handleMessage(cMessage *msg);
	public:
		AttackDetection();
		~AttackDetection();
		void dataAnalysis(std::map<int, ofp_flow_stats *> &stats);
};


#endif /* ATTACK_DETECTOR_H_ */
