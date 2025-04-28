//
//  templateFunction.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 18/04/25.
//

#ifndef templateFunction_hpp
#define templateFunction_hpp

#include <stdio.h>
#include <iostream>
#include "Classes/Couple.hpp"
using namespace std;

template <class T> void operator >> (T i, Couple<T> &c);

template <class T> void printCounter(T obj);

template <class T> void inputVector(string messaggio, vector<T> &vettore);
template <class T> void showVector(string messaggio, vector<T> &vettore);
template <class T, class U> void scalXVector(T scal, vector<U> &vettore);
template <class T, class U> T prodScalVector(vector<T> &v1, vector<U> &v2);



#include "templateFunction.ipp"

#endif /* templateFunction_hpp */

