#ifndef REPORT_H
#define REPORT_H

#include <omnetpp.h>

class Report {
    private:
        int counter = 0;
        int sum = 0;
    public:
        Report();
        ~Report();
        
        int getCounter();
        int getSum();
        
        void setCounter(int x);
        void setSum(int x);
        
        void updateCounter(); 
        void updateSum(int x);
        void updateRecord(int x);
        
        int getAvg();        
        void resetData();
        
};
#endif

