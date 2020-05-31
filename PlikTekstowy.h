#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy {

    const string NAZWA_PLIKU;

public:

    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }

    string pobierzNazwePliku();
    bool czyPlikJestPusty();

};

class PlikZAdresatami : public PlikTekstowy
{

public:

    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {};

    void dopisz(string tekst)
    {
        fstream plikTekstowy;
        plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

        if (plikTekstowy.good() == true)
        {
            if (czyPlikJestPusty())
                plikTekstowy << "To jest poczatek pliku" << endl;

             plikTekstowy << tekst << endl;
        }

        plikTekstowy.close();
    }
};


int main()
{
    PlikZAdresatami plikZAdresatami("adresaci.txt");

    plikZAdresatami.dopisz("tekst do dopisania");

    return 0;
}


#endif
