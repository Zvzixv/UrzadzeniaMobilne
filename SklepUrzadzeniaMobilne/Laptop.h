#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include "json.hpp"
#include <fstream>
using namespace std;

class Laptop : public Produkt {
public:
	Laptop(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Laptop") {};
	bool zapiszProdukt();
};