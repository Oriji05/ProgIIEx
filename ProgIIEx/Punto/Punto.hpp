//
//  Punto.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#ifndef Punto_hpp
#define Punto_hpp

#include <iostream>
#include <cmath>
using namespace std;
class Punto{
private:
    double x;
    double y;
public:
    Punto();
    Punto(double x, double y);
    double getX();
    double getY();
    Punto& setX(double x);
    Punto& setY(double y);
    double distanzaOrigine();
    void show();
};
#endif /* Punto_hpp */
