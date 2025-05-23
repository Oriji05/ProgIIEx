//
//  Stack.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 23/05/25.
//

#ifndef Stack_h
#define Stack_h
#include <iostream>
using namespace std;

template <class T> class Stack{
    
private:
    T* data;
    int size;
    int index;
public:
    Stack(int size) : size(size), index(0) {
        this->data = new T[size];
    }
    Stack(const Stack<T> & copy) {
        this->size = copy.size;
        this->data = new T[size];
        for (int i = 0; i < size; i++) {
            this->data[i] = copy.data[i];
        }
    }
    ~Stack() {
        delete [] this->data;
    }
    
    T pop(){
        
        if(this->index < 0) {
            throw runtime_error("Stack vuoto");
        }
        this->index--;
        return this->data[this->index];
    }
    
    void push(T value) {
        if(this->index >= this->size) {
            throw runtime_error("Stack pieno");
        }
        this->data[this->index++] = value;
        
    }
    
    void printStack(){
        for (int i = 0; i < this->index; i++) {
            cout << "data[" << i <<"] = " << this->data[i] << endl;
        }
    }
    
    
};

#endif /* Stack_h */
