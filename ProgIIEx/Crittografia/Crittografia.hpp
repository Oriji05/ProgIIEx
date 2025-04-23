//
//  Crittografia.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Crittografia_hpp
#define Crittografia_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Crittografia{
private:
    string message;
    int key;
    bool isCrypted;
public:
    Crittografia();
    Crittografia(string message, int key = 0);
    void encrypt();
    void decrypt();
    void setKey(int key);
    void setMessage(string message);
    int getkey();
    string getMessage();
};

#endif /* Crittografia_hpp */
