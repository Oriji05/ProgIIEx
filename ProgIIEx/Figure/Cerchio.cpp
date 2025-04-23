//
//  Cerchio.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "Cerchio.hpp"


Cerchio::Cerchio() : raggio(1) {}

Cerchio::Cerchio(double raggio) : raggio(raggio) {}

double Cerchio::area() {
    return PI * (this->raggio * this->raggio);
}

double Cerchio::circon() {
    return PI * 2 * this->raggio;
}
