//
//  Couple.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 28/04/25.
//

#ifndef Couple_hpp
#define Couple_hpp

#include <stdio.h>
#include "../templateFunction.hpp"

template <class T> class Couple{
private:
    T data[2];
public:
    Couple();
    Couple(T sx, T dx = 0);
    void set(T sx, T dx);
    void get(T &sx, T &dx);
    void operator >>(T i);
    void operator <<(T i);
    
};

#include "Couple.ipp"

#endif /* Couple_hpp */
