//
// Created by Krzysztof on 21/05/2017.
//

#ifndef PROI4_WYJSCIE_H
#define PROI4_WYJSCIE_H

#include <iostream>
#include "wejscie.h"

class wyjscie
{
protected:
    wejscie** output;
    bool outputval;
    int i;
    int lpodlaczen;
public:
    wyjscie(wejscie* x=NULL,int lpod=2):i(0),outputval(false)
    {
        lpodlaczen=lpod;
        output=new wejscie*[lpodlaczen];
        Setoutput(x);
    }
    ~wyjscie(){}
    void Setoutput(wejscie* x);
    void Setoutputval(bool x);
    bool zwroc();
    void operator+(wejscie& b);
    void operator-(wejscie& b);
    friend std::ostream & operator<<(std::ostream & wyj,wyjscie &s);
};

#endif //PROI4_WYJSCIE_H
