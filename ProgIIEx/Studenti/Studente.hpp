//
//  Studente.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Studente_hpp
#define Studente_hpp

#include <stdio.h>
#include <string>
#include "../Data/Data.hpp"

using std::string;

class Studente {
private:
    string nome;
    string cognome;
    string matricola;
    Data *immatricolazione;
public:
    Studente(string nome, string cognome, string matricola, Data *immatricolazione);
    void setNome(string nome);
    void setCognome(string cognome);
    void setMatricola(string matricola);
    void setImmatricolazione(Data * data);
    string getNome();
    string getCognome();
    string getMatricola();
    void printImmatricolazione();
};

#endif /* Studente_hpp */
