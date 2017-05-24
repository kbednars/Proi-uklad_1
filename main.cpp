#include "wyjscie.h"
#include "wejscie.h"
#include "urzadzenia.h"

using namespace std;

int main()
{
    union uklad
    {

    };
    generator urz1("0101");
    generator urz2("1010");
    urz1.set_generator(true);
    urz2.set_generator(true);
    oscyloskop os1;
    oscyloskop os2;
    wyswietlacz w1(4);
    w1+urz1;
    w1+urz2;
    w1+urz2;
    w1+urz1;
    w1.sprawdz();
    cout<<w1;
    cout<<urz1<<urz2<<endl;
    urz1.change_signal();
    cout<<urz1<<urz2<<endl;
    w1.sprawdz();
    cout<<w1;
    urz2.change_signal();
    cout<<urz1<<urz2<<endl;
    w1.sprawdz();
    cout<<w1;
    urz2.change_signal();
    cout<<urz1<<urz2<<endl;
    w1.sprawdz();
}