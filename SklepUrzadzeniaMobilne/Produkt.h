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
    string _typ_produktu;

public:
    virtual bool zapiszProdukt() = 0;

    Produkt();
    Produkt(int id_produktu, string nazwa, string marka, float cena, string typ_produktu);
    Produkt GetProdukt();
    void SetProdukt(int id_produktu, string nazwa, string marka, float cena);
    bool EditProdukt(Produkt produkt);
    bool DeleteProdukt(int id);

    int Get_id_produktu();
    string Get_nazwa();
    string Get_marka();
    float Get_cena();
    string Get_typ_produktu();

    void Set_id_produktu(int id_produktu);
    void Set_nazwa(string nazwa);
    void Set_marka(string marka);
    void Set_cena(float cena);
    void Set_typ_produktu(string typ);

    //virtual ~Produkt();

    //virtual void DodajDoKoszyka();
};