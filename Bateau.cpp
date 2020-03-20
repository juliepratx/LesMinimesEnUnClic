/*


*/

#include <iostream>
#include "Bateau.h"


using namespace std;


Bateau::Bateau() {

	taille = 0;
	tailleMaxi = 0;
	tailleMini = 0;
	nombreDeCabine = 0;
	electricite[0] = '\0';
	eau[0] = '\0';

}

Bateau::Bateau(int taille){

	cout << "Le bateau a une longueur de : " << taille << "mètres" << endl;

}

Bateau::~Bateau() { ; }

