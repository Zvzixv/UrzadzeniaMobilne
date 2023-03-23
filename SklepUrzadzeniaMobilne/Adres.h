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
		Adres GetAdres();
		void SetAdres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu);
		bool EditAdres(Adres adres);
		bool DeleteAdres(int id);
};

