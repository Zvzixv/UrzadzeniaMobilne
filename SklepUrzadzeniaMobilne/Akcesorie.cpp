#include "Akcesorie.h"
bool Akcesorie::zapiszProdukt() {
	json data;
	data["id"] = this->Get_id_produktu();
	data["nazwa"] = this->Get_nazwa();
	data["marka"] = this->Get_marka();
	data["cena"] = this->Get_cena();
	data["id_kategorii"] = this->Get_id_kategorii();
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