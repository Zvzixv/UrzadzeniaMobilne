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
	* @brief Metoda odpowiedzialna za zapisanie zamówienia do bazy zamówieñ.
	*Zapis odbywa siê do pliku .JSON z kontenera vector.
	* @param bazaZamówien baza zamówieñ w postaci json.
	*/
	static bool zapiszZamowienie(std::vector<Zamowienie>* bazaZamowien);
	/**
	* @brief Metoda odpowiedzialna za odczytanie bazy zamówieñ.
	* Baza jest odczytywana z pliku .JSON do vectora.
	* @param bazaZamówien baza zamówieñ w postaci json.
	*/
	static bool odczytajZamowienia(std::vector<Zamowienie>* bazaZamowien);

};