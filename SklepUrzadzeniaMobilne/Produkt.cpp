#include "Produkt.h"

// Konstruktor domyœlny
Produkt::Produkt() : _id_produktu(0), _nazwa(""), _marka(""), _cena(0.0) {}

// Konstruktor z parametrami
Produkt::Produkt(int id_produktu, string nazwa, string marka, float cena, string typ_produktu)
    : _id_produktu(id_produktu), _nazwa(nazwa), _marka(marka), _cena(cena), _typ_produktu(typ_produktu) {}

// Metoda Get dla pola _id_produktu
int Produkt::Get_id_produktu() {
    return _id_produktu;
}

// Metoda Get dla pola _nazwa
string Produkt::Get_nazwa() {
    return _nazwa;
}

// Metoda Get dla pola _marka
string Produkt::Get_marka() {
    return _marka;
}

// Metoda Get dla pola _cena
float Produkt::Get_cena() {
    return _cena;
}

// Metoda Get dla pola _typ_produktu
string Produkt::Get_typ_produktu() {
    return _typ_produktu;
}


// Metoda Set dla pola _id_produktu
void Produkt::Set_id_produktu(int id_produktu) {
    _id_produktu = id_produktu;
}

// Metoda Set dla pola _nazwa
void Produkt::Set_nazwa(string nazwa) {
    _nazwa = nazwa;
}

// Metoda Set dla pola _marka
void Produkt::Set_marka(string marka) {
    _marka = marka;
}

// Metoda Set dla pola _cena
void Produkt::Set_cena(float cena) {
    _cena = cena;
}

// Metoda Set dla pola _typ_produktu
void Produkt::Set_typ_produktu(string typ) {
    _typ_produktu = typ;
}




