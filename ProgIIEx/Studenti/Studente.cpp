//
//  Studente.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "Studente.hpp"

Studente::Studente(string nome, string cognome, string matricola, Data *immatricolazione) :
nome(nome), cognome(cognome), matricola(matricola), immatricolazione(immatricolazione)
{}

void Studente::setNome(string nome) {
    this->nome = nome;
}

void Studente::setCognome(string cognome) {
    this->cognome = cognome;
}

void Studente::setMatricola(string matricola) {
    this->matricola = matricola;
}

void Studente::setImmatricolazione(Data *data) {
    this->immatricolazione = data;
}


string Studente::getNome() const{
    return this->nome;
}

string Studente::getCognome() {
    return this->cognome;
}

string Studente::getMatricola() {
    return this->matricola;
}

void Studente::printImmatricolazione() {
    this->immatricolazione->out();
}

bool Studente::operator== (Studente s1) {
    return ((this->nome == s1.nome) && (this->cognome == s1.cognome) && (this->matricola == s1.matricola));
}




