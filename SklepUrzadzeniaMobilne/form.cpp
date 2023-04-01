
#include "form.h"
#include "Zamowienie.h"
#include "Adres.h"
using namespace System;

using namespace System::Windows::Forms;

void main()
{
vector<Produkt> p;
Adres* a = new Adres(1, "Tarnowskie Dziury", "42-609", "Husarska chuj ci w pizde jebany cpp", 10);
Uzytkownik* u = new Uzytkownik(1, "Mateusz", "Paruzel", "12345", "ADMINISTRATOR", *a);
Zamowienie* z = new Zamowienie(1, *u, p, "10.01.2023");
z->ZapiszZamowienie();
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
SklepUrzadzeniaMobilne::form f;
Application::Run(% f);
}

