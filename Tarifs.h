/*
La classe Tarifs contient tout ce qui est en rapport avec les tarifs :
- le prix de la place pour chaque type de bâteau
- le prix pour une nuit sur un corps mort
- le prix pour le supplément d'eau
- le prix pour le supplément d'électricité
*/

#ifndef TARIFS_H_INCLUDED
#define TARIFS_H_INCLUDED

#include<iostream>


using namespace std;

class Tarifs{

	
public:

	Tarifs();
	~Tarifs();

	

private:

	int factureVNH();
	int factureVT1();
	int factureVT2();

};

#endif