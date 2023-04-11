/**
* @file Tablet.h
* @brief Plik ten zawiera klas� Tablet b�d�c� reprezentacj� produktu Tablet.
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
* @brief Klasa Tablet reprezentuje produkt, b�d�cy tabletem.
* Klasa ta pozwala na przechowanie informacji o tablecie. Dziedziczy ona publicznie po abstrakcyjnej klasie Produkt.
*/
class Tablet : public Produkt {
public:
	/**
	* @brief Konstruktor wieloargumentowy klasy Tablet.
	* Konstruktor wieloargumentowy klasy Tablet. Konstruktor ten przyjmuje id_produktu, nazw�, mark� oraz cen� jako argumenty, a nast�pnie wywo�uje konstruktor klasy bazowej Produkt z tymi samymi argumentami, dodaj�c jednocze�nie �a�cuch "Tablet" na ko�cu.
	* @param id_produktu Id pozwalaj�ce na identyfikacj� tableta.
	* @param nazwa Nazwa, b�d�ca modelem danego urz�dzenia.
	* @param marka Marka, b�d�ca r�wnie� producentem urz�dzenia.
	* @param cena Kwota potrzebna do zakupu urz�dzenia.
	*/
	Tablet(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Tablet") {};
	/**
	* @brief Funkcja zapisuj�ca dany obiekt do pliku JSON.
	* Funkcja, kt�rej zadaniem jest zapisanie obiektu, kt�ry t� metod� wywo�a�, do pliku JSON o nazwie "Produkty.json".
	* @return zwraca warto�� true, je�li zapis przebieg� poprawnie i false, je�li nie uda�o si� zapisa� obiektu.
	*/
	string Get_nazwa_pliku();
};