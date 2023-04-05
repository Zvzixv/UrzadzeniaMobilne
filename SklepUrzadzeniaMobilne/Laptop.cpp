#include "Laptop.h"

using namespace nlohmann;
bool Laptop::zapiszProdukt() {
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