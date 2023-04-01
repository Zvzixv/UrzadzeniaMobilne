#include "Zamowienie.h"
#include "json.hpp"
#include <fstream>

using namespace nlohmann;

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
    // Implementacja pobierania zamówienia z bazy danych o danym id
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
    // Implementacja zwrotu zamówienia o danym id
    // ...

    // Zwracamy true jeœli zwrot zosta³ zrealizowany, false w przeciwnym wypadku
    return true;
}

bool Zamowienie::ZapiszZamowienie() {
    json data;
    data["id"] = this->_id_zamowienia;
    data["user"]["id"] = this->_uzytkownik.Get_id_uzytkownika();
    data["user"]["imie"] = this->_uzytkownik.GetImie();
    data["user"]["nazwisko"] = this->_uzytkownik.GetNazwisko();
    for (auto i : this->_produkty) {
        data["produkty"]["id"] = i.Get_id_produktu();
        data["produkty"]["nazwa"] = i.Get_nazwa();
        data["produkty"]["marka"] = i.Get_marka();
        data["produkty"]["cena"] = i.Get_cena();
        data["produkty"]["id_kategorii"] = i.Get_id_kategorii();
    }
    std::ofstream file("data.json");
    file << data;
    file.close();
    return true;
}