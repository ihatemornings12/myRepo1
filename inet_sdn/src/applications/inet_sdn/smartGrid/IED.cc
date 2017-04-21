//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#include "IED.h"

#include "Measurement_m.h"
#include "SetPoints_m.h"
#include "Command_m.h"
#include "seapputils.h"

Define_Module(IED);

IED::IED() 
{
}

IED::~IED() 
{
}

void IED::initialize() 
{
    name = this->getFullPath().c_str();
    threshold = 0.0;
    problem = false;
    
	measurementSignal = registerSignal("Measurement");
    getParentModule()->subscribe("ConfigCommand", this);
    
	nextReading();
}

void IED::finish() 
{
}

void IED::handleMessage(cMessage *msg) 
{
    if (msg->isSelfMessage()) {      
        Measurement *data = new Measurement();

        /*scenarion of faulty IEDs, mupltiply of 3*/
        if ( (simTime() == 60) && ( (name.find("RTU1.ied[0]") != std::string::npos) || (name.find("RTU1.ied[1]") != std::string::npos) // || (name.find("RTU1.ied[2]") != std::string::npos) \
               // || (name.find("RTU2.ied[0]") != std::string::npos) || (name.find("RTU2.ied[1]") != std::string::npos)  || (name.find("RTU2.ied[2]") != std::string::npos) \
               //  || (name.find("RTU3.ied[0]") != std::string::npos) || (name.find("RTU3.ied[1]") != std::string::npos)  || (name.find("RTU3.ied[2]") != std::string::npos) 
              ) ) {
          problem = true;
        }  
          
        if (problem) {
            cout <<"Faulty IED: " << name << " \n";
            data->setEnergyProduction(generateRandomIntValue(15,20));
        }
        else {
            if (threshold > 1)
                data->setEnergyProduction(generateRandomDblValue(threshold));
            else 
                data->setEnergyProduction(0.0);
        }
        
        data->setTimestamp(simTime());
        data->setName(this->getFullPath().c_str());
        data->setLimit(threshold);
        emit(measurementSignal, data);     
        
        delete msg;
        nextReading();
    }
}

void IED::nextReading() 
{
    cMessage *reading = new cMessage("ReadingData");
    //int randomInterval = generateRandomIntValue(1,3);
    int randomInterval = 3;
    scheduleAt(simTime() + randomInterval, reading);
}

void IED::receiveSignal(cComponent *src, simsignal_t id, cObject *obj) 
{ 
    // Notification from IEDs
    Enter_Method_Silent();
    string signalName(getSignalName(id));
    if (signalName == "ConfigCommand") { 
        if (dynamic_cast<Command *>(obj) != NULL) {
            Command *data = (Command *) obj;
            //check if you are final destination
            string dst = data->getName();
            if ( (name.find(dst) != std::string::npos) || (dst == "config") ) {
                // set the new threshold
                threshold = data->getLimit();
                problem = false;
                cout <<"--"<< name << " received new configuration settings (" << dst << ")" << endl;
            } 
        }
    }
}

