#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include "json.hpp"
#include <fstream>
using namespace std;
using namespace nlohmann;

class Akcesorie : Produkt {
	Akcesorie(int id_produktu, string nazwa, string marka, float cena, int id_kategorii) : Produkt(id_produktu, nazwa, marka, cena, id_kategorii) {};
	bool zapiszProdukt();
};
