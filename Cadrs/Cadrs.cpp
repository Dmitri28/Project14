// Cadrs.cpp :

#include <iostream>

#include"Administrator.h"
#include"Ingener.h"
#include"Workers.h"
using namespace std;
int main()
{
	Administrator h;
	h.setName("Adam");
	h.setWorkplace("Internet club");
	cout << h.getName() << "  " << h.getWorkPlace();
	cout << endl;
	Ingener k;
	k.setName("Leon");
	k.setDivision("Computer shop");
	k.setQulification("Shop Assitent");
	cout << k.getName() << "  " << k.getDivision() << "  " << k.getQulification();
	cout << endl;
	Workers r;
	r.setName("Dumian");
	r.setShop("Alko Market");
	r.setSpecelly("Shop assistent");
	cout << r.getName() << "  " << r.getShop() << "  " << r.getSpecelly() << endl;
}

