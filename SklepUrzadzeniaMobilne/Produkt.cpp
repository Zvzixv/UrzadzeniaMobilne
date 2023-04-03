#include "Produkt.h"

// Konstruktor domyœlny
Produkt::Produkt() : _id_produktu(0), _nazwa(""), _marka(""), _cena(0.0), _id_kategorii(0) {}

// Konstruktor z parametrami
Produkt::Produkt(int id_produktu, string nazwa, string marka, float cena, int id_kategorii)
    : _id_produktu(id_produktu), _nazwa(nazwa), _marka(marka), _cena(cena), _id_kategorii(id_kategorii) {}

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

// Metoda Get dla pola _id_kategorii
int Produkt::Get_id_kategorii() {
    return _id_kategorii;
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

// Metoda Set dla pola _id_kategorii
void Produkt::Set_id_kategorii(int id_kategorii) {
    _id_kategorii = id_kategorii;
}

// Metoda GetProdukt zwracaj¹ca obiekt klasy Produkt
//Produkt Produkt::GetProdukt() {
//    Produkt produkt(_id_produktu, _nazwa, _marka, _cena, _id_kategorii);
//    return produkt;
//}

// Metoda SetProdukt ustawiaj¹ca pola obiektu klasy Produkt
void Produkt::SetProdukt(int id_produktu, string nazwa, string marka, float cena, int id_kategorii) {
    _id_produktu = id_produktu;
    _nazwa = nazwa;
    _marka = marka;
    _cena = cena;
    _id_kategorii = id_kategorii;
}

// Metoda EditProdukt aktualizuj¹ca dane produktu na podstawie innego produktu
//bool Produkt::EditProdukt(Produkt produkt) {
//    if (_id_produktu == produkt.Get_id_produktu()) {
//        _nazwa = produkt.Get_nazwa();
//        _marka = produkt.Get_marka();
//        _cena = produkt.Get_cena();
//        _id_kategorii = produkt.Get_id_kategorii();
//        return true;
//    }
//    else {
//        return false;
//    }
//}


