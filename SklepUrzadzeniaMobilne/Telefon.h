#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include <fstream>
#include "json.hpp"
using namespace std;

class Telefon : public Produkt
{
public:
	Telefon(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Telefon") {};
	bool zapiszProdukt();
};
