#include "Tarifs.h"
#include <iostream>
#include <string>

using namespace std;

Tarifs::Tarifs()
{
	int sommePlace = 0;
	int sommeEau = 0;
	int sommeElec = 0;
}


Tarifs::~Tarifs()
{
	;
}

int Tarifs::facturationVoilierNonHabitable(int nbDeJour)
{
	int sommePlace = 0;
	if (nbDeJour == 365) {
		sommePlace = 500;
	}
	else {
		sommePlace = nbDeJour * 20;
	}
	cout << "Total à payer : " << sommePlace << " euros pour les " << nbDeJour << " jours." << endl;

	return sommePlace;
}

int Tarifs::facturationVoilierType1(int nbDeJour)
{
	int sommePlace = 0;
	if (nbDeJour == 365) {
		sommePlace = 500 * (1 + 30/100);
	}
	else {
		sommePlace = nbDeJour * 20 * (1 + 30 / 100);
	}
	cout << "Total à payer : " << sommePlace << " euros pour les " << nbDeJour << " jours." << endl;

	return sommePlace;
}

int Tarifs::facturationVoilierType2(int nbDeJour)
{
	int sommePlace = 0;
	if (nbDeJour == 365) {
		sommePlace = 500 * (1 + 60 / 100);
	}
	else {
		sommePlace = nbDeJour * 20 * (1 + 60 / 100);
	}
	cout << "Total à payer : " << sommePlace << " euros pour les " << nbDeJour << " jours." << endl;

	return sommePlace;
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


