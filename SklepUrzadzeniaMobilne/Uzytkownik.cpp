#include "Uzytkownik.h"

// Konstruktory
Uzytkownik::Uzytkownik() {
    _id_uzytkownika = 0;
    _imie = "";
    _nazwisko = "";
    _haslo = "";
    _rola = "";
    _adres = Adres();
}

Uzytkownik::Uzytkownik(int id, string imie, string nazwisko, string haslo, string rola, Adres adres) {
    _id_uzytkownika = id;
    _imie = imie;
    _nazwisko = nazwisko;
    _haslo = haslo;
    _rola = rola;
    _adres = adres;
}

// Metody Get
int Uzytkownik::Get_id_uzytkownika() {
    return _id_uzytkownika;
}

string Uzytkownik::GetImie() {
    return _imie;
}

string Uzytkownik::GetNazwisko() {
    return _nazwisko;
}

string Uzytkownik::GetHaslo() {
    return _haslo;
}

string Uzytkownik::GetRola() {
    return _rola;
}

Adres Uzytkownik::GetAdres() {
    return _adres;
}

// Metody Set
void Uzytkownik::SetIdUzytkownika(int id) {
    _id_uzytkownika = id;
}

void Uzytkownik::SetImie(string imie) {
    _imie = imie;
}

void Uzytkownik::SetNazwisko(string nazwisko) {
    _nazwisko = nazwisko;
}

void Uzytkownik::SetHaslo(string haslo) {
    _haslo = haslo;
}

void Uzytkownik::SetRola(string rola) {
    _rola = rola;
}

void Uzytkownik::SetAdres(Adres adres) {
    _adres = adres;
}