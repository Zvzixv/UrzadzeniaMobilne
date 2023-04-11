/**
* @file Laptop.h
* @brief Plik ten zawiera klas� Laptop b�d�c� reprezentacj� produktu Laptop.
*/
#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include "json.hpp"
#include <fstream>
using namespace std;
using namespace nlohmann;
/**
* @brief Klasa Laptop reprezentuje produkt, b�d�cy laptopem.
* Klasa ta pozwala na przechowanie informacji o laptopie. Dziedziczy ona publicznie po abstrakcyjnej klasie Produkt.
*/
class Laptop : public Produkt {
public:
	/**
	* @brief Konstruktor wieloargumentowy klasy Laptop.
	* Konstruktor wieloargumentowy klasy Laptop. Konstruktor ten przyjmuje id_produktu, nazw�, mark� oraz cen� jako argumenty, a nast�pnie wywo�uje konstruktor klasy bazowej Produkt z tymi samymi argumentami, dodaj�c jednocze�nie �a�cuch "Laptop" na ko�cu.
	* @param id_produktu Id pozwalaj�ce na identyfikacj� laptopa.
	* @param nazwa Nazwa, b�d�ca modelem danego urz�dzenia.
	* @param marka Marka, b�d�ca r�wnie� producentem urz�dzenia.
	* @param cena Kwota potrzebna do zakupu urz�dzenia.
	*/
	Laptop(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Laptop") {};
	/**
	* @brief Funkcja zapisuj�ca dany obiekt do pliku JSON.
	* Funkcja, kt�rej zadaniem jest zapisanie obiektu, kt�ry t� metod� wywo�a�, do pliku JSON o nazwie "Produkty.json".
	* @return zwraca warto�� true, je�li zapis przebieg� poprawnie i false, je�li nie uda�o si� zapisa� obiektu.
	*/
	string Get_nazwa_pliku();
};