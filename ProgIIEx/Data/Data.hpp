//
//  Data.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Data{
private:
    int day;
    int month;
    int year;
    bool val();
public:
    Data();
    Data(int year, int month, int day);
    void mod(int year, int month = 1, int day = 1);
    void out();
};

#endif /* Data_hpp */
