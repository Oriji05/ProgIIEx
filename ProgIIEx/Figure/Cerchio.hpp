//
//  Cerchio.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Cerchio_hpp
#define Cerchio_hpp



#include <stdio.h>

class Cerchio {
private:
    inline static const double pi = 3.1415926535;
    double raggio;
public:
    Cerchio();
    Cerchio(double raggio);
    
    void setRaggio(double raggio);
    double circon();
    double area();
    
};

#endif /* Cerchio_hpp */
