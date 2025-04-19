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
    
    vector<int> myVettore(10, 7);
    scalXVector <int, int> (5, myVettore);
    showVector("questo è tutto il vettore inizzializzato di default", myVettore);
    
}
