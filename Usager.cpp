/*
Classe des usagers du Port :
- ajout d'un identifiant
*/

#include "Usager.h"
#include <iostream>
#include <string>


using namespace std;

Usager::Usager(){

	string idVNH = "VNH", idVT1 = "VT1", idVT2 = "VT2";
	int id_VNH = 0; int id_VT1 = 0; int id_VT2 = 0;
		
	
}
/*
Usager::Usager(const Usager& unUsager, string typeDeBateau)
{
	// allocation dynamique de la mémoire

	if (typeDeBateau == "Voilier non habitable") {
		idVNH = new char[strlen(unUsager.idVNH)];
		strncpy(idVNH, unUsager.idVNH, strlen(unUsager.idVNH));
	}
	if (typeDeBateau == "Voilier type 1") {
		idVT1 = new char[strlen(unUsager.idVT1)];
		strncpy(idVT1, unUsager.idVT1, strlen(unUsager.idVT1));
	}
	if (typeDeBateau == "Voiler type 2") {
		idVT2 = new char[strlen(unUsager.idVT2)];
		strncpy(idVT2, unUsager.idVT2, strlen(unUsager.idVT2));
	}
}
*/
	

void Usager::afficheID(string typeDeBateau)
{
	if (typeDeBateau == "Voilier non habitable") {
		cout << "ID VNH : " << idVNH << endl;
		cout << "Type de bâteau : " << typeDeBateau << endl;
	}
	if (typeDeBateau == "Voilier type 1") {
		cout << "ID VT1 : " << idVT1 << endl;
		cout << "Type de bâteau : " << typeDeBateau << endl;
	}
	if (typeDeBateau == "Voilier type 2") {
		cout << "ID VT2 : " << idVT2 << endl;
		cout << "Type de bâteau : " << typeDeBateau << endl;
	}
	
}

void Usager::abonnes(){

	cout << "Je suis un abonné !" << endl;

}

void Usager::passagers(){

	cout << "Je suis de passage !" << endl;
}


void Usager::id(string typeDeBateau)
{
	string idVNH = "VNH", idVT1 = "VT1", idVT2 = "VT2";
	int id_VNH = 0; int id_VT1 = 0; int id_VT2 = 0;
	int* ptr_id_VNH = &id_VNH;
	int* ptr_id_VT1 = &id_VT1;
	int* ptr_id_VT2 = &id_VT2;

	if (typeDeBateau == "Voilier non habitable") {
		*ptr_id_VNH += 1;
		cout << "Identifiant : " << idVNH << " " << *ptr_id_VNH << endl;
	}
	if (typeDeBateau == "Voilier type 1") {
		*ptr_id_VT1 += 1;
		cout << "Identifiant : " << idVT1 << " " << *ptr_id_VT1 << endl;
	}
	if (typeDeBateau == "Voilier type 2") {
		*ptr_id_VT2 += 1;
		cout << "Identifiant : " << idVT2 << " " << *ptr_id_VT2 << endl;
	}
}




Usager::~Usager() { 

	;

}