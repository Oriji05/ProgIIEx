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
    string getNome() const;
    string getCognome();
    string getMatricola();
    void printImmatricolazione();
    bool operator== (Studente s1);

};

#endif /* Studente_hpp */
