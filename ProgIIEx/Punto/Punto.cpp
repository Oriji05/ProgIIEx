//
//  Punto.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#include "Punto.hpp"

Punto::Punto() : x(0), y(0) {}

Punto::Punto(double x, double y) : x(x), y(y) {}

Punto& Punto::setX(double x) {
    this->x = x;
    return *this;
}

Punto& Punto::setY(double y) {
    this->y = y;
    return *this;
}

double Punto::getX(){
    return this->x;
}

double Punto::getY(){
    return this->y;
}

double Punto::distanzaOrigine(){
    return sqrt( this->x * this->x + this->y * this->y);
}

void Punto::show(){
    cout << "Punto(" << this->x << "," << this->y <<")"<< endl;
}
