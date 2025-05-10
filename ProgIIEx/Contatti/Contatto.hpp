//
//  Contatti.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 07/05/25.
//

#ifndef Contatti_hpp
#define Contatti_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Contatto{
    private:
        string nome = "";
        string numero = "";
    public:
        Contatto();
        Contatto(string, string);
        Contatto(string);
        inline static const char sep = ':';
        inline static const int maxNum = 16;
        inline static const int maxChar = 20;
        static string extrnome(string);
        static string extrnumero(string);
    
        Contatto& setNome(string);
        Contatto& setNumero(string);
        string getNome();
        string getNumero();
        string getContact();
        
    
        Contatto& operator=(const Contatto&);
    
};

#endif /* Contatti_hpp */
