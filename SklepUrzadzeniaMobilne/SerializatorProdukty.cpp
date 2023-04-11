#include "SerializatorProdukty.h"
#include "Produkt.h"
#include "Akcesorie.h"
#include "Laptop.h"
#include "Tablet.h"
#include "Telefon.h"

bool SerializatorProdukty::wczytajBazeProduktow(std::vector<json>* baza) {
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
bool SerializatorProdukty::wczytajProdukty(std::vector<Produkt*>* bazaProduktow) {
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


void SerializatorProdukty::zapiszBazeProduktow(std::vector<Produkt*>* bazaProduktow) {
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
