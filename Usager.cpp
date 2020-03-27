/*
Classe des usagers du Port :
- ajout d'un identifiant
*/

#include "Usager.h"
#include <iostream>
#include <string>


using namespace std;

Usager::Usager(){

	idVNH = "VNH";
	id_VNH = '\0';
	idVT1 = "VT1";
	id_VT1 = '\0';
	idVT2 = "VT2";
	id_VT2 = '\0';

}


void Usager::abonnes(){

	cout << "Je suis un abonné !" << endl;

}

void Usager::passagers(){

	cout << "Je suis de passage !" << endl;
}

void Usager::id(string typeDeBateau)
{
	string idVNH = "VNH"; string idVT1 = "VT1"; string idVT2 = "VT2";
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

	if (typeDeBateau == "Voilier type 1") {
		*ptr_id_VT2 += 1;
		cout << "Identifiant : " << idVT2 << " " << *ptr_id_VT2 << endl;
	}

}

Usager::~Usager() { ; }