/**
* @file Adres.h 
* @brief Plik ten zawiera klas� Adres b�d�c� reprezentacj� adresu pojedynczego u�ytkownika.
*/
#pragma once
#include <string>
using namespace std;
/**
* @brief Klasa Adres reprezentuje adres zamieszkania pojedynczego u�ytkownika.
* Klasa ta pozwala na przechowanie adresu potrzebnego do wysy�ki zam�wienia.
*/
class Adres
{
	private:

	int _id_adresu; ///< Id pozwalaj�ce na rozr�nienie adresu (w rzeczywisto�ci nie ma zastosowania, bo u�ytkownik przyjmuje po prostu ca�y obiekt).
	string _miasto; ///< Miasto sk�adaj�ce si� na adres zamieszkania.
	string _kod_pocztowy; ///< Kod pocztowy sk�adaj�cy si� na adres zamieszkania.
	string _ulica; ///< Ulica sk�adaj�ca si� na adres zamieszkania.
	int _numer_domu; ///< Numer domu sk�adaj�cy si� na adres zamieszkania.

	public:

		/**
		* @brief Konstruktor bezargumentowy.
		* Konstruktor bezargumentowy.
		*/
		Adres();
		/**
		* @brief Konstruktor argumentowy, zawieraj�cy id.
		* Konstruktor argumentowy, zawieraj�cy id_adresu, pozwalaj�ce na przysz�� identyfikacj� adresu.
		* @param id_adresu Id b�d�ce reprezentatem adresu w potencjalnej bazie danych.
		* @param miasto Miasto sk�adaj�ce si� na adres zamieszkania u�ytkownika.
		* @param kod_pocztowy Kod pocztowy sk�adaj�cy si� na adres zamieszkania u�ytkownika.
		* @param ulica Ulica sk�adaj�ca si� na adres zamieszkania u�ytkownika.
		* @param numer_domu Numer domu sk�adaj�cy si� na adres zamieszkania u�ytkownika.
		*/
		Adres(int id_adresu, string miasto, string kod_pocztowy, string ulica, int numer_domu);
		/**
		* @brief Konstruktor argumentowy, niezawieraj�cy id.
		* Konstruktor argumentowy, niezawieraj�cy id_adresu, poniewa� aktualnie nie jest ono konieczne do identyfikacji adresu. Domy�lnie id zapisywane jest jako 0.
		* @param miasto Miasto sk�adaj�ce si� na adres zamieszkania u�ytkownika.
		* @param kod_pocztowy Kod pocztowy sk�adaj�cy si� na adres zamieszkania u�ytkownika.
		* @param ulica Ulica sk�adaj�ca si� na adres zamieszkania u�ytkownika.
		* @param numer_domu Numer domu sk�adaj�cy si� na adres zamieszkania u�ytkownika.
		*/
		Adres(string miasto, string kod_pocztowy, string ulica, int numer_domu);
		/**
		* @brief Getter pozwalaj�cy na pobranie id adresu.
		* Funkcja zwracaj�ca warto�� numeryczn� b�d�c� id adresu.
		* @return Id adresu
		*/
		int GetIdAdresu() const { return _id_adresu; }
		/**
		* @brief Getter pozwalaj�cy na pobranie miasta.
		* Funkcja zwracaj�ca ci�g znak�w b�d�cy nazw� miasta.
		* @return Miasto, b�d�ce cz�sci� adresu zamieszkania.
		*/
		string GetMiasto() const { return _miasto; }
		/**
		* @brief Getter pozwalaj�cy na pobranie kodu pocztowego.
		* Funkcja zwracaj�ca ci�g znak�w b�d�cy kodem pocztowym.
		* @return Kod pocztowy, b�d�cy cz�sci� adresu zamieszkania.
		*/
		string GetKodPocztowy() const { return _kod_pocztowy; }
		/**
		* @brief Getter pozwalaj�cy na pobranie ulicy.
		* Funkcja zwracaj�ca ci�g znak�w b�d�cy nazw� ulicy.
		* @return Ulica, b�d�ca cz�sci� adresu zamieszkania.
		*/
		string GetUlica() const { return _ulica; }
		/**
		* @brief Getter pozwalaj�cy na pobranie ulicy.
		* Funkcja zwracaj�ca ci�g znak�w b�d�cy nazw� ulicy.
		* @return Ulica, b�d�ca cz�sci� adresu zamieszkania.
		*/
		int GetNumerDomu() const { return _numer_domu; }
		/**
		* @brief Setter pozwalaj�cy na ustawienie id adresu.
		* Funkcja ustawiaj�ca warto�� numeryczn� b�d�c� id adresu.
		* @param id_adresu Id adresu
		*/
		void SetIdAdresu(int id_adresu) { _id_adresu = id_adresu; }
		/**
		* @brief Setter pozwalaj�cy na ustawienie miasta.
		* Funkcja ustawiaj�ca ci�g znak�w b�d�cy nazw� miasta.
		* @param miasto Miasto, b�d�ce cz�sci� adresu zamieszkania.
		*/
		void SetMiasto(string miasto) { _miasto = miasto; }
		/**
		* @brief Setter pozwalaj�cy na ustawienie kodu pocztowego.
		* Funkcja ustawiaj�ca ci�g znak�w b�d�cy kodem pocztowym.
		* @param kod_pocztowy Kod pocztowy, b�d�cy cz�sci� adresu zamieszkania.
		*/
		void SetKodPocztowy(string kod_pocztowy) { _kod_pocztowy = kod_pocztowy; }
		/**
		* @brief Setter pozwalaj�cy na ustawienie ulicy.
		* Funkcja ustawiaj�ca ci�g znak�w b�d�cy nazw� ulicy.
		* @param ulica Ulica, b�d�ca cz�sci� adresu zamieszkania.
		*/
		void SetUlica(string ulica) { _ulica = ulica; }
		/**
		* @brief Setter pozwalaj�cy na ustawienie ulicy.
		* Funkcja ustawiaj�ca ci�g znak�w b�d�cy nazw� ulicy.
		* @param numer_domu Ulica, b�d�ca cz�sci� adresu zamieszkania.
		*/
		void SetNumerDomu(int numer_domu) { _numer_domu = numer_domu; }
};

