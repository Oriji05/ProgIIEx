//
//  IntCounter.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 18/04/25.
//

#include "IntCounter.hpp"

IntCounter::IntCounter() : counter(0) {}

void IntCounter::inc() {
    ++this->counter;
}

int IntCounter::getCounter() {
    return this->counter;
}

IntCounter& IntCounter::operator= (const IntCounter &c){
    if (this != &c) {
        this->counter = c.counter;
    }
    return *this;
}

bool IntCounter::operator==(const IntCounter &c) const{
    return this->counter == c.counter;
}

bool IntCounter::operator!=(const IntCounter &c) const{
    return this->counter != c.counter;
}
