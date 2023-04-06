/**
* @file Adres.h 
* @brief Plik ten zawiera klasê Adres bêd¹c¹ reprezentacj¹ adresu pojedynczego u¿ytkownika.
*/
#pragma once
#include <string>
using namespace std;
/**
* @brief Klasa Adres reprezentuje adres zamieszkania pojedynczego u¿ytkownika.
* Klasa ta pozwala na przechowanie adresu potrzebnego do wysy³ki zamówienia.
*/
class Adres
{
	private:

	int _id_adresu; ///< Id pozwalaj¹ce na rozró¿nienie adresu (w rzeczywistoœci nie ma zastosowania, bo u¿ytkownik przyjmuje po prostu ca³y obiekt).
	string _miasto; ///< Miasto sk³adaj¹ce siê na adres zamieszkania.
	string _kod_pocztowy; ///< Kod pocztowy sk³adaj¹cy siê na adres zamieszkania.
	string _ulica; ///< Ulica sk³adaj¹ca siê na adres zamieszkania.
	int _numer_domu; ///< Numer domu sk³adaj¹cy siê na adres zamieszkania.

	public:

		/**
		* @brief Konstruktor bezargumentowy.
		* Konstruktor bezargumentowy.
		*/
		Adres();
		/**
		* @brief Konstruktor argumentowy, zawieraj¹cy id.
		* Konstruktor argumentowy, zawieraj¹cy id_adresu, pozwalaj¹ce na przysz³¹ identyfikacjê adresu.
		* @param id_adresu Id bêd¹ce reprezentatem adresu w potencjalnej bazie danych.
		* @param miasto Miasto sk³adaj¹ce siê na adres zamieszkania u¿ytkownika.
		* @param kod_pocztowy Kod pocztowy sk³adaj¹cy siê na adres zamieszkania u¿ytkownika.
		* @param ulica Ulica sk³adaj¹ca siê na adres zamieszkania u¿ytkownika.
		* @param numer_domu Numer domu sk³adaj¹cy siê na adres zamieszkania u¿ytkownika.
		*/
		Adres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu);
		/**
		* @brief Konstruktor argumentowy, niezawieraj¹cy id.
		* Konstruktor argumentowy, niezawieraj¹cy id_adresu, poniewa¿ aktualnie nie jest ono konieczne do identyfikacji adresu. Domyœlnie id zapisywane jest jako 0.
		* @param miasto Miasto sk³adaj¹ce siê na adres zamieszkania u¿ytkownika.
		* @param kod_pocztowy Kod pocztowy sk³adaj¹cy siê na adres zamieszkania u¿ytkownika.
		* @param ulica Ulica sk³adaj¹ca siê na adres zamieszkania u¿ytkownika.
		* @param numer_domu Numer domu sk³adaj¹cy siê na adres zamieszkania u¿ytkownika.
		*/
		Adres(string miasto, string kod_pocztowy, string ulica, int numer_domu);
		/**
		* @brief Getter pozwalaj¹cy na pobranie id adresu.
		* Funkcja zwracaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id adresu.
		* @return Id adresu
		*/
		int GetIdAdresu() const { return _id_adresu; }
		/**
		* @brief Getter pozwalaj¹cy na pobranie miasta.
		* Funkcja zwracaj¹ca ci¹g znaków bêd¹cy nazw¹ miasta.
		* @return Miasto, bêd¹ce czêsci¹ adresu zamieszkania.
		*/
		string GetMiasto() const { return _miasto; }
		/**
		* @brief Getter pozwalaj¹cy na pobranie kodu pocztowego.
		* Funkcja zwracaj¹ca ci¹g znaków bêd¹cy kodem pocztowym.
		* @return Kod pocztowy, bêd¹cy czêsci¹ adresu zamieszkania.
		*/
		string GetKodPocztowy() const { return _kod_pocztowy; }
		/**
		* @brief Getter pozwalaj¹cy na pobranie ulicy.
		* Funkcja zwracaj¹ca ci¹g znaków bêd¹cy nazw¹ ulicy.
		* @return Ulica, bêd¹ca czêsci¹ adresu zamieszkania.
		*/
		string GetUlica() const { return _ulica; }
		/**
		* @brief Getter pozwalaj¹cy na pobranie ulicy.
		* Funkcja zwracaj¹ca ci¹g znaków bêd¹cy nazw¹ ulicy.
		* @return Ulica, bêd¹ca czêsci¹ adresu zamieszkania.
		*/
		int GetNumerDomu() const { return _numer_domu; }
		/**
		* @brief Setter pozwalaj¹cy na ustawienie id adresu.
		* Funkcja ustawiaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id adresu.
		* @param id_adresu Id adresu
		*/
		void SetIdAdresu(int id_adresu) { _id_adresu = id_adresu; }
		/**
		* @brief Setter pozwalaj¹cy na ustawienie miasta.
		* Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy nazw¹ miasta.
		* @param miasto Miasto, bêd¹ce czêsci¹ adresu zamieszkania.
		*/
		void SetMiasto(string miasto) { _miasto = miasto; }
		/**
		* @brief Setter pozwalaj¹cy na ustawienie kodu pocztowego.
		* Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy kodem pocztowym.
		* @param kod_pocztowy Kod pocztowy, bêd¹cy czêsci¹ adresu zamieszkania.
		*/
		void SetKodPocztowy(string kod_pocztowy) { _kod_pocztowy = kod_pocztowy; }
		/**
		* @brief Setter pozwalaj¹cy na ustawienie ulicy.
		* Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy nazw¹ ulicy.
		* @param ulica Ulica, bêd¹ca czêsci¹ adresu zamieszkania.
		*/
		void SetUlica(string ulica) { _ulica = ulica; }
		/**
		* @brief Setter pozwalaj¹cy na ustawienie ulicy.
		* Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy nazw¹ ulicy.
		* @param numer_domu Ulica, bêd¹ca czêsci¹ adresu zamieszkania.
		*/
		void SetNumerDomu(int numer_domu) { _numer_domu = numer_domu; }
};

