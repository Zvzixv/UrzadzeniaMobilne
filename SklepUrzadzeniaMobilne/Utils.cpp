#include "Utils.h"
#include "Produkt.h"
#include "Akcesorie.h"
#include "Laptop.h"
#include "Tablet.h"
#include "Telefon.h"


//u¿ytkownicy

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

void Utils::zmienHaslo(string login, string haslo) {
	std::vector<Uzytkownik> baza;
	Utils::wczytajUzytkownikow(&baza);
	if (baza.size() == 0) {
		return;
	}
	for (auto& element : baza) {
		if (element.GetLogin() == login) { 
			element.SetHaslo(haslo);
			Utils::zapiszBazeUzytkownikow(&baza);
		}
	}
}

void Utils::zmienAdres(string login, string miasto, string kodPocztowy, string ulica, int numerDomu) {
	std::vector<Uzytkownik> baza;
	Utils::wczytajUzytkownikow(&baza);
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
			if (numerDomu!=0)
				nowyAdres.SetNumerDomu(numerDomu);

			element.SetAdres(nowyAdres);

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
}
bool Utils::zapiszZamowienie(std::vector<Zamowienie>* bazaZamowien) {
	json j;
	for (auto& zamowienie : *bazaZamowien)
		json z = {
			{"id", zamowienie.getIdZamowienia()},
			{"data_zlozenia", zamowienie.getDataZlozenia()},
			{"uzytkownik", {
				{"id", zamowienie.getUzytkownik().Get_id_uzytkownika()},
				{"imie", zamowienie.getUzytkownik().GetImie()},
				{"nazwisko", zamowienie.getUzytkownik().GetNazwisko()},
				{"adres", {
						{"miasto", zamowienie.getUzytkownik().GetAdres().GetMiasto()},
						{"ulica", zamowienie.getUzytkownik().GetAdres().GetUlica()},
						{"numer_domu", zamowienie.getUzytkownik().GetAdres().GetNumerDomu()},
						{"kod_pocztowy", zamowienie.getUzytkownik().GetAdres().GetKodPocztowy()},
						{"id_adresu", zamowienie.getUzytkownik().GetAdres().GetIdAdresu()}
				}},
			},
			{"produkty", {
				{"id produktu", zamowienie.getProdukty()}



			}}
		}
	};

		//data["uzytkownik"]["imie"] = this->_uzytkownik.GetImie();
		//data["uzytkownik"]["nazwisko"] = this->_uzytkownik.GetNazwisko();
		//data["uzytkownik"]["adres"] = this->_uzytkownik.GetNazwisko();
		//data["uzytkownik"]["adres"] = this->_uzytkownik.GetNazwisko();

		std::ofstream file("Zamowienia.json");
		file << data;
		file.close();
		return true;

	
}

//produkty

bool Utils::wczytajBazeProduktow(std::vector<json>* baza) {
	std::ifstream file("Produkty.json");
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


//z json do vectora
bool Utils::wczytajProdukty(std::vector<Produkt*>* bazaProduktow) {
	// Otwórz plik JSON
	std::ifstream plik("Produkty.json");
	if (!plik) {
		std::cerr << "Nie mo¿na otworzyæ pliku Produkty.json" << std::endl;
		return false;
	}

	try {
		json dane;
		plik >> dane;

		// Iteruj przez ka¿dy element w pliku JSON i dodaj do wektora odpowiedni obiekt
		for (const auto& elem : dane) {
			const std::string& typ = elem["typ_produktu"];

			if (typ == "Tablet") {
				int id_produktu = elem["id_produktu"];
				std::string nazwa = elem["nazwa"];
				std::string marka = elem["marka"];
				float cena = elem["cena"];
				bazaProduktow->push_back(new Tablet(id_produktu, nazwa, marka, cena));
			}
			else if (typ == "Telefon") {
				int id_produktu = elem["id_produktu"];
				std::string nazwa = elem["nazwa"];
				std::string marka = elem["marka"];
				float cena = elem["cena"];
				bazaProduktow->push_back(new Telefon(id_produktu, nazwa, marka, cena));
			}
			else if (typ == "Laptop") {
				int id_produktu = elem["id_produktu"];
				std::string nazwa = elem["nazwa"];
				std::string marka = elem["marka"];
				float cena = elem["cena"];
				bazaProduktow->push_back(new Laptop(id_produktu, nazwa, marka, cena));
			}
			else if (typ == "Akcesoria") {
				int id_produktu = elem["id_produktu"];
				std::string nazwa = elem["nazwa"];
				std::string marka = elem["marka"];
				float cena = elem["cena"];
				bazaProduktow->push_back(new Akcesoria(id_produktu, nazwa, marka, cena));
			}
		}
	}
	catch (const std::exception& e) {
		std::cerr << "B³¹d odczytu pliku JSON: " << e.what() << std::endl;
	}
	
	return true;
}


void Utils::zapiszBazeProduktow(std::vector<Produkt*>* bazaProduktow) {
	json j;
	for (auto& produkt : *bazaProduktow) {
		json u = {
			  {"id_produktu", produkt->Get_id_produktu()},
			  {"nazwa", produkt->Get_nazwa()},
			  {"marka", produkt->Get_marka()},
			  {"cena", produkt->Get_cena()},
			  {"typ_produktu", produkt->Get_typ_produktu()},
		};

		j.push_back(u);
		std::ofstream output("Produkty.json");
		if (!output.is_open()) {
			std::cerr << "Nie udalo sie otworzyc pliku do zapisu!" << std::endl;
			return;
		}
		output << j;
	}
}




//z vectora do json
/*
void zapiszProdukty(const std::vector<Produkt*>& produkty, const std::string& nazwaPliku) {
	// Utwórz pusty obiekt JSON
	json dane;

	// Iteruj przez ka¿dy produkt w wektorze i dodaj jego dane do obiektu JSON
	for (const auto& produkt : produkty) {
		json daneProduktu;
		daneProduktu["typ"] = produkt->typ();
		daneProduktu["nazwa"] = produkt->nazwa();
		daneProduktu["cena"] = produkt->cena();

		if (produkt->typ() == "Tablet") {
			Tablet* tablet = dynamic_cast<Tablet*>(produkt);
			daneProduktu["rozmiarEkranu"] = tablet->rozmiarEkranu();
			daneProduktu["producent"] = tablet->producent();
		}
		else if (produkt->typ() == "Telefon") {
			Telefon* telefon = dynamic_cast<Telefon*>(produkt);
			daneProduktu["model"] = telefon->model();
			daneProduktu["producent"] = telefon->producent();
		}
		else if (produkt->typ() == "Laptop") {
			Laptop* laptop = dynamic_cast<Laptop*>(produkt);
			daneProduktu["procesor"] = laptop->procesor();
			daneProduktu["producent"] = laptop->producent();
		}
		else if (produkt->typ() == "Akcesoria") {
			Akcesoria* akcesoria = dynamic_cast<Akcesoria*>(produkt);
			daneProduktu["rodzaj"] = akcesoria->rodzaj();
		}

		dane.push_back(daneProduktu);
	}

	// Zapisz obiekt JSON do pliku
	std::ofstream plik(nazwaPliku);
	if (!plik) {
		std::cerr << "Nie mo¿na otworzyæ pliku " << nazwaPliku << " do zapisu" << std::endl;
		return;
	}

	plik << std::setw(4) << dane << std::endl;
}
*/