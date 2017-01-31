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
#include "MonitoringData_m.h"
#include "SetPoints_m.h"
#include "seapputils.h"

Define_Module(IED);

void IED::initialize() 
{
    threshold = 0.0;
    problem = false;
    
	monitoringDataSignal = registerSignal("MonitoringData");
    getParentModule()->getParentModule()->subscribe("SetPoints", this);
    
	nextReading();
}

void IED::finish() 
{
}

void IED::handleMessage(cMessage *msg) 
{
    if (msg->isSelfMessage()) {      
        MonitoringData *data = new MonitoringData();
        data->setByteLength(1);
        
        string name = this->getFullPath().c_str();
        if ( (simTime() == 60) && ( (name.find("RTU1.ied[0]") != std::string::npos) || (name.find("RTU1.ied[1]") != std::string::npos) //|| (name.find("RTU1.ied[2]") != std::string::npos) \
                //|| (name.find("RTU2.ied[0]") != std::string::npos) || (name.find("RTU2.ied[1]") != std::string::npos)  || (name.find("RTU2.ied[2]") != std::string::npos) \
                // || (name.find("RTU3.ied[0]") != std::string::npos) || (name.find("RTU3.ied[1]") != std::string::npos)  || (name.find("RTU3.ied[2]") != std::string::npos) 
                ) ) {
            problem = true;
        }  
          
        if (problem) {
            cout <<"mpika!\n";
            //data->setEnergyGeneration(generateRandomIntValue(15,20));
            data->setEnergyGeneration(12.0);
        }
        else {
            data->setEnergyGeneration(generateRandomDblValue(threshold));
        }
        
        data->setTimestamp(simTime());
        data->setSender(this->getFullPath().c_str());
        emit(monitoringDataSignal, data);     
        
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
    if (signalName == "SetPoints") { 
        if (dynamic_cast<SetPoints *>(obj) != NULL) {
            SetPoints *data = (SetPoints *) obj;
            // set the new threshold
            threshold = data->getEnergyGenLimit();
            problem = false;
        }
    }
}

