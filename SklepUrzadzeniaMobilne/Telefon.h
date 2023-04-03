#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include <fstream>
#include "json.hpp"
using namespace std;

class Telefon : Produkt
{
	Telefon(int id_produktu, string nazwa, string marka, float cena, int id_kategorii) : Produkt(id_produktu, nazwa, marka, cena, id_kategorii) {};
	bool zapiszProdukt();
};
