//
//  Misure.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 20/04/25.
//

#include "Misure.hpp"

Misure::Misure() : yarde(0), foot(0), inches(0), meeter(0){}

Misure::Misure(double yarde, double foot, double inches) : yarde(yarde), foot(foot), inches(inches), meeter(((yarde * 36) + (foot * 12) + inches) * 0.0254) {}

Misure::Misure(double meeter) : meeter(meeter) {
    double inches = meeter * 39.3701;
    int yarde = inches / 36;
    inches = inches - (yarde * 36);
    int foot = inches / 12;
    inches = inches - (foot * 12);
    this->yarde = (double)yarde;
    this->foot = (double)foot;
    this->inches = inches;
    
}

void Misure::set(double yarde, double foot, double inches){
    
    this->yarde = yarde;
    this->foot = foot;
    this->inches = inches;
    
    this->meeter = ((yarde * 36) + (foot * 12) + inches) * 0.0254;
    
}

void Misure::set(double meeter) {
    this->meeter = meeter;
    
    double inches = meeter * 39.3701;
    int yarde = inches / 36;
    inches = inches - (yarde * 36);
    int foot = inches / 12;
    inches = inches - (foot * 12);
    this->yarde = (double)yarde;
    this->foot = (double)foot;
    this->inches = inches;
}


