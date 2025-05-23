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
#include "Contatti/Contatto.hpp"
#include "Templates/library.hpp"
#include "Rubrica/Rubrica.hpp"
#include "Punto3D/Punto3D.hpp"
#include "RPG/Mago/RGP_Pmago.hpp"
#include "Stack/Stack.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    Stack<int> st1(10);
    st1.push(5);
    st1.push(10);
    st1.printStack();
    
}
