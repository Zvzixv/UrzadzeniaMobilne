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
};