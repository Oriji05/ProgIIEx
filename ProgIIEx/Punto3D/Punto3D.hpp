//
//  Punto3d.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#ifndef Punto3D_hpp
#define Punto3D_hpp

#include <iostream>

#include "../Punto/Punto.hpp"
using namespace std;
class Punto3D: public Punto {
    
private:
    double z;
public:
    
    Punto3D();
    Punto3D(double x, double y, double z);
    
    Punto3D& setZ(double z);
    double getZ();
    double distanzaOrigine();
    void show();
};
#endif /* Punto3d_hpp */
