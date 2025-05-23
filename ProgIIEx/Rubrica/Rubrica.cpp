//
//  Rubrica.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 07/05/25.
//

#include "Rubrica.hpp"

/*
 Rubrica(string file);
 void interface();
 Rubrica& setContact(const Contatto&);
 Rubrica& setFile(string file);
 */

const string home = getBasePath();
const string projectPath = home + "/C++/ProgIIEx/ProgIIEx/";

Rubrica::Rubrica(string file) : file(file) {
    this->stream.open(projectPath + file, ios::app | ios::in | ios::out);
    if (!this->stream.is_open()) {
        throw "errore";
    }
}

Rubrica::~Rubrica(){
    this->stream.close();
}

Rubrica& Rubrica::setContact(const Contatto & cont) {
    this->current = cont;
    return *this;
}

Rubrica& Rubrica::setFile(string file) {
    this->file = file;
    this->stream.close();
    this->stream.open(projectPath + file, ios::app | ios::in | ios::out);
    
    return *this;
}

void Rubrica::printRubrica(){
    this->stream.clear();
    this->stream.seekg(0);
    string p;
    while (getline(this->stream, p)) {
        cout << p << endl;
    }
}

void Rubrica::addContat(){
    string nome;
    string numero;
    this->stream.clear();
    this->stream.seekp(0, ios::end);
    cout << "inserisci il nome: ";
    cin >> nome;
    cout << "inserisci il numero: ";
    cin >> numero;
    this->setContact(Contatto(nome, numero));
}


void Rubrica::interface(){
    char select;
    do {
        
        cout << "inserisci l'operazione che vuoi fare" << endl;
        cout << "(i)nsert" << endl << "(p)rint" << endl;
        cin >> select;
        cin.ignore();
        switch (select) {
            case 'i':
                this->addContat();
                break;
                
            case 'p':
                this->printRubrica();
                break;
                
            default:
                select = 'x';
                break;
        }
    } while (select != 'x');
}
