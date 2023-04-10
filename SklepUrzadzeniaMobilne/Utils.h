/**
* @file Utils.h
* @brief Plik ten zawiera klas� Utils kt�ra zawiera metody odpowiedzialne za komunikacj� z baz� danych.
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
* @brief Klasa Utils reprezentuje metody odpowiedzialne za komunikacj�z baz� danych.
* Wszystkie metody tej klasy s� metodami statycznymi.
*/
using namespace std;
using namespace nlohmann;

class Utils {
public:
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy danych do vectora.
	* Metoda wczytuje do kontenera vector obiekty zapisane w formacie .JSON.
	* @param bazaUzytkownikow baza u�ytkownik�w .
	* @return true/false w zale�no�ci czy operacja si� powiod�a.
	*/
	static bool wczytajBaze(std::vector<json>* bazaUzytkownikow);
	/**
	* @brief Metoda odpowiedzialna za wczytanie u�ytkownik�w do vectora.
	* Metoda wczytuje do kontenera vector u�ytkownik�w zapisanych w pliku .JSON.
	* @param bazaUzytkownikow baza u�ytkownik�w. 
	* @return true/false w zale�no�ci czy operacja si� powiod�a.
	*/
	static bool wczytajUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow);
	/**
	* @brief Metoda odpowiedzialna za zmian� roli u�ytkownika.
	* Zmiany roli u�ytkownika s� zapisywane w pliku .JSON.
	* @param login login
	*/
	static void zmienUprawnienia(string login);
	/**
	* @brief Metoda odpowiedzialna za zapisane bazy danych do pliku .JSON.
	* @param bazaUzytkownikow baza u�ytkownik�w. 
	* Zapis kontenera vector do pliku.
	*/
	static void zapiszBazeUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow);
	/**
	* @brief Metoda odpowiedzialna za zmian� has�a u�ytkownika.
	* Nowe has�o jest zapisywane w pliku .JSON
	* @param haslo haslo.
	*/
	static void zmienHaslo(string login, string haslo);
	/**
	* @brief Metoda odpowiedzialna za zmian� adresu u�ytkownika.
	* Nowy adres jest zapisywany w pliku .JSON do obiektu u�ytkownik.
	* @param login login.
	* @param miasto miasto zamieszkania.
	* @param kodPocztowy kod pocztowy.
	* @param ulica ulica.
	* @param numerDomu numer domu.
	*/
	static void zmienAdres(string login, string miasto, string kodPocztowy, string ulica, int numerDomu);
	/**
	* @brief Metoda odpowiedzialna za usuni�cie u�ytkownika.
	* U�ytkownik jest usuwany z pliku .JSON.
	* @param bazaUzytkownikow baza u�ytkownik�w. 
	* @param login login.
	* @return true/false w zale�no�ci czy operacja si� powiod�a.
	*/
	static bool usunUzytkownika(std::vector<Uzytkownik>* bazaUzytkownikow, string login);
	/**
	* @brief Metoda odpowiedzialna za wczytanie bazy produkt�w.
	* Baza jest wczytywana z pliku .JSON do vectora w postaci string'a.
	* @param baza baza produkt�w w postaci json. 
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