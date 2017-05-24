//
// Created by Krzysztof on 23/05/2017.
//

#ifndef PROI4_URZADZENIA_H
#define PROI4_URZADZENIA_H

#include <vector>
#include <fstream>
#include "wyjscie.h"
#include "wejscie.h"

class przycisk//pelni role przycisku generujacego sygnal
        :public wyjscie
{
public:
    przycisk(bool a = false) :wyjscie()
    {
        outputval = a;
    };
    friend std::ostream & operator<<(std::ostream & wyj,const przycisk &s);
    void set_signal(bool a);
};

class generator//pelni role generatora sygnalu
        :public wyjscie
{
private:
    int cal, akt = 0;
    bool *syg;
    bool stan;
public:
    generator(std::string n) :wyjscie()
    {
        cal = n.size();
        syg = new bool[cal]();
        insert_signal(n);
    };
    friend std::ostream & operator<<(std::ostream & wyj,const generator &s);
    void set_generator(bool a);
    void change_signal();
    void insert_signal(std:: string n);
};

class urz_wyjscia//moze pelnic role diody
        :public wejscie
{
public:
    urz_wyjscia()
    {
        Setobiekt(this);
    };
    friend std::ostream & operator<<(std::ostream & wyj,const urz_wyjscia &s);
};

class oscyloskop
        :public urz_wyjscia
{
private:
    std::vector<bool>zaw;
public:
    void sprawdz();
    void zapisz();
};

class wyswietlacz
{
private:
    std::vector<wyjscie*>wsk;
    int x;
    bool *zaw;
public:
    wyswietlacz(int a = 2)
    {
        x = a;
        zaw = new bool[x]();
        for(int i = 0; i<x; i++)
        {
            wsk.push_back(NULL);
        }
    }
    void operator+(wyjscie& b);
    void operator-(wyjscie& b);
    void sprawdz();
    friend std::ostream & operator<<(std::ostream & wyj,const wyswietlacz &s);
};
#endif //PROI4_URZADZENIA_H
