/*
Classe qui regroupe toutes les caractéristiques des bateaux :
- la taille (mini et maxi)
- le nombre de cabine
- le racordement à l'eau et à l'électricité
*/

#include <iostream>
#include "Bateau.h"
#include <string>


using namespace std;


Bateau::Bateau() {

	typeBateau = "NULL";
	taille = 0;
	tailleMini = 0;
	tailleMaxi = 0;
	nombreDeCabine = 0;
	electricite[0] = '\0';
	eau[0] = '\0';

}

Bateau::Bateau(int taille){
	

	if (taille < 10) {
		cout << endl;
		cout << "Taille du bâteau : " << taille << " mètres" << endl;
		cout << "Type de bâteau : Voilier non habitable" << endl;
		cout << "Branchement à l'eau et à l'électricté non disponible." << endl;
	}

	if (taille >= 10 && taille < 25) {
		cout << endl;
		cout << "Taille du bâteau : " << taille << " mètres" << endl;
		cout << "Type de bâteau : Voilier de type 1" << endl;
		cout << "Branchement à l'eau et à l'électricité en supplément." << endl;
	}

	if (taille > 25) {
		cout << endl;
		cout << "Taille du bâteau : " << taille << " mètres" << endl;
		cout << "Type de bâteau : Voilier de type 2" << endl;
		cout << "Attention : places disponibles limitées !" << endl;
		cout << "Branchement à l'eau et à l'électricité en supplément." << endl;
	}

}




int Bateau::nbDePlaceDispo(string typeDeBateau, string typeDeVisiteur, bool corpsMort)
{
	int placesAFlot = 4'700;
	int placesVisiteur = 300;
	int placesCorpsMort = 30;

	if (typeDeBateau == "Voilier non habitable" && typeDeVisiteur == "abonné" && corpsMort == false) {
		placesAFlot--;
		cout << "Type d'emplacement : place à flot" << endl;
		cout << "Statut : abonné" << endl;
		cout << "Il reste maintenant " << placesAFlot << " places à flot disponibles !" << endl;
		if (placesAFlot == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier non habitable" && typeDeVisiteur == "passager" && corpsMort == false) {
		placesVisiteur--;
		cout << "Type d'emplacement : une place visiteur." << endl;
		cout << "Statut : passager" << endl;
		cout << "Il reste maintenant " << placesVisiteur << " places visiteurs disponibles !" << endl;
		if (placesVisiteur == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 1" && typeDeVisiteur == "abonné" && corpsMort == false) {
		placesAFlot--;
		cout << "Type d'emplacement : sur une place à flot." << endl;
		cout << "Statut : abonné" << endl;
		cout << "Il reste maintenant " << placesAFlot << " places disponibles !" << endl;
		if (placesAFlot == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 1" && typeDeVisiteur == "passager" && corpsMort == false) {
		placesVisiteur--;
		cout << "Type d'emplacement : sur une place visiteur." << endl;
		cout << "Statut : passager" << endl;
		cout << "Il reste maintenant " << placesVisiteur << " places visiteurs disponibles !" << endl;
		if (placesVisiteur == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 2" && typeDeVisiteur == "abonné" && corpsMort == false) {
		placesAFlot--;
		cout << "Type d'emplacement : sur une place à flot." << endl;
		cout << "Statut : abonné" << endl;
		cout << "Il reste maintenant " << placesAFlot << " places disponibles !" << endl;
		if (placesAFlot == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 2" && typeDeVisiteur == "passager" && corpsMort == false) {
		placesVisiteur--;
		cout << "Type d'emplacement : sur une place visiteur." << endl;
		cout << "Statut : passager" << endl;
		cout << "Il reste maintenant " << placesVisiteur << " places visiteurs disponibles !" << endl;
		if (placesVisiteur == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (corpsMort == true) {
		placesCorpsMort--;
		cout << "Type d'emplacement : sur un corps mort." << endl;
		cout << "Il reste maintenant " << placesCorpsMort << " corps mort disponibles !" << endl;
		if (placesCorpsMort == 0) {
			cout << "Aucun corps disponible !" << endl;
		}
	}

	return placesAFlot, placesVisiteur, placesCorpsMort;
}

void Bateau::afficheBateau()
{
	cout << "Type de bâteau : " << typeBateau << endl;
}



Bateau::~Bateau() { ; }