//
//  main.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#include <iostream>
#include <vector>
#include <fstream>

#include "Angoli/Angolo.hpp"
#include "Contatori/IntCounter.hpp"
#include "Contatori/StringCounter.hpp"
#include "Templates/templateFunction.hpp"
#include "Templates/Classes/Couple.hpp"
#include "Crittografia/Crittografia.hpp"
#include "Figure/Rettangolo.hpp"
#include "Studenti/Studente.hpp"
#include "Schema15/Schema15.hpp"

using namespace std;

#ifdef _WIN32
    const string home = getenv("USERPROFILE");
#else
    const string home = getenv("HOME");
#endif

const string projectPath = home + "/C++/ProgIIEx/ProgIIEx/";

int main(int argc, const char * argv[]) {
    string p;
    fstream stream(projectPath + "files/bros.txt" ,std::ios::out | std::ios::in);
    
    if (!stream.is_open()) {
        cout << "errore";
        return 0;
    }
    
    stream << "mi chiamo vincenzo" << endl;
    stream << "barbato" << endl;
    stream.seekg(0);
    
    while( getline(stream, p) ){
        cout << p<< endl;
    }
    
    stream.close();
    
    
}
