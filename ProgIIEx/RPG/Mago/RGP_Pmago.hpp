//
//  RGP_Pmago.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#ifndef RGP_Pmago_hpp
#define RGP_Pmago_hpp

#include <iostream>
#include "../Base/RGP_Pbase.hpp"
using namespace std;

class RGP_Pmago : public RGP_Pbase{
    
private:
    int magia, incantesimi;
public:
    RGP_Pmago(int forza, int velocita, int salute, int magia, int incantesimi);
    
    int getMagia();
    int getIncantesimi();
    
    RGP_Pmago& setMagia(int magia);
    RGP_Pmago& setIncantesimi(int incatesimi);
    
    void show() override;
};

#endif /* RGP_Pmago_hpp */
