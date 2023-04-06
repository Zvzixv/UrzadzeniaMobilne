/**
* @file Zamowienie.h
* @brief Plik ten zawiera klasê Zamowienie bêd¹c¹ reprezentacj¹ pojedynczego zamówienia z³o¿onego w aplikacji.
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
* @brief Klasa Zamowienie reprezentuje pojedyncze zamówienie z³o¿one w aplikacji,.
* Klasa ta pozwala na przechowanie zamówienia, utworzonego poprzez z³o¿enie zamówienia w aplikacji.
*/
class Zamowienie
{
private:
	int _id_zamowienia; ///< Id pozwalaj¹ce na identyfikacjê w potencjalnej bazie, ale tak¿e w aplikacji.
	Uzytkownik _uzytkownik; ///< U¿ytkownik, który jest w³aœcicielem zamówienia.
	vector<Produkt*> _produkty; ///< Lista produktów wchodz¹ca w sk³ad zamówienia. Jest to wektor wykorzystuj¹cy polimorfizm.
	string _data_zlozenia; ///< Data, kiedy zosta³o z³o¿one zamówienie.
public:
	/**
	* @brief Konstruktor bezargumentowy.
	* Konstruktor bezargumentowy.
	*/
	Zamowienie();
	/**
	* @brief Konstruktor wieloargumentowy.
	* Konstruktor wieloargumentowy klasy Zamowienie. Konstruktor ten przyjmuje id, u¿ytkownika, listê produktów oraz datê.
	* @param id Id pozwalaj¹ce na identyfikacjê zamówienia.
	* @param uz U¿ytkownik, który z³o¿y³ zamówienie.
	* @param produkty Wektor produktów wchodz¹ca w sk³ad zamówienia.
	* @param data Data, kiedy zosta³o z³o¿one zamówienie.
	*/
	Zamowienie(int id, Uzytkownik uz, vector<Produkt*> produkty, string data);
	/**
	* @brief Getter pozwalaj¹cy na pobranie id zamówienia.
	* Funkcja zwracaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id zamówienia.
	* @return Id zamówienia.
	*/
	int getIdZamowienia();
	/**
	* @brief Getter pozwalaj¹cy na pobranie u¿ytkownika.
	* Funkcja zwracaj¹ca obiekt klasy Uzytkownik, bêd¹cy w³aœcicielem zamówienia.
	* @return U¿ytkownik zamówienia.
	*/
	Uzytkownik getUzytkownik();
	/**
	* @brief Getter pozwalaj¹cy na pobranie wektora produktów.
	* Funkcja zwracaj¹ca wektor zawieraj¹cy wskaŸniki na obiekty klasy Produkt.
	* @return Produkty wchodz¹ce w sk³ad zamówienia.
	*/
	vector<Produkt*> getProdukty();
	/**
	* @brief Getter pozwalaj¹cy na pobranie daty z³o¿enia.
	* Funkcja zwracaj¹ca ci¹g znaków bêd¹cy dat¹ z³o¿enia zamówienia.
	* @return Data z³o¿enia zamówienia.
	*/
	string getDataZlozenia();
	/**
	* @brief Setter pozwalaj¹cy na zapisanie id zamówienia.
	* Funkcja ustawiaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id zamówienia.
	* @param id Id zamówienia.
	*/
	void setIdZamowienia(int id);
	/**
	* @brief Setter pozwalaj¹cy na zapisanie u¿ytkownika.
	* Funkcja ustawiaj¹ca obiekt klasy Uzytkownik, bêd¹cy w³aœcicielem zamówienia.
	* @param uz U¿ytkownik zamówienia.
	*/
	void setUzytkownik(Uzytkownik uz);
	/**
	* @brief Setter pozwalaj¹cy na zapisanie wektora produktów.
	* Funkcja ustawiaj¹ca wektor zawieraj¹cy wskaŸniki na obiekty klasy Produkt.
	* @param produkty Produkty wchodz¹ce w sk³ad zamówienia.
	*/
	void setProdukty(vector<Produkt*> produkty);
	/**
	* @brief Setter pozwalaj¹cy na zapisanie daty z³o¿enia.
	* Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy dat¹ z³o¿enia zamówienia.
	* @param data Data z³o¿enia zamówienia.
	*/
	void setDataZlozenia(string data);
};

