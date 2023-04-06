#include "Zamowienie.h"


Zamowienie::Zamowienie() {
    _id_zamowienia = 0;
    _data_zlozenia = "";
}

Zamowienie::Zamowienie(int id, Uzytkownik uz, vector<Produkt*> produkty, string data) {
    _id_zamowienia = id;
    _uzytkownik = uz;
    _produkty = produkty;
    _data_zlozenia = data;
}

// Getters
int Zamowienie::getIdZamowienia()  {
    return _id_zamowienia;
}

Uzytkownik Zamowienie::getUzytkownik() {
    return _uzytkownik;
}

vector<Produkt*> Zamowienie::getProdukty() {
    return _produkty;
}

string Zamowienie::getDataZlozenia() {
    return _data_zlozenia;
}

// Setters
void Zamowienie::setIdZamowienia(int id) {
    _id_zamowienia = id;
}

void Zamowienie::setUzytkownik(Uzytkownik uz) {
    _uzytkownik = uz;
}

void Zamowienie::setProdukty(vector<Produkt*> produkty) {
    _produkty = produkty;
}

void Zamowienie::setDataZlozenia(string data) {
    _data_zlozenia = data;
}

