//
//  ContenitoreDadi.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#include "ContenitoreDadi.hpp"

ContenitoreDadi::ContenitoreDadi(int numDadi, int facce) : numDadi(numDadi), dadi(vector<Dado>(numDadi, Dado(facce))) {}

void ContenitoreDadi::agita(int seed){
    std::srand(seed);
}

vector<int> ContenitoreDadi::lanci(){
    vector<int> result;
    for(Dado &dado: this->dadi) {
        result.push_back(dado.lancia());
    }
    return result;
}

int ContenitoreDadi::sommaDiLanci(){
    int somma = 0;
    
    auto lanci = this->lanci();
    
    for (int &i : lanci){
        somma += i;
    }
    
    return somma;
}
