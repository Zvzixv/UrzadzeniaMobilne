#pragma once
#include <iostream>
using namespace std;
class Produkt
{
	private:
	int _id_produktu;
	string _nazwa;
	string _marka;
	float _cena;
	int _id_kategorii;

	public:
		Produkt();
		Produkt GetProdukt();
		void SetProdukt(int id_produktu, string nazwa, string marka, float cena, int id_kategorii);
		bool EditProdukt(Produkt produkt);
		bool DeleteProdukt(int id);
};

