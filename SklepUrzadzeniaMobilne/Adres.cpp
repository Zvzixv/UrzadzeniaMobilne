#include "Adres.h"
//extern int idAdr;
// Konstruktor domyœlny
Adres::Adres() : _id_adresu(0), _miasto(""), _kod_pocztowy(""), _ulica(""), _numer_domu(0) {}

// Konstruktor z parametrami
Adres::Adres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu) : _id_adresu(id_adresu), _miasto(miasto), _kod_pocztowy(kod_pocztowy), _ulica(ulica), _numer_domu(numer_domu) {}

// Konstruktor z parametrami
Adres::Adres(string miasto, string kod_pocztowy, string ulica, int numer_domu) :  _miasto(miasto), _kod_pocztowy(kod_pocztowy), _ulica(ulica), _numer_domu(numer_domu) {}

// Metoda zwracaj¹ca obiekt typu Adres
Adres Adres::GetAdres() {
	return *this;
}

// Metoda ustawiaj¹ca wartoœci pól klasy Adres
void Adres::SetAdres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu) {
	_id_adresu = id_adresu;
	_miasto = miasto;
	_kod_pocztowy = kod_pocztowy;
	_ulica = ulica;
	_numer_domu = numer_domu;
}

// Metoda edytuj¹ca obiekt typu Adres
bool Adres::EditAdres(Adres adres) {
	if (adres._id_adresu == _id_adresu) {
		_miasto = adres._miasto;
		_kod_pocztowy = adres._kod_pocztowy;
		_ulica = adres._ulica;
		_numer_domu = adres._numer_domu;
		return true;
	}
	else {
		return false;
	}
}

// Metoda usuwaj¹ca obiekt typu Adres o zadanym id
bool Adres::DeleteAdres(int id) {
	if (id == _id_adresu) {
		_id_adresu = 0;
		_miasto = "";
		_kod_pocztowy = "";
		_ulica = "";
		_numer_domu = 0;
		return true;
	}
	else {
		return false;
	}
}