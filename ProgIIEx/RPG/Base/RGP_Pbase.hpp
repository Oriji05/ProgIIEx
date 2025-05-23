//
//  RGP_Pbase.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#ifndef RGP_Pbase_hpp
#define RGP_Pbase_hpp

#include <iostream>
using namespace std;

class RGP_Pbase{
private:
    int forza, salute, velocita;
public:
    RGP_Pbase(int forza, int velocita, int salute);
    int getForza();
    int getVelocita();
    int getSalute();
    
    RGP_Pbase& setForza(int forza);
    RGP_Pbase& setVelocita(int velocita);
    RGP_Pbase& setSalute(int salute);

    virtual void show();
    
};
#endif /* RGP_Pbase_hpp */
