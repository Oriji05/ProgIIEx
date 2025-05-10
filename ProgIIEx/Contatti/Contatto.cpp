//
//  Contatti.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 07/05/25.
//

#include "Contatto.hpp"


/*
 -Contatto();
 -Contatto(string, string);
 -inline static const char sep = ':';
 -inline static const int maxNum = 16;
 -inline static const int maxChar = 20;
 -static string extrnome(string);
 -static string extrnumero(string);

 Contatto& setNome(string);
 Contatto& setNumero(string);
 string getNome();
 string getNumero();
 string getContact();
*/


Contatto::Contatto() : nome(""), numero("") {}

Contatto::Contatto(string nome, string numero){
    if (numero.size() < Contatto::maxNum && nome.size() < Contatto::maxChar){
        this->numero = numero;
        this->nome = nome;
    }
    
}

Contatto::Contatto(string record) : nome(Contatto::extrnome(record)), numero(Contatto::extrnumero(record)) {}

string Contatto::extrnome(string record){
    string nome = "";
    int i = 0;
    while (record[i] != Contatto::sep) {
        nome = nome + record[i];
        ++i;
    }
    return nome;
}

string Contatto::extrnumero(string record){
    string nome = "";
    int i = (int)record.find(Contatto::sep);
    
    return record.substr(i + 1, record.size());
}

Contatto& Contatto::setNome(string nome){
    this->nome = nome;
    return *this;
}

Contatto& Contatto::setNumero(string nome){
    this->numero = nome;
    return *this;
}

string Contatto::getNome(){
    return this->nome;
}

string Contatto::getNumero(){
    return this->numero;
}

string Contatto::getContact(){
    return this->nome + ':' + this->numero;
}


Contatto& Contatto::operator=(const Contatto& right){
    
    if (this != &right) {
        this->nome = right.nome;
        this->numero = right.numero;
    }
    
    return *this;
}

