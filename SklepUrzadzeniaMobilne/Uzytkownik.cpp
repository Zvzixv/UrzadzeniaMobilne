#include "Uzytkownik.h"


// Konstruktory
Uzytkownik::Uzytkownik() {
    _id_uzytkownika = 0;
    _login = "";
    _imie = "";
    _nazwisko = "";
    _haslo = "";
    _rola = "";
    _adres = Adres();
}

Uzytkownik::Uzytkownik(int id, string login, string imie, string nazwisko, string haslo, string rola, Adres adres) {
    _id_uzytkownika = id;
    _login = login;
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

string Uzytkownik::GetLogin() {
    return _login;
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

void Uzytkownik::SetLogin(string login) {
    _login = login;
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
bool Uzytkownik::zapiszUzytkownika(std::vector<json>* array) {
    json data;
    data["id_uzytkownika"] = this->Get_id_uzytkownika();
    data["login"] = this->GetLogin();
    data["imie"] = this->GetImie();
    data["nazwisko"] = this->GetNazwisko();
    data["haslo"] = this->GetHaslo();
    data["rola"] = this->GetRola();
    data["adres"]["id_adresu"] = this->GetAdres().GetIdAdresu();
    data["adres"]["miasto"] = this->GetAdres().GetMiasto();
    data["adres"]["kod_pocztowy"] = this->GetAdres().GetKodPocztowy();
    data["adres"]["ulica"] = this->GetAdres().GetUlica();
    data["adres"]["nr_domu"] = this->GetAdres().GetNumerDomu();
    array->push_back(data);
    std::ofstream file("Uzytkownicy.json");
    std::string jsonStr = json(*array).dump();
    if (file.is_open()) {
        file << jsonStr;
        file.close();
        return true;
    }
    else {
        return false;
    }
}
