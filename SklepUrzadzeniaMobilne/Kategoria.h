#pragma once
#include <string>
using namespace std;
class Kategoria
{
	private:
	int _id_kategorii;
	string _nazwa;

public:

	Kategoria();
	Kategoria(int id, string nazwa);

	int Get_id_kategorii();
	string Get_nazwa();

	void Set_id_kategorii(int id);
	void Set_nazwa(string nazwa);
};

