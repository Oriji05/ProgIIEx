//
//  Schema15.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 30/04/25.
//

#ifndef Schema15_hpp
#define Schema15_hpp

#include <stdio.h>
#include <vector>
#include<stdlib.h>
using namespace std;
class Schema15 {
    private:
        int numMosse, vX, vY;
        
        const int maxIter = 1000;
    public:
    vector <int> pad;
        Schema15();
        Schema15(int);
        bool inizzializza();
        bool inizzializza(int *);
        bool genera(int);
        void mischia(int);
        bool valido();
        bool alto();
        bool basso();
        bool destra();
        bool sinistra();
        int mosse();
        void mostra();
};
#endif /* Schema15_hpp */
