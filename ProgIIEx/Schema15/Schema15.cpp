//
//  Schema15.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 30/04/25.
//

#include "Schema15.hpp"

Schema15::Schema15() : pad(vector<int>(16)){
    for (int i = 0; i < 16; i++) {
        this->pad.at(i) = i;
    }
}

Schema15::Schema15(int dimension) : pad(vector<int>(dimension)){
    for (int i = 0; i < pad.size(); i++) {
        this->pad.at(i) = i;
    }
}
void Schema15::mischia(int a){
    for(int i = 0 ; i < a; ++i) {
        swap(pad.at( rand() % pad.size()), pad.at(i));
    }
}
