#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{

public:
    static string konwerjsaIntNaString(int liczba);
    char wczytajZnak();
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int wczytajLiczbeCalkowita();
    int konwersjaStringNaInt(string liczba);
    //char wybierzOpcjeZMenuGlownego();
    //char wybierzOpcjeZMenuUzytkownika();
};

#endif

