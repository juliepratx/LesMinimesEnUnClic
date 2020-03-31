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
	electricite = "oui";
	eau = "oui";
	sommeVNH = 0;
	sommeVT1 = 0;
	sommeVT2 = 0;
	sommeEau = 0;
	sommeElec = 0;
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
	int* ptr_placesAFlot = &placesAFlot;
	int placesVisiteur = 300;
	int* ptr_placesVisiteur = &placesVisiteur;
	int placesCorpsMort = 30;
	int* ptr_placesCorpsMort = &placesCorpsMort;

	if (typeDeBateau == "Voilier non habitable" && typeDeVisiteur == "abonné" && corpsMort == false) {
		*ptr_placesAFlot -= 1;
		cout << "Type d'emplacement : place à flot" << endl;
		cout << "Statut : abonné" << endl;
		cout << "Il reste maintenant " << *ptr_placesAFlot << " places à flot disponibles !" << endl;
		if (*ptr_placesAFlot == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	return placesAFlot;
	if (typeDeBateau == "Voilier non habitable" && typeDeVisiteur == "passager" && corpsMort == false) {
		*ptr_placesVisiteur -= 1;
		cout << "Type d'emplacement : une place visiteur." << endl;
		cout << "Statut : passager" << endl;
		cout << "Il reste maintenant " << *ptr_placesVisiteur << " places visiteurs disponibles !" << endl;
		if (*ptr_placesVisiteur == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 1" && typeDeVisiteur == "abonné" && corpsMort == false) {
		*ptr_placesAFlot -= 1;
		cout << "Type d'emplacement : sur une place à flot." << endl;
		cout << "Statut : abonné" << endl;
		cout << "Il reste maintenant " << *ptr_placesAFlot << " places disponibles !" << endl;
		if (*ptr_placesAFlot == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 1" && typeDeVisiteur == "passager" && corpsMort == false) {
		*ptr_placesVisiteur -= 1;
		cout << "Type d'emplacement : sur une place visiteur." << endl;
		cout << "Statut : passager" << endl;
		cout << "Il reste maintenant " << *ptr_placesVisiteur << " places visiteurs disponibles !" << endl;
		if (*ptr_placesVisiteur == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 2" && typeDeVisiteur == "abonné" && corpsMort == false) {
		*ptr_placesAFlot -= 1;
		cout << "Type d'emplacement : sur une place à flot." << endl;
		cout << "Statut : abonné" << endl;
		cout << "Il reste maintenant " << *ptr_placesAFlot << " places disponibles !" << endl;
		if (*ptr_placesAFlot == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (typeDeBateau == "Voilier type 2" && typeDeVisiteur == "passager" && corpsMort == false) {
		*ptr_placesVisiteur -= 1;
		cout << "Type d'emplacement : sur une place visiteur." << endl;
		cout << "Statut : passager" << endl;
		cout << "Il reste maintenant " << *ptr_placesVisiteur << " places visiteurs disponibles !" << endl;
		if (*ptr_placesVisiteur == 0) {
			cout << "Aucune place disponible !" << endl;
		}
	}
	if (corpsMort == true) {
		*ptr_placesCorpsMort -= 1;
		cout << "Type d'emplacement : sur un corps mort." << endl;
		cout << "Il reste maintenant " << *ptr_placesCorpsMort << " corps mort disponibles !" << endl;
		if (*ptr_placesCorpsMort == 0) {
			cout << "Aucun corps disponible !" << endl;
		}
	}

	return placesAFlot, placesVisiteur, placesCorpsMort;
}

int Bateau::facturationVoilierNonHabitable(int nbDeJour, string typeDeVisiteur)
{
	int sommeVNH = 0;
	int *ptr_VNH = &sommeVNH;

	if (nbDeJour == 365 && typeDeVisiteur == "abonné") {
		*ptr_VNH = 500;
	}
	if (nbDeJour < 365 && typeDeVisiteur == "abonné") {
		*ptr_VNH = nbDeJour * 1.34; // 500 € pour 1 an ; 41 € pour 1 mois ; 1.34 € par jour (pas précis)
	}
	if (nbDeJour < 365 && typeDeVisiteur == "passager") {
		*ptr_VNH = nbDeJour * 20;
	}
	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << *ptr_VNH << " € pour les " << nbDeJour << " jours" << endl;

	return sommeVNH;
}

int Bateau::facturationVoilierType1(int nbDeJour, string typeDeVisiteur)
{
	int sommeVT1 = 0;
	int* ptr_VT1 = &sommeVT1;

	if (nbDeJour < 365 && typeDeVisiteur == "abonné") {
		sommeVT1 = (nbDeJour * 1.34) * (1 + 30 / 100);
	}
	if (nbDeJour < 365 && typeDeVisiteur == "passager") {
		sommeVT1 = (nbDeJour * 20) * (1 + 30 / 100);
	}
	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << *ptr_VT1 << " € pour les " << nbDeJour << " jours." << endl;

	return sommeVT1;
}

int Bateau::facturationVoilierType2(int nbDeJour, string typeDeVisiteur)
{
	int sommeVT2 = 0;
	int* ptr_VT2 = &sommeVT2;

	if (nbDeJour < 365 && typeDeVisiteur == "abonné") {
		sommeVT2 = (nbDeJour * 1.34) * (1 + 60 / 100);
	}
	if (nbDeJour < 365 && typeDeVisiteur == "passager") {
		sommeVT2 = (nbDeJour * 20) * (1 + 60 / 100);
	}
	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << *ptr_VT2 << " € pour les " << nbDeJour << " jours." << endl;

	return sommeVT2;
}

int Bateau::facturationCorpsMort(int nbDeJour)
{
	int sommePlace = 0;
	int* ptr_CM = &sommePlace;

	sommePlace = (nbDeJour * 20) * (1 - 50 / 100);

	cout << "*** Frais de location de l'emplacement ***" << endl;
	cout << "Total à payer : " << *ptr_CM << " euros pour les " << nbDeJour << " nuits." << endl;

	return sommePlace;
}

int Bateau::facturationEau(bool eau)
{
	int sommeEau = 0;
	int* ptr_Eau = &sommeEau;

	if (eau == true) {
		sommeEau = 5;
	}
	///cout << "*** Supplément eau ***" << endl;
	cout << "Frais du racordement à l'eau : " << *ptr_Eau << " €" << endl;

	return sommeEau;
}

int Bateau::facturationElectricite(bool elec)
{
	int sommeElec = 0;
	int* ptr_Elec = &sommeElec;

	if (elec == true) {
		sommeElec = 5;
	}
	//cout << "*** Supplément électricité ***" << endl;
	cout << "Frais du racordement à l'électricité : " << *ptr_Elec << " €" << endl;

	return sommeElec;
}

int Bateau::totalAPayer(string typeDeBateau)
{
	int total = 0;
	int* ptr_total = &total;

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

Bateau::~Bateau() { 

	;
}