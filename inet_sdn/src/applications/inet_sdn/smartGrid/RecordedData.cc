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


#include "RecordedData.h"

RecordedData::RecordedData() 
{
    energyGen = 0.0;
    avgEnergyGen = 0.0;
    sumEnergy = 0.0;
    counter = 0.0;
    sender = "";
}

RecordedData::RecordedData(double avgEnergy, double sumEnergy, const char* name) 
{
    avgEnergyGen = avgEnergy;
    sumEnergy = sumEnergy;
    sender = name;
}

RecordedData::~RecordedData () 
{
}

void RecordedData::setEnergyGen(double energy)
{
    energyGen = energy;
}

double RecordedData::getEnergyGen()
{
    return energyGen;
}
 
        
void RecordedData::setSender(const char *name) 
{
    sender = name;
}

const char* RecordedData::getSender()
{  
    return sender;
}

        
void RecordedData::setAngEnergyGen(double energy)
{
    
}
double getAvgEnergyGen();
        
void setSumEnergyGen(double energy);
double getSumEnergyGen();
