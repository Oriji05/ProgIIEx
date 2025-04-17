//
//  Dado.hpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 16/04/25.
//

#ifndef Dado_hpp
#define Dado_hpp


class Dado{
    
private:
    int facce;
    void setFacce(int facce);
public:
    Dado();
    Dado(int facce = 6);
    Dado(const Dado &copy);
    void agita();
    int lancia();
    int getFacce();
    
};


#endif /* Dado_hpp */
