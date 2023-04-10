/**
* @file Utils.h
* @brief Plik ten zawiera klasê Utils która zawiera metody odpowiedzialne za komunikacjê z baz¹ danych.
*/
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

/**
* @brief Klasa Utils reprezentuje metody odpowiedzialne za komunikacjêz baz¹ danych.
* Wszystkie metody tej klasy s¹ metodami statycznymi.
*/
using namespace std;
using namespace nlohmann;

class Utils {
public:
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy danych do vectora.
	* Metoda wczytuje do kontenera vector obiekty zapisane w formacie .JSON.
	* @param bazaUzytkownikow baza u¿ytkowników .
	* @return true/false w zale¿noœci czy operacja siê powiod³a.
	*/
	static bool wczytajBaze(std::vector<json>* bazaUzytkownikow);
	/**
	* @brief Metoda odpowiedzialna za wczytanie u¿ytkowników do vectora.
	* Metoda wczytuje do kontenera vector u¿ytkowników zapisanych w pliku .JSON.
	* @param bazaUzytkownikow baza u¿ytkowników. 
	* @return true/false w zale¿noœci czy operacja siê powiod³a.
	*/
	static bool wczytajUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow);
	/**
	* @brief Metoda odpowiedzialna za zmianê roli u¿ytkownika.
	* Zmiany roli u¿ytkownika s¹ zapisywane w pliku .JSON.
	* @param login login
	*/
	static void zmienUprawnienia(string login);
	/**
	* @brief Metoda odpowiedzialna za zapisane bazy danych do pliku .JSON.
	* @param bazaUzytkownikow baza u¿ytkowników. 
	* Zapis kontenera vector do pliku.
	*/
	static void zapiszBazeUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow);
	/**
	* @brief Metoda odpowiedzialna za zmianê has³a u¿ytkownika.
	* Nowe has³o jest zapisywane w pliku .JSON
	* @param haslo haslo.
	*/
	static void zmienHaslo(string login, string haslo);
	/**
	* @brief Metoda odpowiedzialna za zmianê adresu u¿ytkownika.
	* Nowy adres jest zapisywany w pliku .JSON do obiektu u¿ytkownik.
	* @param login login.
	* @param miasto miasto zamieszkania.
	* @param kodPocztowy kod pocztowy.
	* @param ulica ulica.
	* @param numerDomu numer domu.
	*/
	static void zmienAdres(string login, string miasto, string kodPocztowy, string ulica, int numerDomu);
	/**
	* @brief Metoda odpowiedzialna za usuniêcie u¿ytkownika.
	* U¿ytkownik jest usuwany z pliku .JSON.
	* @param bazaUzytkownikow baza u¿ytkowników. 
	* @param login login.
	* @return true/false w zale¿noœci czy operacja siê powiod³a.
	*/
	static bool usunUzytkownika(std::vector<Uzytkownik>* bazaUzytkownikow, string login);
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy produktów.
	* Baza jest wczytywana z pliku .JSON do vectora w postaci string'a.
	* @param baza baza produktów w postaci json. 
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