/**
* @file Uzytkownik.h
* @brief Plik ten zawiera klas� Uzytkownik b�d�c� reprezentacj� pojedynczego u�ytkownika aplikacji.
*/
#pragma once
#include <string>
#include <fstream>
#include "json.hpp"
#include "Adres.h"

using namespace std;
using namespace nlohmann;
/**
* @brief Klasa Uzytkownik reprezentuje pojedynczego u�ytkownika aplikacji.
* Klasa ta pozwala na przechowanie u�ytkownika, utworzonego poprzez stworzenie konta w aplikacji. Jego istnienie pozwala na zalogowanie si� i korzystanie z wszystkich funkcjonalno�ci aplikacji.
*/
class Uzytkownik {
private:
    int _id_uzytkownika; ///< Id pozwalaj�ce na identyfikacj� u�ytkownika w potencjalnej bazie.
    string _login; ///< Login s�u�y do identyfikacji u�ytkownika, logowania, modyfikacji jego roli, usuni�cia konta, czy wprowadzania zmian w obiekcie.
    string _imie; ///< Imi� u�ytkownika
    string _nazwisko; ///< Nazwisko u�ytkownika
    string _haslo; ///< Has�o potrzebne do zalogowania si� na konto.
    string _rola; ///< Definiuje dost�py u�ytkownika. Istniej� dwie role - administrator oraz zwyk�y u�ytkownik.
    Adres _adres; ///< Obiekt zawieraj�cy w sobie infomacje o adresie zamieszkania u�ytkownika.

public:
    /**
	* @brief Konstruktor bezargumentowy.
	* Konstruktor bezargumentowy.
	*/
    Uzytkownik();
    /**
    * @brief Konstruktor wieloargumtowy.
    * Konstruktor wieloargumentowy klasy Uzytkownik. Konstruktor ten przyjmuje id, login, imi�, nazwisko, haslo, rol� oraz adres.
    * @param id Id pozwalaj�ce na identyfikacj� u�ytkownika w potencjalnej bazie.
    * @param login Login pozwalaj�cy na aktualn� identyfikacj� konta.
    * @param imie Imi� u�ytkownika.
    * @param nazwisko Nazwisko u�ytkownika.
    * @param haslo Has�o do konta u�ytkownika.
    * @param rola Rola definiuj�ca dost�py u�ytkownika.
    * @param adres Adres zamieszkania u�ytkownika
    */
    Uzytkownik(int id, string login, string imie, string nazwisko, string haslo, string rola, Adres adres);
    /**
	* @brief Funkcja zapisuj�ca nowego u�ytkownika do pliku JSON.
	* Funkcja, kt�rej zadaniem jest zapisanie nowego u�ytkownika, kt�ry t� metod� wywo�a�, do pliku JSON o nazwie "Uzytkownicy.json". Nowy u�ytkownik dopisywany jest do istniej�cej listy.
	* @param array Tablica zawieraj�ca istniej�ce ju� w bazie obiekty json, do tej tablicy dopisywany jest nowy u�ytkownik i tablica zapisywana jest do pliku json.
    * @return zwraca warto�� true, je�li zapis przebieg� poprawnie i false, je�li nie uda�o si� zapisa� obiektu.
	*/
    bool Uzytkownik::zapiszUzytkownika(std::vector<json>* array);
    /**
	* @brief Getter pozwalaj�cy na pobranie id u�ytkownika.
	* Funkcja zwracaj�ca warto�� numeryczn� b�d�c� id u�ytkownika.
	* @return Id u�ytkownika
	*/
    int Get_id_uzytkownika();
    /**
	* @brief Getter pozwalaj�cy na pobranie loginu u�ytkownika.
	* Funkcja zwracaj�ca ci�g znak�w b�d�cy loginem u�ytkownika.
	* @return Login u�ytkownika
	*/
    string GetLogin();
    /**
    * @brief Getter pozwalaj�cy na pobranie imienia u�ytkownika.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy imieniem u�ytkownika.
    * @return Imi� u�ytkownika
    */
    string GetImie();
    /**
    * @brief Getter pozwalaj�cy na pobranie nazwiska u�ytkownika.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy nazwiskiem u�ytkownika.
    * @return Nazwisko u�ytkownika
    */
    string GetNazwisko();
    /**
    * @brief Getter pozwalaj�cy na pobranie has�a u�ytkownika.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy has�em u�ytkownika.
    * @return Has�o u�ytkownika
    */
    string GetHaslo();
    /**
    * @brief Getter pozwalaj�cy na pobranie roli u�ytkownika.
    * Funkcja zwracaj�ca ci�g znak�w b�d�cy rol� u�ytkownika.
    * @return Rola u�ytkownika
    */
    string GetRola();
    /**
    * @brief Getter pozwalaj�cy na pobranie adresu u�ytkownika.
    * Funkcja zwracaj�ca obiekt klasy Adres b�d�cy adresem zamieszkania u�ytkownika.
    * @return Adres u�ytkownika
    */
    Adres GetAdres();
    /**
	* @brief Setter pozwalaj�cy na zapisanie id u�ytkownika.
	* Funkcja ustawiaj�ca warto�� numeryczn� b�d�c� id u�ytkownika.
	* @param id Id u�ytkownika
	*/
    void SetIdUzytkownika(int id);
    /**
	* @brief Setter pozwalaj�cy na zapisanie loginu u�ytkownika.
	* Funkcja ustawiaj�ca ci�g znak�w b�d�cy loginem u�ytkownika.
	* @param login Login u�ytkownika
	*/
    void SetLogin(string login);
    /**
    * @brief Setter pozwalaj�cy na zapisanie imienia u�ytkownika.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy imieniem u�ytkownika.
    * @param imie Imi� u�ytkownika
    */
    void SetImie(string imie);
    /**
    * @brief Setter pozwalaj�cy na zapisanie nazwiska u�ytkownika.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy nazwiskiem u�ytkownika.
    * @param nazwisko Nazwisko u�ytkownika
    */
    void SetNazwisko(string nazwisko);
    /**
    * @brief Setter pozwalaj�cy na zapisanie has�a u�ytkownika.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy has�em u�ytkownika.
    * @param haslo Has�o u�ytkownika
    */
    void SetHaslo(string haslo);
    /**
    * @brief Setter pozwalaj�cy na zapisanie roli u�ytkownika.
    * Funkcja ustawiaj�ca ci�g znak�w b�d�cy rol� u�ytkownika.
    * @param rola Rola u�ytkownika
    */
    void SetRola(string rola);
    /**
    * @brief Setter pozwalaj�cy na zapisanie adresu u�ytkownika.
    * Funkcja ustawiaj�ca obiekt klasy Adres b�d�cy adresem zamieszkania u�ytkownika.
    * @param adres Adres u�ytkownika
    */
    void SetAdres(Adres adres);
};