//
// Created by Krzysztof on 23/05/2017.
//

#ifndef PROI4_WEJSCIE_H
#define PROI4_WEJSCIE_H
#include <iostream>

class wejscie
{
protected:
    int id;
    bool inputval;
public:
    wejscie(bool a=false,void *b=NULL):inputval(a){}
    void* obiekt;
    void Setobiekt(void* b);
    bool zwroc();
    int zwrocid();
    void Setid(int x);
    void Setinputval(bool x);
    friend std::ostream & operator<<(std::ostream & wyj,wejscie &s);
};


#endif //PROI4_WEJSCIE_H
