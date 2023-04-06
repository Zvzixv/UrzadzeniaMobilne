/**
* @file Uzytkownik.h
* @brief Plik ten zawiera klasê Uzytkownik bêd¹c¹ reprezentacj¹ pojedynczego u¿ytkownika aplikacji.
*/
#pragma once
#include <string>
#include <fstream>
#include "json.hpp"
#include "Adres.h"

using namespace std;
using namespace nlohmann;
/**
* @brief Klasa Uzytkownik reprezentuje pojedynczego u¿ytkownika aplikacji.
* Klasa ta pozwala na przechowanie u¿ytkownika, utworzonego poprzez stworzenie konta w aplikacji. Jego istnienie pozwala na zalogowanie siê i korzystanie z wszystkich funkcjonalnoœci aplikacji.
*/
class Uzytkownik {
private:
    int _id_uzytkownika; ///< Id pozwalaj¹ce na identyfikacjê u¿ytkownika w potencjalnej bazie.
    string _login; ///< Login s³u¿y do identyfikacji u¿ytkownika, logowania, modyfikacji jego roli, usuniêcia konta, czy wprowadzania zmian w obiekcie.
    string _imie; ///< Imiê u¿ytkownika
    string _nazwisko; ///< Nazwisko u¿ytkownika
    string _haslo; ///< Has³o potrzebne do zalogowania siê na konto.
    string _rola; ///< Definiuje dostêpy u¿ytkownika. Istniej¹ dwie role - administrator oraz zwyk³y u¿ytkownik.
    Adres _adres; ///< Obiekt zawieraj¹cy w sobie infomacje o adresie zamieszkania u¿ytkownika.

public:
    /**
	* @brief Konstruktor bezargumentowy.
	* Konstruktor bezargumentowy.
	*/
    Uzytkownik();
    /**
    * @brief Konstruktor wieloargumtowy.
    * Konstruktor wieloargumentowy klasy Uzytkownik. Konstruktor ten przyjmuje id, login, imiê, nazwisko, haslo, rolê oraz adres.
    * @param id Id pozwalaj¹ce na identyfikacjê u¿ytkownika w potencjalnej bazie.
    * @param login Login pozwalaj¹cy na aktualn¹ identyfikacjê konta.
    * @param imie Imiê u¿ytkownika.
    * @param nazwisko Nazwisko u¿ytkownika.
    * @param haslo Has³o do konta u¿ytkownika.
    * @param rola Rola definiuj¹ca dostêpy u¿ytkownika.
    * @param adres Adres zamieszkania u¿ytkownika
    */
    Uzytkownik(int id, string login, string imie, string nazwisko, string haslo, string rola, Adres adres);
    /**
	* @brief Funkcja zapisuj¹ca nowego u¿ytkownika do pliku JSON.
	* Funkcja, której zadaniem jest zapisanie nowego u¿ytkownika, który t¹ metodê wywo³a³, do pliku JSON o nazwie "Uzytkownicy.json". Nowy u¿ytkownik dopisywany jest do istniej¹cej listy.
	* @param array Tablica zawieraj¹ca istniej¹ce ju¿ w bazie obiekty json, do tej tablicy dopisywany jest nowy u¿ytkownik i tablica zapisywana jest do pliku json.
    * @return zwraca wartoœæ true, jeœli zapis przebieg³ poprawnie i false, jeœli nie uda³o siê zapisaæ obiektu.
	*/
    bool Uzytkownik::zapiszUzytkownika(std::vector<json>* array);
    /**
	* @brief Getter pozwalaj¹cy na pobranie id u¿ytkownika.
	* Funkcja zwracaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id u¿ytkownika.
	* @return Id u¿ytkownika
	*/
    int Get_id_uzytkownika();
    /**
	* @brief Getter pozwalaj¹cy na pobranie loginu u¿ytkownika.
	* Funkcja zwracaj¹ca ci¹g znaków bêd¹cy loginem u¿ytkownika.
	* @return Login u¿ytkownika
	*/
    string GetLogin();
    /**
    * @brief Getter pozwalaj¹cy na pobranie imienia u¿ytkownika.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy imieniem u¿ytkownika.
    * @return Imiê u¿ytkownika
    */
    string GetImie();
    /**
    * @brief Getter pozwalaj¹cy na pobranie nazwiska u¿ytkownika.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy nazwiskiem u¿ytkownika.
    * @return Nazwisko u¿ytkownika
    */
    string GetNazwisko();
    /**
    * @brief Getter pozwalaj¹cy na pobranie has³a u¿ytkownika.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy has³em u¿ytkownika.
    * @return Has³o u¿ytkownika
    */
    string GetHaslo();
    /**
    * @brief Getter pozwalaj¹cy na pobranie roli u¿ytkownika.
    * Funkcja zwracaj¹ca ci¹g znaków bêd¹cy rol¹ u¿ytkownika.
    * @return Rola u¿ytkownika
    */
    string GetRola();
    /**
    * @brief Getter pozwalaj¹cy na pobranie adresu u¿ytkownika.
    * Funkcja zwracaj¹ca obiekt klasy Adres bêd¹cy adresem zamieszkania u¿ytkownika.
    * @return Adres u¿ytkownika
    */
    Adres GetAdres();
    /**
	* @brief Setter pozwalaj¹cy na zapisanie id u¿ytkownika.
	* Funkcja ustawiaj¹ca wartoœæ numeryczn¹ bêd¹c¹ id u¿ytkownika.
	* @param id Id u¿ytkownika
	*/
    void SetIdUzytkownika(int id);
    /**
	* @brief Setter pozwalaj¹cy na zapisanie loginu u¿ytkownika.
	* Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy loginem u¿ytkownika.
	* @param login Login u¿ytkownika
	*/
    void SetLogin(string login);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie imienia u¿ytkownika.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy imieniem u¿ytkownika.
    * @param imie Imiê u¿ytkownika
    */
    void SetImie(string imie);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie nazwiska u¿ytkownika.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy nazwiskiem u¿ytkownika.
    * @param nazwisko Nazwisko u¿ytkownika
    */
    void SetNazwisko(string nazwisko);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie has³a u¿ytkownika.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy has³em u¿ytkownika.
    * @param haslo Has³o u¿ytkownika
    */
    void SetHaslo(string haslo);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie roli u¿ytkownika.
    * Funkcja ustawiaj¹ca ci¹g znaków bêd¹cy rol¹ u¿ytkownika.
    * @param rola Rola u¿ytkownika
    */
    void SetRola(string rola);
    /**
    * @brief Setter pozwalaj¹cy na zapisanie adresu u¿ytkownika.
    * Funkcja ustawiaj¹ca obiekt klasy Adres bêd¹cy adresem zamieszkania u¿ytkownika.
    * @param adres Adres u¿ytkownika
    */
    void SetAdres(Adres adres);
};