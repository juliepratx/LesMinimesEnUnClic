/*

Ceci est la classe gestion du port.



*/


#ifndef GESTIONDUPORT_H_INCLUDED
#define GESTIONDUPORT_H_INCLUDED

#include <iostream>
#include <string>


class GestionDuPort{

public:

	GestionDuPort();
	~GestionDuPort();

	void afficheListeClient();
	void afficheListePlacesDispo();

private:

	int nbDePlaceAFlot = 4700;
	int nbDePlaceVisiteurs = 300;
	int ndBdePlaceCorpsMort = 30;


};



#endif