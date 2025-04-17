//
//  Angolo.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 17/04/25.
//
#include <cmath>
#include "Angolo.hpp"
/*Angolo();
 Angolo(int gradi, int primi, int secondi);
 Angolo(double rad);
 void setGradi();
 void setPrimi();
 void setSecondi();
 int getGradi();
 int getPrimi();
 int getSecondi();

 void setAll();*/

Angolo::Angolo() : gradi(0), primi(0), secondi(0) {}

Angolo::Angolo(int gradi, int primi, int secondi) {
    this->gradi = gradi;
    this->primi = primi;
    this->secondi = secondi;
}

Angolo::Angolo(double rad){
    
    double gradi = rad * (180/M_PI);
    this->gradi = (int)gradi;
    double primi = gradi - (int)gradi;
    primi = primi * 60;
    this->primi = (int)primi;
    double secondi = primi - (int)primi;
    secondi = secondi * 60;
    this->secondi = secondi - (int)secondi;
}

int Angolo::getGradi(){
    return this->gradi;
}

int Angolo::getPrimi(){
    return this->primi;
}

int Angolo::getSecondi(){
    return this->secondi;
}

void Angolo::setGradi(int gradi) {
    this->gradi = gradi;
}

void Angolo::setPrimi(int primi) {
    this->gradi = primi;
}

void Angolo::setSecondi(int secondi) {
    this->secondi = secondi;
}

void Angolo::setAll(int gradi, int primi, int secondi) {
    this->setGradi(gradi);
    this->setPrimi(primi);
    this->setSecondi(secondi);
}

string Angolo::getAll(){
    return  to_string(this->getGradi()) + " " + to_string(this->getPrimi()) + " " + to_string(this->getSecondi());
}
