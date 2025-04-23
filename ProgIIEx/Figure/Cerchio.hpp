//
//  Cerchio.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Cerchio_hpp
#define Cerchio_hpp

#define PI 3.1415926535

#include <stdio.h>

class Cerchio {
private:
    double raggio;
public:
    Cerchio();
    Cerchio(double raggio);
    
    void setRaggio(double raggio);
    double circon();
    double area();
    
};

#endif /* Cerchio_hpp */
