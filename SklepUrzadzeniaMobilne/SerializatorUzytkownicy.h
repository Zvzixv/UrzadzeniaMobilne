#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include "json.hpp"
#include <fstream>
#include "Uzytkownik.h"
using namespace std;
using namespace nlohmann;
public class SerializatorUzytkownicy {
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
};
