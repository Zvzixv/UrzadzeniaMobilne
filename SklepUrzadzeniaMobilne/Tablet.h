#pragma once
#include <iostream>
#include <string>
#include "Produkt.h"
using namespace std;

class Tablet : Produkt {
	Tablet() : Produkt() {};
	bool zapiszProdukt();
};