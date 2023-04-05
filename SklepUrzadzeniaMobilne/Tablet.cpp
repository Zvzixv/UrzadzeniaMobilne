#include "Tablet.h"
#include "json.hpp"
#include <fstream>
using namespace nlohmann;
//Tablet::Tablet(int id_produktu, string nazwa, string marka, float cena, int id_kategorii) : Produkt(id_produktu, nazwa, marka, cena, id_kategorii) {};
bool Tablet::zapiszProdukt() {
	json data;
	data["id"] = this->Get_id_produktu();
	data["nazwa"] = this->Get_nazwa();
	data["marka"] = this->Get_marka();
	data["cena"] = this->Get_cena();
	data["typ_produktu"] = this->Get_typ_produktu();
	std::ofstream file("Produkty.json", std::ios::app);
	if (file.is_open()) {
		file << data;
		file.close();
		return true;
	}
	else {
		return false;
	}

}