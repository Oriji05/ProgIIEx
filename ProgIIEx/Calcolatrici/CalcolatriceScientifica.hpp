//
//  CalcolatriceScientifica.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef CalcolatriceScientifica_hpp
#define CalcolatriceScientifica_hpp

#include <stdio.h>
#include "Calcolatrice.hpp"

class CalcolatriceScientifica : public Calcolatrice{
public:
    CalcolatriceScientifica(double op1, double op2);
    double potenza(int exponent);
    double sqrt();
    
};
#endif /* CalcolatriceScientifica_hpp */
