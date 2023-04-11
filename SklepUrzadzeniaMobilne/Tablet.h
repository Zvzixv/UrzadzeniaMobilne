/**
* @file Tablet.h
* @brief Plik ten zawiera klasê Tablet bêd¹c¹ reprezentacj¹ produktu Tablet.
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
* @brief Klasa Tablet reprezentuje produkt, bêd¹cy tabletem.
* Klasa ta pozwala na przechowanie informacji o tablecie. Dziedziczy ona publicznie po abstrakcyjnej klasie Produkt.
*/
class Tablet : public Produkt {
public:
	/**
	* @brief Konstruktor wieloargumentowy klasy Tablet.
	* Konstruktor wieloargumentowy klasy Tablet. Konstruktor ten przyjmuje id_produktu, nazwê, markê oraz cenê jako argumenty, a nastêpnie wywo³uje konstruktor klasy bazowej Produkt z tymi samymi argumentami, dodaj¹c jednoczeœnie ³añcuch "Tablet" na koñcu.
	* @param id_produktu Id pozwalaj¹ce na identyfikacjê tableta.
	* @param nazwa Nazwa, bêd¹ca modelem danego urz¹dzenia.
	* @param marka Marka, bêd¹ca równie¿ producentem urz¹dzenia.
	* @param cena Kwota potrzebna do zakupu urz¹dzenia.
	*/
	Tablet(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Tablet") {};
	/**
	* @brief Funkcja zapisuj¹ca dany obiekt do pliku JSON.
	* Funkcja, której zadaniem jest zapisanie obiektu, który t¹ metodê wywo³a³, do pliku JSON o nazwie "Produkty.json".
	* @return zwraca wartoœæ true, jeœli zapis przebieg³ poprawnie i false, jeœli nie uda³o siê zapisaæ obiektu.
	*/
	string Get_nazwa_pliku();
};