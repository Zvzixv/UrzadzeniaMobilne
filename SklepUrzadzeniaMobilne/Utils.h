#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Uzytkownik.h"
#include "json.hpp"
#include "Produkt.h"
#include "Tablet.h"
#include "Telefon.h"
#include "Akcesorie.h"
#include "Laptop.h"
#include "Zamowienie.h"
using namespace std;
using namespace nlohmann;

class Utils {
public:
	static bool wczytajBaze(std::vector<json>* baza);
	static bool wczytajUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow);
	static void zmienUprawnienia(string login);
	static void zapiszBazeUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow);
	static void zmienHaslo(string login, string haslo);
	static void zmienAdres(string login, string miasto, string kodPocztowy, string ulica, int numerDomu);


	static bool wczytajBazeProduktow(std::vector<json>* baza);
	static bool wczytajProdukty(std::vector<Produkt*>* bazaProduktow);
	static void zapiszBazeProduktow(std::vector<Produkt*>* bazaProduktow);


	static bool zapiszZamowienie(std::vector<Zamowienie>* bazaZamowien);
	static bool odczytajZamowienia(std::vector<Zamowienie>* bazaZamowien);

};