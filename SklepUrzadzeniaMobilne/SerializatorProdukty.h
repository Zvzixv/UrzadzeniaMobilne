#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include "json.hpp"
#include <fstream>
using namespace std;
using namespace nlohmann;
public class SerializatorProdukty {
public:
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy produktów.
	* Baza jest wczytywana z pliku .JSON do vectora w postaci string'a.
	* @param bazaProduktów baza produktów w postaci json.
	* @return true/false w zale¿noœci czy operacja siê powiod³a.
	*/
	static bool wczytajBazeProduktow(std::vector<json>* baza);
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy produktów.
	* Baza jest wczytywana z pliku .JSON do vectora w postaci string'a.
	* @param bazaProduktów baza produktów w postaci json.
	* @return true/false w zale¿noœci czy operacja siê powiod³a.
	*/
	static bool wczytajProdukty(std::vector<Produkt*>* bazaProduktow);
	/**
	* @brief Metoda odpowiedzialna za zapisanie bazy produktów.
	* Baza jest zapisywana do pliku .JSON z vectora.
	* @param bazaProduktów baza produktów w postaci json.
	*/
	static void zapiszBazeProduktow(std::vector<Produkt*>* bazaProduktow);
};
