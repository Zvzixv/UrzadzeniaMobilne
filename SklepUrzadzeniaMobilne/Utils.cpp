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
		uzytkownik.SetIdUzytkownika(element["id_uzytkownika"]);
		uzytkownik.SetLogin(element["login"]);
		uzytkownik.SetImie(element["imie"]);
		uzytkownik.SetNazwisko(element["nazwisko"]);
		uzytkownik.SetHaslo(element["haslo"]);
		uzytkownik.SetRola(element["rola"]);
		Adres az;
		az.SetIdAdresu(element["adres"]["id_adresu"]);
		az.SetKodPocztowy(element["adres"]["kod_pocztowy"]);
		az.SetUlica(element["adres"]["ulica"]);
		az.SetMiasto(element["adres"]["miasto"]);
		az.SetNumerDomu(element["adres"]["numer_domu"]);
		uzytkownik.SetAdres(az);
		bazaUzytkownikow->push_back(uzytkownik);
	}
	return true;
}
void Utils::zmienUprawnienia(string login) {
	std::vector<Uzytkownik> baza;
	Utils::wczytajUzytkownikow(&baza);
	if (baza.size() == 0) {
		return;
	}
	for (auto& element : baza) {
		if (element.GetLogin() == login) { // zak³adamy, ¿e chcemy zmieniæ obiekt o id równym 1
			if (element.GetRola() == "Administrator") {
				element.SetRola("Uzytkownik");

			}
			else {
				element.SetRola("Administrator");
			}
			Utils::zapiszBazeUzytkownikow(&baza);
		}
	}


}

void Utils::zapiszBazeUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow) {
	json j;
	for (auto& uzytkownik : *bazaUzytkownikow) {
		json u = {
			  {"id_uzytkownika", uzytkownik.Get_id_uzytkownika()},
			  {"login", uzytkownik.GetLogin()},
			  {"imie", uzytkownik.GetImie()},
			  {"nazwisko", uzytkownik.GetNazwisko()},
			  {"haslo", uzytkownik.GetHaslo()},
			  {"rola", uzytkownik.GetRola()},
			  {"adres", {
							{"miasto", uzytkownik.GetAdres().GetMiasto()},
							{"ulica", uzytkownik.GetAdres().GetUlica()},
							{"numer_domu", uzytkownik.GetAdres().GetNumerDomu()},
							{"kod_pocztowy", uzytkownik.GetAdres().GetKodPocztowy()},
							{"id_adresu", uzytkownik.GetAdres().GetIdAdresu()}
						}
			}
		};
		j.push_back(u);
		std::ofstream output("Uzytkownicy.json");
		if (!output.is_open()) {
			std::cerr << "Nie udalo sie otworzyc pliku do zapisu!" << std::endl;
			return;
		}
		output << j;
	}
}//