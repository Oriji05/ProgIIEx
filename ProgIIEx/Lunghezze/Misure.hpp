//
//  Misure.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 20/04/25.
//

#ifndef Misure_hpp
#define Misure_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Misure {
private:
    double yarde;
    double foot;
    double inches;
    double meeter;
public:
    Misure();
    Misure(double yard, double foot, double inches);
    Misure(double meeter);
    void set(double yard, double foot, double inches);
    void set(double meeter);
    double getMeeter();
    double getYard();
    double getInches();
    double getFoot();
    void setMeeter(double meeter);
    void setYarde(double yarde);
    void setFoot(double foot);
    void setInches(double inches);
    
};

#endif /* Misure_hpp */
