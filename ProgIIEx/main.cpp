//
//  main.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#include <iostream>
#include <vector>

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

int main(int argc, const char * argv[]) {
    Schema15 match(16);
    match.mischia(10);
    for (int i = 0; i < match.pad.size(); i++) {
        cout << match.pad.at(i) << endl;
    }
}
