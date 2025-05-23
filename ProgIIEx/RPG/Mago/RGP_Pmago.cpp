//
//  RGP_Pmago.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 12/05/25.
//

#include "RGP_Pmago.hpp"

RGP_Pmago::RGP_Pmago(int forza, int velocita, int salute, int magia, int incantesimi) : RGP_Pbase(forza, velocita, salute), magia(magia), incantesimi(incantesimi) {}

int RGP_Pmago::getMagia() {
    return this->magia;
}

int RGP_Pmago::getIncantesimi() {
    return this->incantesimi;
}

RGP_Pmago& RGP_Pmago::setMagia(int magia) {
    this->magia = magia;
    return *this;
}

RGP_Pmago& RGP_Pmago::setIncantesimi(int incantesimi) {
    this->incantesimi = incantesimi;
    return *this;
}

void RGP_Pmago::show(){
    RGP_Pbase::show();
    cout << " (Mag:"<<magia<<", Inc:"<<incantesimi<<")";
}
