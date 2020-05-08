#include "AdresatMenedzer.h"

int AdresatMenedzer::dodajAdresata()// int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata( idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    //adresatMenedzer.pobierzIdZalogowanegouzytkownika();

    string imie, nazwisko, email, adres, numerTelefonu;
    cout << "Podaj imie: ";
    cin >> imie;
    //adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);
    adresat.ustawImie(imie);

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    //adresat.nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);
    adresat.ustawNazwisko(nazwisko);

    cout << "Podaj numer telefonu: ";
    cin >> numerTelefonu;
    adresat.ustawNumerTelefonu(numerTelefonu);

    cout << "Podaj email: ";
     cin >> email;
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    cin >> adres;
    adresat.ustawAdres(adres);

    return adresat;
}

void AdresatMenedzer::wyswietlDaneAdresata()
{
    for (int i = 0; i < adresaci.size(); i++)
    {
    cout << endl << "Id:                 " << adresaci[i].pobierzId() << endl;
//     cout << endl << "IdUser:                 " << adresaci[i].pobierzIdUzytkownika() << endl;
    cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
    cout << "Nazwisko:           " << adresaci[i].pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
    cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
    }
}
