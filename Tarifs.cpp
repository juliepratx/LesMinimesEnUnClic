#include "Tarifs.h"
#include <iostream>
#include <string>

using namespace std;

Tarifs::Tarifs()
{
	int sommeVNH = 0;
	int sommeVT1 = 0;
	int sommeVT2 = 0;
	int sommeEau = 0;
	int sommeElec = 0;
}


Tarifs::~Tarifs()
{
	;
}

int Tarifs::facturationVoilierNonHabitable(int nbDeJour)
{
	int sommeVNH = 0;
	if (nbDeJour == 365) {
		sommeVNH = 500;
	}
	if (nbDeJour < 365) {
		sommeVNH = nbDeJour * 20;
	}
	cout << "Total à payer : " << sommeVNH << " euros pour les " << nbDeJour << " jours." << endl;

	return sommeVNH;
}

int Tarifs::facturationVoilierType1(int nbDeJour)
{
	int sommeVT1 = 0;
	if (nbDeJour == 365) {
		sommeVT1 = (500 * (1 + 30/100));
	}
	if (nbDeJour < 365) {
		sommeVT1 = ((nbDeJour * 20) * (1 + 30 / 100));
	}
	cout << "Total à payer : " << sommeVT1 << " euros pour les " << nbDeJour << " jours." << endl;

	return sommeVT1;
}

int Tarifs::facturationVoilierType2(int nbDeJour)
{
	int sommeVT2 = 0;
	if (nbDeJour == 365) {
		sommeVT2 = 500 * (1 + 60 / 100);
	}
	if (nbDeJour < 365) {
		sommeVT2 = nbDeJour * 20 * (1 + 60 / 100);
	}
	cout << "Total à payer : " << sommeVT2 << " euros pour les " << nbDeJour << " jours." << endl;

	return sommeVT2;
}

int Tarifs::facturationCorpsMort(int nbDeJour)
{
	int sommePlace = 0;
	sommePlace = nbDeJour * 20 * (1 - 50 / 100);

	cout << "Total à payer : " << sommePlace << " euros pour les " << nbDeJour << " nuits." << endl;

	return sommePlace;
}

bool Tarifs::facturationEau()
{
	int sommeEau = 0;
	if (true){
		sommeEau = 5;
	}
	return sommeEau;
}

bool Tarifs::facturationElectricite()
{
	int sommeElec = 0;
	if (true) {
		sommeElec = 5;
	}
	return sommeElec;
}





