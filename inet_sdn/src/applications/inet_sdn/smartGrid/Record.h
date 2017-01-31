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

#ifndef RECORD_H
#define RECORD_H

#include <omnetpp.h>

using namespace std;

class Record 
{
    protected:
        double energy;
        double avg;
        double sum;
        int cnt;
        set<string> senders;
    public:
        Record();
        ~Record();
        
        virtual void updateRecord(double energy);
        //void updateRecord(double avg, double sum, const string id);
        double getSumEnergy();
        double getAvgEnergy();
        int getCounter();
        void reset();
        int getSenders();
};

class RecordDSO: public Record
{
    private:
        double avgAvg;
        double sumAvg;
    public:
        RecordDSO();
        ~RecordDSO();
        void updateRecord(double avgE, double sumE, const string id);
        double getAvgAvgEnergy();
        double getSumAvgEnergy();
        void reset();

};
#endif
