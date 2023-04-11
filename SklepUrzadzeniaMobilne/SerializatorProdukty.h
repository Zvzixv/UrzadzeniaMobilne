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
	* @brief Metoda odpowiedzialna za wczytanie bazy produkt�w.
	* Baza jest wczytywana z pliku .JSON do vectora w postaci string'a.
	* @param bazaProdukt�w baza produkt�w w postaci json.
	* @return true/false w zale�no�ci czy operacja si� powiod�a.
	*/
	static bool wczytajBazeProduktow(std::vector<json>* baza);
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy produkt�w.
	* Baza jest wczytywana z pliku .JSON do vectora w postaci string'a.
	* @param bazaProdukt�w baza produkt�w w postaci json.
	* @return true/false w zale�no�ci czy operacja si� powiod�a.
	*/
	static bool wczytajProdukty(std::vector<Produkt*>* bazaProduktow);
	/**
	* @brief Metoda odpowiedzialna za zapisanie bazy produkt�w.
	* Baza jest zapisywana do pliku .JSON z vectora.
	* @param bazaProdukt�w baza produkt�w w postaci json.
	*/
	static void zapiszBazeProduktow(std::vector<Produkt*>* bazaProduktow);
};
