#include "Zamowienie.h"

Zamowienie::Zamowienie() {
    _id_zamowienia = 0;
    _data_zlozenia = "";
}

Zamowienie::Zamowienie(int id, Uzytkownik uz, vector<Produkt> produkty, string data) {
    _id_zamowienia = id;
    _uzytkownik = uz;
    _produkty = produkty;
    _data_zlozenia = data;
}

Zamowienie Zamowienie::GetZamowienie(int id) {
    // Implementacja pobierania zam�wienia z bazy danych o danym id
    // ...

    // Zwracamy obiekt klasy Zamowienie
    //return Zamowienie(id, uzytkownik, produkty, data_zlozenia);
    return Zamowienie();
}

void Zamowienie::SetZamowienie(int id, Uzytkownik uz, vector<Produkt> produkty, string data) {
    _id_zamowienia = id;
    _uzytkownik = uz;
    _produkty = produkty;
    _data_zlozenia = data;
}

bool Zamowienie::ZwrotZamowienia(int id) {
    // Implementacja zwrotu zam�wienia o danym id
    // ...

    // Zwracamy true je�li zwrot zosta� zrealizowany, false w przeciwnym wypadku
    return true;
}