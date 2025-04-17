//
//  Dado.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#include "Dado.hpp"
#include <iostream>

using namespace std;

Dado::Dado() : facce(6) {}

Dado::Dado(int facce) : facce(facce) {}

Dado::Dado(const Dado &copy) : facce(copy.facce) {};

void Dado::agita(){
    srand((unsigned int)time(0));
}

int Dado::lancia(){
    return rand() % this->getFacce() + 1;
}

void Dado::setFacce(int facce){
    this->facce = facce;
}

int Dado::getFacce(){
    return this->facce;
}
