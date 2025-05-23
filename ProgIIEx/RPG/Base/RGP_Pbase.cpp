//
//  RGP_Pbase.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#include "RGP_Pbase.hpp"


RGP_Pbase::RGP_Pbase(int forza, int velocita, int salute) : forza(forza), velocita(velocita), salute(salute) {}

int RGP_Pbase::getForza() {
    return this->forza;
}

int RGP_Pbase::getVelocita() {
    return this->velocita;
}

int RGP_Pbase::getSalute() {
    return this->salute;
}

RGP_Pbase& RGP_Pbase::setForza(int forza) {
    this->forza = forza;
    return *this;
}

RGP_Pbase& RGP_Pbase::setVelocita(int velocita) {
    this->velocita = velocita;
    return *this;
}

RGP_Pbase& RGP_Pbase::setSalute(int salute) {
    this->salute = salute;
    return *this;
}

void RGP_Pbase::show() {
    cout << "Stats Base " << endl << "salute: " << this->salute << " velocità: " << this->velocita << " salute: " << this->salute << endl;
}
