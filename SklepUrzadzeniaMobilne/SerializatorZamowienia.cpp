#pragma once
#include "SerializatorZamowienia.h"

bool SerializatorZamowienia::zapiszZamowienie(std::vector<Zamowienie>* bazaZamowien) {
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

bool SerializatorZamowienia::odczytajZamowienia(std::vector<Zamowienie>* bazaZamowien) {
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
		uzytkownik = Uzytkownik(id_uzytkownika, login, imie, nazwisko, haslo, rola, Adres(miasto, kod_pocztowy, ulica, numer_domu));

		std::vector<Produkt*> produkty;
		for (const auto& p : z["produkty"]) {
			int id_produktu = p["id_produktu"];
			std::string nazwa = p["nazwa_produktu"];
			std::string marka = p["marka"];
			float cena = p["cena"];
			std::string typ = p["typ"];
			Produkt* prod;
			if (typ == "Tablet")prod = new Tablet(id_produktu, nazwa, marka, cena);
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
