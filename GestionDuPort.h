/*

Ceci est la classe gestion du port.

Elle sert à enregistrer les données saisies par l'utilisateur.
Il y a les constructeurs de copie de toutes les classes présentes dans le programme.

*/


#ifndef GESTIONDUPORT_H_INCLUDED
#define GESTIONDUPORT_H_INCLUDED


class GestionDuPort{



public:
	GestionDuPort();
	~GestionDuPort();

private:

	int nbDePlaceAFlot = 4700;
	int nbDePlaceVisiteurs = 300;
	int ndBdePlaceCorpsMort = 30;



};



#endif