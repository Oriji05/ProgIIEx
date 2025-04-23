//
//  Crittografia.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "Crittografia.hpp"


Crittografia::Crittografia() : message(""), key(0), isCrypted(false) {}

Crittografia::Crittografia(string message, int key) : message(message), key(key), isCrypted(false) {}

void Crittografia::encrypt(){
    if(this->isCrypted) {
        return;
    }
    
    for (int i = 0; i < message.size(); ++i) {
        this->message[i] = this->message[i] + this->key;
    }
    this->isCrypted = true;
}

void Crittografia::decrypt(){
    if (!this->isCrypted) {
        return;
    }
    for (int i = 0; i < message.size(); ++i) {
        this->message[i] = this->message[i] - this->key;
    }
    this->isCrypted = false;
}

void Crittografia::setKey(int key){
    if (!this->isCrypted) {
        this->key = key;
    }
}

void Crittografia::setMessage(string message){
    this->message = message;
}

int Crittografia::getkey(){
    return this->key;
}

string Crittografia::getMessage(){
    return this->message;
}
