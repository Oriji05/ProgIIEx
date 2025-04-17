//
//  Angolo.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 17/04/25.
//

#ifndef Angolo_hpp
#define Angolo_hpp

#include <stdio.h>

class Angolo{
private:
    int gradi;
    int primi;
    int secondi;
    
public:
    Angolo();
    Angolo(int gradi, int primi, int secondi);
    Angolo(double rad);
    void setGradi();
    void setPrimi();
    void setSecondi();
    int getGradi();
    int getPrimi();
    int getSecondi();
    void setAll();
    
};

#endif /* Angolo_hpp */
