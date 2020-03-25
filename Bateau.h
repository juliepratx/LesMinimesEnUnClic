/*

Ceci est la classe bateau, elle regroupe :
- le nombre de place disponible dans le port
- le prix à payer suivant la taille et le nombre de jour passé au port
- le supplément de prix pour le raccordement à l'eau et/ou à l'électricité

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

	int facturationVoilierNonHabitable(int nbDeJour, string typeDeVisiteur);
	int facturationVoilierType1(int nbDeJour, string typeDeVisiteur);
	int facturationVoilierType2(int nbDeJour, string typeDeVisiteur);
	int facturationCorpsMort(int nbDeJour);
	int facturationEau(bool eau);
	int facturationElectricite(bool elec);
	int totalAPayer(string typeDeBateau);

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
	int total = 0;




};



#endif