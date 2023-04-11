#include "SerializatorUzytkownicy.h"
bool SerializatorUzytkownicy::wczytajBaze(std::vector<json>* baza) {
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

bool SerializatorUzytkownicy::wczytajUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow) {
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
void SerializatorUzytkownicy::zmienUprawnienia(string login) {
	std::vector<Uzytkownik> baza;
	SerializatorUzytkownicy::wczytajUzytkownikow(&baza);
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
			SerializatorUzytkownicy::zapiszBazeUzytkownikow(&baza);
		}
	}
}

void SerializatorUzytkownicy::zmienHaslo(string login, string haslo) {
	std::vector<Uzytkownik> baza;
	SerializatorUzytkownicy::wczytajUzytkownikow(&baza);
	if (baza.size() == 0) {
		return;
	}
	for (auto& element : baza) {
		if (element.GetLogin() == login) {
			element.SetHaslo(haslo);
			SerializatorUzytkownicy::zapiszBazeUzytkownikow(&baza);
		}
	}
}

void SerializatorUzytkownicy::zmienAdres(string login, string miasto, string kodPocztowy, string ulica, int numerDomu) {
	std::vector<Uzytkownik> baza;
	SerializatorUzytkownicy::wczytajUzytkownikow(&baza);
	if (baza.size() == 0) {
		return;
	}
	for (auto& element : baza) {
		if (element.GetLogin() == login) {

			Adres nowyAdres = element.GetAdres();
			if (!miasto.empty())
				nowyAdres.SetMiasto(miasto);
			if (!kodPocztowy.empty())
				nowyAdres.SetKodPocztowy(kodPocztowy);
			if (!ulica.empty())
				nowyAdres.SetUlica(ulica);
			if (numerDomu != 0)
				nowyAdres.SetNumerDomu(numerDomu);

			element.SetAdres(nowyAdres);

			SerializatorUzytkownicy::zapiszBazeUzytkownikow(&baza);
		}
	}
}

void SerializatorUzytkownicy::zapiszBazeUzytkownikow(std::vector<Uzytkownik>* bazaUzytkownikow) {
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
}

bool SerializatorUzytkownicy::usunUzytkownika(vector<Uzytkownik>* bazaUzytkownikow, string login) {
	json data;
	std::ifstream file("Uzytkownicy.json");
	if (!file.is_open()) {
		std::cerr << "Nie udalo sie otworzyc pliku!" << std::endl;
		return false;
	}
	file >> data;
	file.close();
	for (auto it = data.begin(); it != data.end(); ++it) {
		if ((*it)["login"] == login) {
			data.erase(it);
			std::ofstream fileOut("Uzytkownicy.json");
			fileOut << data.dump(4);
			fileOut.close();
			// usuwanie u¿ytkownika z bazy
			for (auto it = bazaUzytkownikow->begin(); it != bazaUzytkownikow->end(); ++it) {
				if (it->GetLogin() == login) {
					bazaUzytkownikow->erase(it);
					break;
				}
			}
			return true;
		}
	}
	return false;
}

