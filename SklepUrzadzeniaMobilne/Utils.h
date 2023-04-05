#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Uzytkownik.h"
#include "json.hpp"
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
};