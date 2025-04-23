//
//  Calcolatrice.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Calcolatrice_hpp
#define Calcolatrice_hpp

#include <stdio.h>

class Calcolatrice {
private:
    double op1;
    double op2;
    double result;
public:

    Calcolatrice();
    Calcolatrice(double op1, double op2 = 0);
    
    void setOp1(double op1);
    void setOp2(double op2);
    void setResult(double result);
    double getOp1();
    double getOp2();
    double getResult();
    
    double sum();
    double prod();
    double division();
    double sub();
};

#endif /* Calcolatrice_hpp */
