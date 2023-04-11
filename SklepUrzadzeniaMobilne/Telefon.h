/**
* @file Telefon.h
* @brief Plik ten zawiera klasê Telefon bêd¹c¹ reprezentacj¹ produktu Telefon.
*/
#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
#include <fstream>
#include "json.hpp"
using namespace std;
using namespace nlohmann;
/**
* @brief Klasa Laptop reprezentuje produkt, bêd¹cy telefonem.
* Klasa ta pozwala na przechowanie informacji o telefonie. Dziedziczy ona publicznie po abstrakcyjnej klasie Produkt.
*/
class Telefon : public Produkt
{
public:
	/**
	* @brief Konstruktor wieloargumentowy klasy Telefon.
	* Konstruktor wieloargumentowy klasy Telefon. Konstruktor ten przyjmuje id_produktu, nazwê, markê oraz cenê jako argumenty, a nastêpnie wywo³uje konstruktor klasy bazowej Produkt z tymi samymi argumentami, dodaj¹c jednoczeœnie ³añcuch "Telefon" na koñcu.
	* @param id_produktu Id pozwalaj¹ce na identyfikacjê telefonu.
	* @param nazwa Nazwa, bêd¹ca modelem danego urz¹dzenia.
	* @param marka Marka, bêd¹ca równie¿ producentem urz¹dzenia.
	* @param cena Kwota potrzebna do zakupu urz¹dzenia.
	*/
	Telefon(int id_produktu, string nazwa, string marka, float cena) : Produkt(id_produktu, nazwa, marka, cena, "Telefon") {};
	/**
	* @brief Funkcja zapisuj¹ca dany obiekt do pliku JSON.
	* Funkcja, której zadaniem jest zapisanie obiektu, który t¹ metodê wywo³a³, do pliku JSON o nazwie "Produkty.json".
	* @return zwraca wartoœæ true, jeœli zapis przebieg³ poprawnie i false, jeœli nie uda³o siê zapisaæ obiektu.
	*/
	string Get_nazwa_pliku();
};
