//
//  main.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#include <iostream>
#include <vector>

#include "Angoli/Angolo.hpp"
#include "Contatori/IntCounter.hpp"
#include "Contatori/StringCounter.hpp"
#include "Templates/templateFunction.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    IntCounter ic;
    ic.inc();
    printCounter<IntCounter> (ic);
    
}
