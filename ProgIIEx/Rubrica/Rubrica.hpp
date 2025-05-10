//
//  Rubrica.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 07/05/25.
//

#ifndef Rubrica_hpp
#define Rubrica_hpp

#include <iostream>
#include <string>
#include <fstream>
#include "../Contatti/Contatto.hpp"
#include "../Templates/library.hpp"


using namespace std;

extern const string home;

extern const string projectPath ;


class Rubrica{
private:
    string file;
    fstream stream;
    Contatto current;
public:
    Rubrica(string file);
    ~Rubrica();
    void interface();
    void printRubrica();
    void addContat();
    
    Rubrica& setContact(const Contatto&);
    Rubrica& setFile(string file);
    
};

#endif /* Rubrica_hpp */
