#include "Adres.h"
// Konstruktor domyœlny
Adres::Adres() : _id_adresu(0), _miasto(""), _kod_pocztowy(""), _ulica(""), _numer_domu(0) {}

// Konstruktor z parametrami
Adres::Adres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu) : _id_adresu(id_adresu), _miasto(miasto), _kod_pocztowy(kod_pocztowy), _ulica(ulica), _numer_domu(numer_domu) {}

// Konstruktor z parametrami
Adres::Adres(string miasto, string kod_pocztowy, string ulica, int numer_domu) :  _miasto(miasto), _kod_pocztowy(kod_pocztowy), _ulica(ulica), _numer_domu(numer_domu) {}

