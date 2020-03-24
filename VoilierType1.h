/*

Sous-classe de la classe Bateau

*/

#ifndef VOILIERTYPE1_H_INCLUDED
#define VOILIERTYPE1_H_INCLUDED

#include "Bateau.h"


class VoilierType1 :

	public Bateau{

	VoilierType1();
	VoilierType1(int taille);

protected:
	int tailleMini = 10;
	int tailleMaxi = 25;
	int nombreDeCabine;
	string electricite = "oui"; // oui par défaut
	string eau = "oui"; // idem
	//char electricite[3] = {'O', 'U', 'I'}; 
	//char eau[3] = {'O', 'U', 'I'}; // idem





};


#endif