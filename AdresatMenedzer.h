#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int IDOSTATNIEGOADRESATA = 0) :  plikZAdresatami(nazwaPlikuZAdresatami), idOstatniegoAdresata(IDOSTATNIEGOADRESATA) {};
    int dodajAdresata();// int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

    void wyswietlDaneAdresata();

};

#endif
