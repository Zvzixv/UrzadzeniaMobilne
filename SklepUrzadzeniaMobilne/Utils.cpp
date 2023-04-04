#include "Utils.h"

		 bool Utils::wczytajBaze(std::vector<json>* baza) {
			   std::ifstream file("Uzytkownicy.json");
			   if (!file.is_open()) {
				   std::cerr << "Nie mo¿na otworzyæ pliku." << std::endl;
				   return false;
			   }
			   std::string jsonStr((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
			   if (jsonStr.length() == 0)
				   return true;
			   // Konwertowanie stringa JSON na wektor obiektów JSON
			   *baza = json::parse(jsonStr);
			   return true;
		   }

		  bool Utils::wczytajUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow) {
			  std::ifstream file("Uzytkownicy.json");
			  if (!file.is_open()) {
				  std::cerr << "Nie udalo sie otworzyc pliku!" << std::endl;
				  return false;
			  }
			  json data;
			  file >> data;
			  for (auto& element : data) {
				  Uzytkownik uzytkownik; 
				  uzytkownik.SetIdUzytkownika(element["id"]);
				  uzytkownik.SetImie(element["imie"]);
				  uzytkownik.SetNazwisko(element["nazwisko"]);
				  uzytkownik.SetHaslo(element["haslo"]);
				  uzytkownik.SetRola(element["rola"]);
				  Adres az;
				  az.SetIdAdresu(element["adres"]["id_adresu"]);
				  az.SetKodPocztowy(element["adres"]["kod_pocztowy"]);
				  az.SetUlica(element["adres"]["ulica"]);
				  az.SetMiasto(element["adres"]["miasto"]);
				  az.SetNumerDomu(element["adres"]["nr_domu"]);
				  uzytkownik.SetAdres(az);
				  bazaUzytkownikow->push_back(uzytkownik);
			  }
			  return true;
		 }