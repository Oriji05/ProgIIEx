//
//  Punto3D.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#include "Punto3D.hpp"

Punto3D::Punto3D() : Punto(), z(0) {}


Punto3D::Punto3D(double x, double y, double z) : Punto(x,y), z(z) {}


Punto3D& Punto3D::setZ(double z) {
    this->z = z;
    return *this;
}

double Punto3D::getZ() {
    return this->z;
}


double Punto3D::distanzaOrigine() {
    return sqrt(this->getX() * this->getX() + this->getY() * this->getY() + this->z * this->z);
}

void Punto3D::show() {
    cout << "bro i hope i don't fall";
}
