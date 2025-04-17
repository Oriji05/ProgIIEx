//
//  main.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#include <iostream>
#include <vector>

#include "Angoli/Angolo.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Angolo *angolo = new Angolo(3);
    cout << angolo->getGradi() << " " <<angolo->getPrimi() << " " << angolo->getSecondi();
    
}
