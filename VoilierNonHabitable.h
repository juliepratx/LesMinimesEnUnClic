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
	~VoilierNonHabitable(); // destructeur



protected:

	int tailleMaxi = 9; // 9 mètre au maximum
	int nombreDeCabine = 0;  // pas de cabine
	string electricite = "non"; // non par défaut
	string eau = "non"; // idem



};

#endif