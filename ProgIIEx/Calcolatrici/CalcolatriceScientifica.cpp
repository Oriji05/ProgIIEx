//
//  CalcolatriceScientifica.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "CalcolatriceScientifica.hpp"

CalcolatriceScientifica::CalcolatriceScientifica(double op1, double op2) : Calcolatrice(op1, op2) {}
double CalcolatriceScientifica::potenza(int exponent) {
    this->setResult(1);
    for (int i = 0; i < exponent; ++i) {
        this->setResult(this->getResult() * this->getOp1());
    }
    return this->getResult();
}
