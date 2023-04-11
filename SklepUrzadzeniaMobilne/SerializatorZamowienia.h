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
public class SerializatorZamowienia {
public:
	/**
	* @brief Metoda odpowiedzialna za zapisanie zam�wienia do bazy zam�wie�.
	*Zapis odbywa si� do pliku .JSON z kontenera vector.
	* @param bazaZam�wien baza zam�wie� w postaci json.
	*/
	static bool zapiszZamowienie(std::vector<Zamowienie>* bazaZamowien);
	/**
	* @brief Metoda odpowiedzialna za odczytanie bazy zam�wie�.
	* Baza jest odczytywana z pliku .JSON do vectora.
	* @param bazaZam�wien baza zam�wie� w postaci json.
	*/
	static bool odczytajZamowienia(std::vector<Zamowienie>* bazaZamowien);

};