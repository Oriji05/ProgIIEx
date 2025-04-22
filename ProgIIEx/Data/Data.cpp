//
//  Data.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "Data.hpp"

Data::Data() : year(0), month(1), day(1) {}

Data::Data(int year, int month, int day) : year(year), month(month), day(day) {}

bool Data::val() {
    if (this->month > 12 || this->day > 31){
        return false;
    }
    if ((this->month == 11 || this->month == 4 || this->month == 6 || this->month == 9) && this->day > 30) {
        return false;
    }
    if (this->year / 4 != 0 && this->month == 2 && this->day > 28){
        return false;
    }
    
    return true;
}

void Data::mod(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void Data::out(){
    cout << "L'anno è: " << this->year << endl << "il mese è: " << this->month << endl << "il giorno è: " << this->day;
}
