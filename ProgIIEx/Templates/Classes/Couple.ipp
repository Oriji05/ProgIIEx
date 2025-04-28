//
//  Couple.ipp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 28/04/25.
//

#include "Couple.hpp"





template <class T> Couple<T>::Couple(){
    this->data[0] = 0;
    this->data[1] = 0;
}

template <class T> Couple<T>::Couple(T sx, T dx){
    set(sx, dx);
}

template <class T> void Couple<T>::set(T sx, T dx){
    this->data[0] = sx;
    this->data[1] = dx;
}

template <class T> void Couple<T>::get(T &sx, T &dx){
    sx = this->data[0];
    dx = this->data[1];
}

template <class T> void Couple<T>::operator >> (T i){
    this->data[1] = i;
}

template <class T> void Couple<T>::operator << (T i){
    this->data[0] = i;
}
