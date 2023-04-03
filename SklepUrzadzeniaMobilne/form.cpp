
#include "form.h"
#include "Zamowienie.h"
#include "Adres.h"
#include "Tablet.h"
using namespace System;

using namespace System::Windows::Forms;

void main()
{
//vector<Produkt> p;
Adres* a = new Adres(1, "Tarnowskie Dziury", "42-609", "Husarska", 10);
Uzytkownik* u = new Uzytkownik(1, "Mateusz", "Paruzel", "12345", "ADMINISTRATOR", *a);
//Zamowienie* z = new Zamowienie(1, *u, p, "10.01.2023");
Tablet* t = new Tablet(1, "Samsung", "Galaxy", 500, 3);
t->zapiszProdukt();
//z->ZapiszZamowienie();
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
SklepUrzadzeniaMobilne::form f;
Application::Run(% f);
}

