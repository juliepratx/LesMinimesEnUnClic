/*
Sous-classe de la classe Bateau
*/


#ifndef VOILIERNONHABITABLE_H_INCLUDED
#define VOILIERNONHABITABLE_H_INCLUDED

#include "Bateau.h"


class VoilierNonHabitable :

	public Bateau{

	VoilierNonHabitable(); // constructeur par défaut
	VoilierNonHabitable(int taille);

protected:

	int tailleMaxi = 9; // 9 mètre au maximum
	int nombreDeCabine = 0;  // pas de cabine
	char electricite[3] = {'N', 'O', 'N'}; // non par défaut
	char eau[3] = {'N', 'O', 'N'}; // idem


};

#endif