//
//  StringCounter.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 18/04/25.
//

#include "StringCounter.hpp"


StringCounter::StringCounter() : counter("") {}

void StringCounter::inc(){
    this->counter + "1";
}

int StringCounter::getCounter() {
    return (int)this->counter.size();
}
