//
//  IntCounter.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 18/04/25.
//

#ifndef IntCounter_hpp
#define IntCounter_hpp

#include <stdio.h>

class IntCounter {
private:
    int counter;
public:
    IntCounter();
    void inc();
    int getCounter();
    IntCounter& operator= (const IntCounter &c);
    bool operator!= (const IntCounter &c) const;
    bool operator== (const IntCounter &c) const;
};


#endif /* IntCounter_hpp */
