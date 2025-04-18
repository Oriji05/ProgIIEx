//
//  StringCounter.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 18/04/25.
//

#ifndef StringCounter_hpp
#define StringCounter_hpp

#include <stdio.h>
#include <string>

using namespace std;
class StringCounter {
private:
    string counter;
public:
    StringCounter();
    void inc();
    int getCounter();
    
};

#endif /* StringCounter_hpp */
