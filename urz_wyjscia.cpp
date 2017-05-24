//
// Created by Krzysztof on 23/05/2017.
//
#include "urzadzenia.h"

std::ostream & operator<<(std::ostream & wyj,const urz_wyjscia &s)
{
    wyj<<"Aktualna wartosc na wyjsciu: ";
    wyj<<s.inputval<<std::endl;
    return wyj;
}