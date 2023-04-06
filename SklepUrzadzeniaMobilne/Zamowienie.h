/**
* @file Zamowienie.h
* @brief Plik ten zawiera klas� Zamowienie b�d�c� reprezentacj� pojedynczego zam�wienia z�o�onego w aplikacji.
*/
#pragma once
#include <string>
#include <vector>
#include "Uzytkownik.h"
#include "Produkt.h"
#include "json.hpp"
#include <fstream>

using namespace nlohmann;
using namespace std;
/**
* @brief Klasa Zamowienie reprezentuje pojedyncze zam�wienie z�o�one w aplikacji,.
* Klasa ta pozwala na przechowanie zam�wienia, utworzonego poprzez z�o�enie zam�wienia w aplikacji.
*/
class Zamowienie
{
private:
	int _id_zamowienia; ///< Id pozwalaj�ce na identyfikacj� w potencjalnej bazie, ale tak�e w aplikacji.
	Uzytkownik _uzytkownik; ///< U�ytkownik, kt�ry jest w�a�cicielem zam�wienia.
	vector<Produkt*> _produkty; ///< Lista produkt�w wchodz�ca w sk�ad zam�wienia. Jest to wektor wykorzystuj�cy polimorfizm.
	string _data_zlozenia; ///< Data, kiedy zosta�o z�o�one zam�wienie.
public:
	/**
	* @brief Konstruktor bezargumentowy.
	* Konstruktor bezargumentowy.
	*/
	Zamowienie();
	/**
	* @brief Konstruktor wieloargumentowy.
	* Konstruktor wieloargumentowy klasy Zamowienie. Konstruktor ten przyjmuje id, u�ytkownika, list� produkt�w oraz dat�.
	* @param id Id pozwalaj�ce na identyfikacj� zam�wienia.
	* @param uz U�ytkownik, kt�ry z�o�y� zam�wienie.
	* @param produkty Wektor produkt�w wchodz�ca w sk�ad zam�wienia.
	* @param data Data, kiedy zosta�o z�o�one zam�wienie.
	*/
	Zamowienie(int id, Uzytkownik uz, vector<Produkt*> produkty, string data);
	/**
	* @brief Getter pozwalaj�cy na pobranie id zam�wienia.
	* Funkcja zwracaj�ca warto�� numeryczn� b�d�c� id zam�wienia.
	* @return Id zam�wienia.
	*/
	int getIdZamowienia();
	/**
	* @brief Getter pozwalaj�cy na pobranie u�ytkownika.
	* Funkcja zwracaj�ca obiekt klasy Uzytkownik, b�d�cy w�a�cicielem zam�wienia.
	* @return U�ytkownik zam�wienia.
	*/
	Uzytkownik getUzytkownik();
	/**
	* @brief Getter pozwalaj�cy na pobranie wektora produkt�w.
	* Funkcja zwracaj�ca wektor zawieraj�cy wska�niki na obiekty klasy Produkt.
	* @return Produkty wchodz�ce w sk�ad zam�wienia.
	*/
	vector<Produkt*> getProdukty();
	/**
	* @brief Getter pozwalaj�cy na pobranie daty z�o�enia.
	* Funkcja zwracaj�ca ci�g znak�w b�d�cy dat� z�o�enia zam�wienia.
	* @return Data z�o�enia zam�wienia.
	*/
	string getDataZlozenia();
	/**
	* @brief Setter pozwalaj�cy na zapisanie id zam�wienia.
	* Funkcja ustawiaj�ca warto�� numeryczn� b�d�c� id zam�wienia.
	* @param id Id zam�wienia.
	*/
	void setIdZamowienia(int id);
	/**
	* @brief Setter pozwalaj�cy na zapisanie u�ytkownika.
	* Funkcja ustawiaj�ca obiekt klasy Uzytkownik, b�d�cy w�a�cicielem zam�wienia.
	* @param uz U�ytkownik zam�wienia.
	*/
	void setUzytkownik(Uzytkownik uz);
	/**
	* @brief Setter pozwalaj�cy na zapisanie wektora produkt�w.
	* Funkcja ustawiaj�ca wektor zawieraj�cy wska�niki na obiekty klasy Produkt.
	* @param produkty Produkty wchodz�ce w sk�ad zam�wienia.
	*/
	void setProdukty(vector<Produkt*> produkty);
	/**
	* @brief Setter pozwalaj�cy na zapisanie daty z�o�enia.
	* Funkcja ustawiaj�ca ci�g znak�w b�d�cy dat� z�o�enia zam�wienia.
	* @param data Data z�o�enia zam�wienia.
	*/
	void setDataZlozenia(string data);
};

