/**
* @file Produkt.h
* @brief Plik ten zawiera klasê abstrakcyjn¹ Produkt bêd¹c¹ reprezentacj¹ produktu dostêpnego w sklepie.
*/
#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
* @brief Klasa Produkt reprezentuje produkt dostêpny do sprzeda¿y w sklepie.
* Klasa ta pozwala na przechowanie produktu dostêpnego w sklepie.
*/
class Produkt {
private:
    int _id_produktu; ///< Id pozwalaj¹ce na identyfikacjê produktu.
    string _nazwa; ///< Nazwa, bêd¹ca modelem danego urz¹dzenia.
    string _marka; ///< Marka, bêd¹ca równie¿ producentem urz¹dzenia.
    float _cena; ///< wota potrzebna do zakupu urz¹dzenia.
    string _typ_produktu; ///< Zmienna przechowuj¹ca informacje, jakiego typu jest obiekt klasy pochodnej.

public:
    /**
	* @brief Konstruktor bezargumentowy.
	* Konstruktor bezargumentowy.
	*/
    Produkt();
    /**
	* @brief Konstruktor wieloargumentowy klasy Produkt.
	* Konstruktor wieloargumentowy klasy Produkt. Konstruktor ten przyjmuje id_produktu, nazwê, markê oraz cenê i typ produktu jako argumenty.
	* @param id_produktu Id pozwalaj¹ce na identyfikacjê produktu.
	* @param nazwa Nazwa, bêd¹ca modelem danego urz¹dzenia.
	* @param marka Marka, bêd¹ca równie¿ producentem urz¹dzenia.
	* @param cena Kwota potrzebna do zakupu urz¹dzenia.
    * @param typ_produktu Definiuje, czy mamy do czynienia z tabletem, laptopem, telefonem czy akcesoriem.
	*/
    Produkt(int id_produktu, string nazwa, string marka, float cena, string typ_produktu);
    /**
	* @brief Getter pozwalaj¹cy na pobranie id produktu.
	* Funkcja zwracaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id produktu.
	* @return Id produktu
	*/
    int Get_id_produktu();
    /**
    * @brief Getter pozwalaj¹cy na pobranie nazwy, modelu produktu.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy nazw¹, modelem produktu.
    * @return Nazwa produktu
    */
    string Get_nazwa();
    /**
    * @brief Getter pozwalaj¹cy na pobranie marki, producenta produktu.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy mark¹, producentem produktu.
    * @return Marka produktu
    */
    string Get_marka();
    /**
    * @brief Getter pozwalaj¹cy na pobranie ceny produktu.
    * Funkcja zwracaj¹ca liczbê bêd¹c¹ kwot¹ potrzebn¹ do zakupu produktu.
    * @return Cena produktu
    */
    float Get_cena();
    /**
    * @brief Getter pozwalaj¹cy na pobranie typu produktu.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy typem produktu. Pozwala na identyfikacjê, czy produkt jest tabletem, telefonem, akcesoriem, czy laptopem.
    * @return Typ produktu
    */
    string Get_typ_produktu();
    /**
	* @brief Setter pozwalaj¹cy na zapisanie id produktu.
	* Funkcja ustawiaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id produktu.
	* @param id_produktu Id produktu
	*/
    virtual string Get_nazwa_pliku()=0;
    /**
    * @brief Setter pozwalaj¹cy na zapisanie id produktu.
    * Funkcja ustawiaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id produktu.
    * @param id_produktu Id produktu
    */
    void Set_id_produktu(int id_produktu);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie nazwy, modelu produktu.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy nazw¹, modelem produktu.
    * @param nazwa Nazwa produktu
    */
    void Set_nazwa(string nazwa);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie marki, producenta produktu.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy mark¹, producentem produktu.
    * @param marka Marka produktu
    */
    void Set_marka(string marka);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie ceny produktu.
    * Funkcja ustawiaj¹ca liczbê bêd¹c¹ kwot¹ potrzebn¹ do zakupu produktu.
    * @param cena Cena produktu
    */
    void Set_cena(float cena);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie typu produktu.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy typem produktu. Pozwala na identyfikacjê, czy produkt jest tabletem, telefonem, akcesoriem, czy laptopem.
    * @param typ Typ produktu
    */
    void Set_typ_produktu(string typ);


};