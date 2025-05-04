//
//  Rettangolo.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Rettangolo_hpp
#define Rettangolo_hpp



#include <stdio.h>


class Rettangolo {
private:
    double base;
    double altezza;
public:
    Rettangolo();
    Rettangolo(double base, double altezza);
    
    void setDimension(double base, double altezza);
    void setAltezza(double altezza);
    void setBase(double base);
    
    double area();
    double perimetro();
    
    Rettangolo operator +(const Rettangolo &c);
    Rettangolo& operator =(const Rettangolo &c);

    
};

#endif /* Rettangolo_hpp */
