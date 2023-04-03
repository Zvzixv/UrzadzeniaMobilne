#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
using namespace std;

class Tablet : Produkt {
public:
	Tablet(int id_produktu, string nazwa, string marka, float cena, int id_kategorii) : Produkt(id_produktu, nazwa, marka, cena, id_kategorii) {};
	bool zapiszProdukt();
};