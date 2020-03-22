/*
Classe qui regroupe toutes les caractéristiques des bateaux :
- la taille (mini et maxi)
- le nombre de cabine
- le racordement à l'eau et à l'électricité
*/

#include <iostream>
#include "Bateau.h"


using namespace std;


Bateau::Bateau() {

	taille = 0;
	tailleMini = 0;
	tailleMaxi = 0;
	nombreDeCabine = 0;
	electricite[0] = '\0';
	eau[0] = '\0';

}

Bateau::Bateau(int taille){

	cout << "Le bateau a une longueur de : " << taille << "mètres" << endl;

	if (taille < 10) {
		cout << "Type de bâteau : Voilier non habitable" << endl;
		cout << "Branchement à l'eau et à l'électricté non disponible." << endl;
	}

	if (taille >= 10 && taille < 25) {
		cout << "Type de bâteau : Voilier de type 1" << endl;
		cout << "Branchement à l'eau et à l'électricité en supplément." << endl;
	}

	else {
		cout << "Type de bâteau : Voilier de type 2" << endl;
		cout << "Places disponibles limitées !" << endl;
		cout << "Branchement à l'eau et à l'électricité en supplément." << endl;
	}

}



Bateau::~Bateau() { ; }

