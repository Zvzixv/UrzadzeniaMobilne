/**
* @file Produkt.h
* @brief Plik ten zawiera klas� abstrakcyjn� Produkt b�d�c� reprezentacj� produktu dost�pnego w sklepie.
*/
#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
* @brief Klasa Produkt reprezentuje produkt dost�pny do sprzeda�y w sklepie.
* Klasa ta pozwala na przechowanie produktu dost�pnego w sklepie.
*/
class Produkt {
private:
    int _id_produktu; ///< Id pozwalaj�ce na identyfikacj� produktu.
    string _nazwa; ///< Nazwa, b�d�ca modelem danego urz�dzenia.
    string _marka; ///< Marka, b�d�ca r�wnie� producentem urz�dzenia.
    float _cena; ///< wota potrzebna do zakupu urz�dzenia.
    string _typ_produktu; ///< Zmienna przechowuj�ca informacje, jakiego typu jest obiekt klasy pochodnej.

public:
    /**
	* @brief Konstruktor bezargumentowy.
	* Konstruktor bezargumentowy.
	*/
    Produkt();
    /**
	* @brief Konstruktor wieloargumentowy klasy Produkt.
	* Konstruktor wieloargumentowy klasy Produkt. Konstruktor ten przyjmuje id_produktu, nazw�, mark� oraz cen� i typ produktu jako argumenty.
	* @param id_produktu Id pozwalaj�ce na identyfikacj� produktu.
	* @param nazwa Nazwa, b�d�ca modelem danego urz�dzenia.
	* @param marka Marka, b�d�ca r�wnie� producentem urz�dzenia.
	* @param cena Kwota potrzebna do zakupu urz�dzenia.
    * @param typ_produktu Definiuje, czy mamy do czynienia z tabletem, laptopem, telefonem czy akcesoriem.
	*/
    Produkt(int id_produktu, string nazwa, string marka, float cena, string typ_produktu);
    /**
	* @brief Getter pozwalaj�cy na pobranie id produktu.
	* Funkcja zwracaj�ca warto�� numeryczn� b�d�c� id produktu.
	* @return Id produktu
	*/
    int Get_id_produktu();
    /**
    * @brief Getter pozwalaj�cy na pobranie nazwy, modelu produktu.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy nazw�, modelem produktu.
    * @return Nazwa produktu
    */
    string Get_nazwa();
    /**
    * @brief Getter pozwalaj�cy na pobranie marki, producenta produktu.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy mark�, producentem produktu.
    * @return Marka produktu
    */
    string Get_marka();
    /**
    * @brief Getter pozwalaj�cy na pobranie ceny produktu.
    * Funkcja zwracaj�ca liczb� b�d�c� kwot� potrzebn� do zakupu produktu.
    * @return Cena produktu
    */
    float Get_cena();
    /**
    * @brief Getter pozwalaj�cy na pobranie typu produktu.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy typem produktu. Pozwala na identyfikacj�, czy produkt jest tabletem, telefonem, akcesoriem, czy laptopem.
    * @return Typ produktu
    */
    string Get_typ_produktu();
    /**
	* @brief Setter pozwalaj�cy na zapisanie id produktu.
	* Funkcja ustawiaj�ca warto�� numeryczn� b�d�c� id produktu.
	* @param id_produktu Id produktu
	*/
    virtual string Get_nazwa_pliku()=0;
    /**
    * @brief Setter pozwalaj�cy na zapisanie id produktu.
    * Funkcja ustawiaj�ca warto�� numeryczn� b�d�c� id produktu.
    * @param id_produktu Id produktu
    */
    void Set_id_produktu(int id_produktu);
    /**
    * @brief Setter pozwalaj�cy na zapisanie nazwy, modelu produktu.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy nazw�, modelem produktu.
    * @param nazwa Nazwa produktu
    */
    void Set_nazwa(string nazwa);
    /**
    * @brief Setter pozwalaj�cy na zapisanie marki, producenta produktu.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy mark�, producentem produktu.
    * @param marka Marka produktu
    */
    void Set_marka(string marka);
    /**
    * @brief Setter pozwalaj�cy na zapisanie ceny produktu.
    * Funkcja ustawiaj�ca liczb� b�d�c� kwot� potrzebn� do zakupu produktu.
    * @param cena Cena produktu
    */
    void Set_cena(float cena);
    /**
    * @brief Setter pozwalaj�cy na zapisanie typu produktu.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy typem produktu. Pozwala na identyfikacj�, czy produkt jest tabletem, telefonem, akcesoriem, czy laptopem.
    * @param typ Typ produktu
    */
    void Set_typ_produktu(string typ);


};