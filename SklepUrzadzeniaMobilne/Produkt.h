#pragma once
#include <iostream>
#include <string>
using namespace std;

class Produkt {
private:
    int _id_produktu;
    string _nazwa;
    string _marka;
    float _cena;
    int _id_kategorii;

public:
    Produkt();
    Produkt(int id_produktu, string nazwa, string marka, float cena, int id_kategorii);
    Produkt GetProdukt();
    void SetProdukt(int id_produktu, string nazwa, string marka, float cena, int id_kategorii);
    bool EditProdukt(Produkt produkt);
    bool DeleteProdukt(int id);

    int Get_id_produktu();
    string Get_nazwa();
    string Get_marka();
    float Get_cena();
    int Get_id_kategorii();

    void Set_id_produktu(int id_produktu);
    void Set_nazwa(string nazwa);
    void Set_marka(string marka);
    void Set_cena(float cena);
    void Set_id_kategorii(int id_kategorii);
};