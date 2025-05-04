//
//  Rettangolo.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "Rettangolo.hpp"


Rettangolo::Rettangolo() : base(0), altezza(0) {}

Rettangolo::Rettangolo(double base, double altezza) : base(base), altezza(altezza) {}

void Rettangolo::setDimension(double base, double altezza) {
    this->base = base;
    this->altezza = altezza;
}

void Rettangolo::setAltezza(double altezza) {
    this->altezza = altezza;
}

void Rettangolo::setBase(double base) {
    this->base = base;
}

double Rettangolo::area(){
    return this->base * this->altezza;
}

double Rettangolo::perimetro() {
    return 2 * (this->base + this->altezza);
}

Rettangolo Rettangolo::operator + (const Rettangolo &c) {
    return Rettangolo(this->base + c.base, this->altezza + c.altezza);
}

Rettangolo& Rettangolo::operator = (const Rettangolo &c) {
    if (this != &c){
        this->base = c.base;
        this->altezza = c.altezza;
    }
    return *this;
}

                                
