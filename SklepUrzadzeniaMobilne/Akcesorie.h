#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include "json.hpp"
#include <fstream>
using namespace std;
using namespace nlohmann;

class Akcesoria : public Produkt {
public:
	Akcesoria(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Akcesoria") {};
	bool zapiszProdukt();
};
