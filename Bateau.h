/*

Ceci est la classe bateau.

*/


#ifndef BATEAU_H_INCLUDED
#define BATEAU_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Bateau{

public:

	Bateau(); // constructeur par défaut
	Bateau(int taille); // indiquer la taille
	~Bateau(); // destructeur

	int nbDePlaceDispo(string typeDeBateau, string typeDeVisiteur, bool corpsMort);
	void afficheBateau();

	int facturationVoilierNonHabitable(int nbDeJour);
	int facturationVoilierType1(int nbDeJour);
	int facturationVoilierType2(int nbDeJour);
	int facturationCorpsMort(int nbDeJour);
	int facturationEau(bool eau);
	int facturationElectricite(bool elec);

private:

	string typeBateau;
	int taille = 0;
	int tailleMini = 0;
	int tailleMaxi = 0;
	int nombreDeCabine = 0;
	char electricite[3] = {'O', 'U', 'I'}; // oui par défaut
	char eau[3] = {'O', 'U', 'I'}; // idem
	int sommeVNH = 0;
	int sommeVT1 = 0;
	int sommeVT2 = 0;
	int sommeEau = 0;
	int sommeElec = 0;



};



#endif