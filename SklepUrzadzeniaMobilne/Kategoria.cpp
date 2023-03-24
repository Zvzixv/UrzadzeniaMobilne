#include "Kategoria.h"


// Konstruktor domyœlny
Kategoria::Kategoria() : _id_kategorii(0), _nazwa("") {}

// Konstruktor z parametrami
Kategoria::Kategoria(int id, string nazwa) : _id_kategorii(id), _nazwa(nazwa) {}

// Metoda Get dla pola _id_kategorii
int Kategoria::Get_id_kategorii() {
    return _id_kategorii;
}

// Metoda Get dla pola _nazwa
string Kategoria::Get_nazwa() {
    return _nazwa;
}

// Metoda Set dla pola _id_kategorii
void Kategoria::Set_id_kategorii(int id) {
    _id_kategorii = id;
}

// Metoda Set dla pola _nazwa
void Kategoria::Set_nazwa(string nazwa) {
    _nazwa = nazwa;
}