//
//  Angolo.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 17/04/25.
//

#ifndef Angolo_hpp
#define Angolo_hpp

#include <string>
using namespace std;

class Angolo{
private:
    int gradi;
    int primi;
    int secondi;
    
public:
    Angolo();
    Angolo(int gradi, int primi, int secondi);
    Angolo(double rad);
    void setGradi(int gradi);
    void setPrimi(int primi);
    void setSecondi(int secondi);
    int getGradi();
    int getPrimi();
    int getSecondi();
    void setAll(int gradi, int primi, int secondi);
    string getAll();
    
};

#endif /* Angolo_hpp */
