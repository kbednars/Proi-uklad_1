//
// Created by Krzysztof on 23/05/2017.
//
#include "urzadzenia.h"

void oscyloskop:: sprawdz()
{
    zaw.push_back(inputval);
}

void oscyloskop:: zapisz()
{
    std::ofstream plik;
    plik.open( "przebieg.txt", std::ios::app);
    if(plik.good())
    {
        plik<<"Przebieg zapisany w oscyloskopie: ";
        for(int i = 0; i<zaw.size(); i++ )
        {
            if(zaw[i]==true) plik<<"1, ";
            else plik<<"0, ";
        }
        plik<<"\n";
    }
    plik.close();
}
