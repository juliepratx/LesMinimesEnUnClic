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
	electricite;
	eau;
	sommeVNH = 0;
	sommeVT1 = 0;
	sommeVT2 = 0;
	sommeEau = 0;
	sommeElec = 0;
	total = 0;
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

int Bateau::facturationVoilierNonHabitable(int nbDeJour, string typeDeVisiteur)
{
	int sommeVNH = 0;
	if (nbDeJour == 365 && typeDeVisiteur == "abonné") {
		sommeVNH = 500;
	}
	if (nbDeJour < 365 && typeDeVisiteur == "abonné") {
		sommeVNH = nbDeJour * 1.34; // 500 € pour 1 an ; 41 € pour 1 mois ; 1.34 € par jour (pas précis)
	}
	if (nbDeJour < 365 && typeDeVisiteur == "passager") {
		sommeVNH = nbDeJour * 20;
	}
	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << sommeVNH << " € pour les " << nbDeJour << " jours" << endl;

	return sommeVNH;
}

int Bateau::facturationVoilierType1(int nbDeJour, string typeDeVisiteur)
{
	int sommeVT1 = 0;
	if (nbDeJour < 365 && typeDeVisiteur == "abonné") {
		sommeVT1 = (nbDeJour * 1.34) * (1 + 30 / 100);
	}
	if (nbDeJour < 365 && typeDeVisiteur == "passager") {
		sommeVT1 = (nbDeJour * 20) * (1 + 30 / 100);
	}
	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << sommeVT1 << " € pour les " << nbDeJour << " jours." << endl;

	return sommeVT1;
}

int Bateau::facturationVoilierType2(int nbDeJour, string typeDeVisiteur)
{
	int sommeVT2 = 0;
	if (nbDeJour < 365 && typeDeVisiteur == "abonné") {
		sommeVT2 = (nbDeJour * 1.34) * (1 + 60 / 100);
	}
	if (nbDeJour < 365 && typeDeVisiteur == "passager") {
		sommeVT2 = (nbDeJour * 20) * (1 + 60 / 100);
	}
	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << sommeVT2 << " € pour les " << nbDeJour << " jours." << endl;

	return sommeVT2;
}

int Bateau::facturationCorpsMort(int nbDeJour)
{
	int sommePlace = 0;
	sommePlace = (nbDeJour * 20) * (1 - 50 / 100);

	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << sommePlace << " euros pour les " << nbDeJour << " nuits." << endl;

	return sommePlace;
}

int Bateau::facturationEau(bool eau)
{
	int sommeEau = 0;
	if (eau == true) {
		sommeEau = 5;
	}
	cout << "*** Supplément eau ***" << endl;
	cout << "Frais du racordement à l'eau : " << sommeEau << " €" << endl;
	return sommeEau;
}

int Bateau::facturationElectricite(bool elec)
{
	int sommeElec = 0;
	if (elec == true) {
		sommeElec = 5;
	}
	cout << "*** Supplément électricité ***" << endl;
	cout << "Frais du racordement à l'électricité : " << sommeElec << " €" << endl;
	return sommeElec;
}

int Bateau::totalAPayer(string typeDeBateau)
{
	int total = 0;

	if (typeBateau == "Voilier non habitable") {
		total = sommeVNH;
	}
	
	if (typeBateau == "Voilier type 1") {
		total = sommeVT1 + sommeEau + sommeElec;
	}
	if (typeBateau == "Voilier type 2") {
		total = sommeVT2 + sommeEau + sommeElec;
	}
	cout << "*                Total à payer : " << total << " €                  *" << endl;

	return total;
	
	
}

void Bateau::afficheBateau()
{
	cout << "Type de bâteau : " << typeBateau << endl;
}



Bateau::~Bateau() { ; }