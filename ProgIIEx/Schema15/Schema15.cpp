//
//  Schema15.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 30/04/25.
//

#include "Schema15.hpp"


bool Schema15::inizzializza(){
    for (int i = 1; i <= 15; ++i) {
        this->pad[i - 1] = i;
    }
    this->numMosse = 0;
    this->vX = 3;
    this->vY = 3;
    return true;
}

Schema15::Schema15(){
    this->inizzializza();
}

Schema15::Schema15(int seed){
    if(!this->genera(seed)){
        this->inizzializza();
    }
}

bool Schema15::valido(){
    int nb[16] = {0};
    int i, j, s15 = 0;
    for(i = 0; i < 15; ++i) {
    for(j = i+1; j < 16; ++j)
    if(pad[j] < pad[i])
    nb[i]++;
    s15 += nb[i];
    }
    return !(s15%2);
}

void Schema15::mischia(int seed){
    srand(seed);
    int vpos = 0;
    for (int i = 0; i < 16; ++i) {
        
        int j = rand() % 16;
        if (pad[i] == 0) {
            vpos = j;
        } else if (pad[j] == 0){
            vpos = i;
        }
        swap(pad[i], pad[j]);
    }
    this->vX = vpos / 4;
    this->vY = vpos % 4;
    
}

bool Schema15::genera(int seed){
    bool v = false;
    int tentative = 0;
    for (int i = 1; i <= 15; ++i)
    pad[i-1] = i;
    numMosse = 0;
    vX = vY = 3;
    do {
    mischia(seed);
    v = valido();
    tentative++;
    } while (!v && tentative < maxIter);
    return v;
}

bool Schema15::alto(){
    if (this->vX == 3) {
        return false;
    }
    swap(pad[(vX + 1) * 4 + vY], pad[vX * 4 + vY]);
    this->vX = vX + 1;
    return true;
}

bool Schema15::sinistra(){
    if (this->vY == 0) {
        return false;
    }
    swap(pad[vX * 4 + (vY - 1)], pad[vX * 4 + vY]);
    this->vY = vY - 1 ;
    return true;
}

bool Schema15::destra(){
    if (this->vY == 3) {
        return false;
    }
    swap(pad[(vX) * 4 + (vY + 1)], pad[vX * 4 + vY]);
    this->vY = vY + 1;
    return true;
}
bool Schema15::basso(){
    if (this->vX == 0) {
        return false;
    }
    swap(pad[(vX - 1) * 4 + vY], pad[vX * 4 + vY]);
    this->vX = vX - 1;
    return true;
}

void Schema15::mostra(){
    cout << "+--+--+--+--+" << endl;
    
    for (int i = 0; i < 4; ++i) {
        cout << "|";
        for (int j = 0; j < 4; ++j){
            cout << setw(2) << *(pad + i * 4 + j) << "|";
        }
        
        cout << endl << "+--+--+--+--+" ;
        cout << endl;
    }
    
}

