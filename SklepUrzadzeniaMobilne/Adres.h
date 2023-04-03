#pragma once
#include <iostream>
#include <string>
using namespace std;

class Adres
{
	private:
	int _id_adresu;
	string _miasto;
	string _kod_pocztowy;
	string _ulica;
	int _numer_domu;

	public:
		Adres();
		Adres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu);
		Adres GetAdres();
		void SetAdres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu);
		bool EditAdres(Adres adres);
		bool DeleteAdres(int id);

		int GetIdAdresu() const { return _id_adresu; }
		string GetMiasto() const { return _miasto; }
		string GetKodPocztowy() const { return _kod_pocztowy; }
		string GetUlica() const { return _ulica; }
		int GetNumerDomu() const { return _numer_domu; }

		void SetIdAdresu(int id_adresu) { _id_adresu = id_adresu; }
    void SetMiasto(string miasto) { _miasto = miasto; }
    void SetKodPocztowy(string kod_pocztowy) { _kod_pocztowy = kod_pocztowy; }
    void SetUlica(string ulica) { _ulica = ulica; }
    void SetNumerDomu(int numer_domu) { _numer_domu = numer_domu; }
};

