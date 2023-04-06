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

bool Utils::usunUzytkownika(vector<Uzytkownik>* bazaUzytkownikow, string login) {
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


//zamowienia

bool Utils::zapiszZamowienie(std::vector<Zamowienie>* bazaZamowien) {
	json j;
	for (auto& zamowienie : *bazaZamowien) {
		json produkty_json = json::array(); // tablica obiektów JSON
		for (const auto& produkt : zamowienie.getProdukty()) {
			json produkt_json = {
				{"id_produktu", produkt->Get_id_produktu()},
				{"nazwa_produktu", produkt->Get_nazwa()},
				{"marka", produkt->Get_marka()},
				{"cena", produkt->Get_cena()},
				{"typ",produkt->Get_typ_produktu()}
				
			};
			produkty_json.push_back(produkt_json); 
		}
		json z = {
		{"id", zamowienie.getIdZamowienia()},
		{"data_zlozenia", zamowienie.getDataZlozenia()},
		{"uzytkownik", {
			{"id", zamowienie.getUzytkownik().Get_id_uzytkownika()},
			{"login", zamowienie.getUzytkownik().GetLogin()},
			{"imie", zamowienie.getUzytkownik().GetImie()},
			{"nazwisko", zamowienie.getUzytkownik().GetNazwisko()},
			{"haslo", zamowienie.getUzytkownik().GetHaslo()},
			{"rola", zamowienie.getUzytkownik().GetRola()},
			{"adres", {
				{"miasto", zamowienie.getUzytkownik().GetAdres().GetMiasto()},
				{"ulica", zamowienie.getUzytkownik().GetAdres().GetUlica()},
				{"numer_domu", zamowienie.getUzytkownik().GetAdres().GetNumerDomu()},
				{"kod_pocztowy", zamowienie.getUzytkownik().GetAdres().GetKodPocztowy()},
			}},
		}},
		{"produkty", produkty_json}
		};
		j.push_back(z);
		std::ofstream file("Zamowienia.json");
		file << j;
		file.close();
		
}
	return true;
}

bool Utils::odczytajZamowienia(std::vector<Zamowienie>* bazaZamowien) {
	std::ifstream file("Zamowienia.json");
	json j;
	file >> j;

	for (const auto& z : j) {
		int id_zamowienia = z["id"];
		std::string data_zlozenia = z["data_zlozenia"];
		Uzytkownik uzytkownik;
		int id_uzytkownika = z["uzytkownik"]["id"];
		std::string login = z["uzytkownik"]["login"];
		std::string imie = z["uzytkownik"]["imie"];
		std::string nazwisko = z["uzytkownik"]["nazwisko"];
		std::string haslo = z["uzytkownik"]["haslo"];
		std::string rola = z["uzytkownik"]["rola"];
		std::string miasto = z["uzytkownik"]["adres"]["miasto"];
		std::string ulica = z["uzytkownik"]["adres"]["ulica"];
		int numer_domu = z["uzytkownik"]["adres"]["numer_domu"];
		std::string kod_pocztowy = z["uzytkownik"]["adres"]["kod_pocztowy"];
		uzytkownik = Uzytkownik(id_uzytkownika, login, imie, nazwisko,haslo,rola, Adres(miasto, kod_pocztowy, ulica, numer_domu));

		std::vector<Produkt*> produkty;
		for (const auto& p : z["produkty"]) {
			int id_produktu = p["id_produktu"];
			std::string nazwa = p["nazwa_produktu"];
			std::string marka = p["marka"];
			float cena = p["cena"];
			std::string typ = p["typ"];
			Produkt* prod;
			if(typ=="Tablet")prod = new Tablet(id_produktu, nazwa, marka, cena);
			if (typ == "Telefon")prod = new Telefon(id_produktu, nazwa, marka, cena);
			if (typ == "Laptop")prod = new Laptop(id_produktu, nazwa, marka, cena);
			if (typ == "Akcesoria")prod = new Akcesoria(id_produktu, nazwa, marka, cena);
			produkty.push_back(prod);
		}

		Zamowienie zamowienie(id_zamowienia, uzytkownik, produkty, data_zlozenia);
		bazaZamowien->push_back(zamowienie);
	}

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