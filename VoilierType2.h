/*

Sous-classe de la classe Bateau

*/

#ifndef VOILIERTYPE2_H_INCLUDED
#define VOILIERTYPE2_H_INCLUDED


#include "Bateau.h"



class VoilierType2 :

	public Bateau{




protected:

	int taille;
	int nombreDeCabine;
	char electricite[3] = {'O', 'U', 'I'}; // oui par défaut
	char eau[3] = {'O', 'U', 'I'}; // idem



};

#endif