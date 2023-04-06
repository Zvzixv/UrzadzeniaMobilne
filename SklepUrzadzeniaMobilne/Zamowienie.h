#pragma once
#include <string>
#include <vector>
#include "Uzytkownik.h"
#include "Produkt.h"
using namespace std;
class Zamowienie
{
private:
	int _id_zamowienia;
	Uzytkownik _uzytkownik;
	vector<Produkt*> _produkty;
	string _data_zlozenia;
public:
	Zamowienie();
	Zamowienie(int id, Uzytkownik uz, vector<Produkt*> produkty, string data);

	Zamowienie GetZamowienie(int id);
	void SetZamowienie(int id, Uzytkownik uz, vector<Produkt*> produkty, string data);
	bool ZwrotZamowienia(int id);
	bool ZapiszZamowienie();
	int getIdZamowienia();
	Uzytkownik getUzytkownik();
	vector<Produkt*> getProdukty();
	string getDataZlozenia();
	void setIdZamowienia(int id);
	void setUzytkownik(Uzytkownik uz);
	void setProdukty(vector<Produkt*> produkty);
	void setDataZlozenia(string data);
};

