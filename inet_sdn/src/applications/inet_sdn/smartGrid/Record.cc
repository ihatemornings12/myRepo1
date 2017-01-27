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

#include "Record.h"

Record::Record() 
{
    energy = 0.0;
    avgEnergy = 0.0;
    sumEnergy = 0.0;
    counter = 0;
}

Record::~Record()
{
}

void Record::updateRecord (double energy) 
{
    sumEnergy += energy; //(sum) per domain
    counter++;
    avgEnergy = sumEnergy/counter; //(avg) per domain
}

double Record::getSumEnergy()
{
    return sumEnergy;
}

double Record::getAvgEnergy()
{
    return avgEnergy;
}

void Record::reset() 
{   
    energy = 0.0;
    avgEnergy = 0.0;
    sumEnergy = 0.0;
    counter = 0;
    senders.clear();
}

int Record::getCounter() 
{
    return counter;
}

int Record::getSendersNum() 
{
    return senders.size();
}

/*
 * RecordDSO inherits Record. The class is used by the DSO application to record
 * and compute the average and sum values for the system. 
 */
RecordDSO::RecordDSO() 
{
    avgAvg = 0.0;
    sumAvg = 0.0;
}

RecordDSO::~RecordDSO()
{
}

void RecordDSO::updateRecord(double avg, double sum, const string id) 
{   
    if (senders.find(id) == senders.end()) {
        senders.insert(id);
        counter++;
        
        //records for system's overview
        sumEnergy += sum; //sum(sum) 
        avgEnergy = sumEnergy/counter; //(avg(sum)) 
        
        sumAvg += avg; //(sum(avg) 
        avgAvg = sumAvg/counter; //avg(avg) 
    }
    else 
        cout<< "Sender " << id << " sends double data\n"; 

}

double RecordDSO::getAvgAvgEnergy()
{
    return avgAvg;
}

double RecordDSO::getSumAvgEnergy()
{
    return sumAvg;
}


