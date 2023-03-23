#pragma once
#include <string>
#include "Adres.h"
using namespace std;
class Uzytkownik
{
	int _id_uzytkownika;
	string _imie;
	string _nazwisko;
	string _haslo;
	string _rola;
	Adres _adres;

public:
	Uzytkownik();
	Uzytkownik(int id, string im, string nazw, string haslo, string rola, string adres);

	int Get_id_uzytkownika();
	string GetImie();
	string GetNazwisko();
	string GetHaslo();
	string GetRola();
	Adres GetAdres();

	void SetIdUzytkownika(int id);
	void SetImie(string imie);
	void SetNazwisko(string nazwisko);
	void SetHaslo(string haslo);
	void SetRola(string rola);
	void SetAdres(Adres adres);


};

