/*

Sous-classe de la classe Bateau

*/

#ifndef VOILIERTYPE1_H_INCLUDED
#define VOILIERTYPE1_H_INCLUDED

#include "Bateau.h"


class VoilierType1 :

	public Bateau{


protected:
	int tailleMini = 10;
	int tailleMaxi = 25;
	int nombreDeCabine;
	char electricite[3] = {'O', 'U', 'I'}; // oui par défaut
	char eau[3] = {'O', 'U', 'I'}; // idem





};


#endif