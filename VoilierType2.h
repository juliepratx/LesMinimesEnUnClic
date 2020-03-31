/*

Sous-classe de la classe Bateau

*/

#ifndef VOILIERTYPE2_H_INCLUDED
#define VOILIERTYPE2_H_INCLUDED


#include "Bateau.h"



class VoilierType2 :

	public Bateau{

	VoilierType2();
	VoilierType2(int taille);
	~VoilierType2();


protected:

	int taille;
	int nombreDeCabine;
	string electricite = "oui"; // oui par défaut
	string eau = "oui"; // idem

};

#endif