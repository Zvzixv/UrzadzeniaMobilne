#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
using namespace std;

class Tablet : public Produkt {
public:
	Tablet(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Tablet") {};
	bool zapiszProdukt();
};