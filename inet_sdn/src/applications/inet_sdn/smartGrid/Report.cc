#include "Report.h"

Report::Report() {
    counter = 0;
    sum = 0;
}

Report::~Report () {}


void Report::setCounter(int x) {
    counter = x;
}

int Report::getCounter () {
    return counter;
}

void Report::setSum(int x) {
    sum = x;
}

int Report::getSum () {
    return sum;
}

void Report::updateCounter() {
    counter++;
}

void Report::updateSum(int x) {
    sum += x;
}

void Report::updateRecord(int x) {
    updateSum(x);
    updateCounter();
}

int Report::getAvg() {
    return sum/counter;
}

void Report::resetData() {
    counter = 0;
    sum = 0;
}
