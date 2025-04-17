//
//  ContenitoreDadi.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#ifndef ContenitoreDadi_hpp
#define ContenitoreDadi_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include "Dado.hpp"

using namespace std;
class ContenitoreDadi{
    
private:
    int numDadi;
    vector <Dado> dadi;
    
public:
    ContenitoreDadi(int numDadi = 2, int facce = 6);
    void agita(int seed);
    vector<int> lanci();
    int sommaDiLanci();
};


#endif /* ContenitoreDadi_hpp */
