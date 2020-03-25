/*
Classe des usagers du Port
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

Usager::Usager(string typeDeBateau)
{
	string idVNH = "VNH"; string idVT1 = "VT1"; string idVT2 = "VT2";
	int id_VNH = 0; int id_VT1 = 0; int id_VT2 = 0;

	if (typeDeBateau == "Voilier non habitable") {
		id_VNH++;
		cout << "Identifiant : " << idVNH << " " << id_VNH << endl;
	}
	
	if (typeDeBateau == "Voilier type 1") {
		id_VT2++;
		cout << "Identifiant : " << idVT1 << " " << id_VT1 << endl;
	}
	
	if (typeDeBateau == "Voilier type 1") {
		id_VT2++;
		cout << "Identifiant : " << idVT2 << " " << id_VT2 << endl;
	}

}



void Usager::abonnes(){

	cout << "Je suis un abonné !" << endl;

}

void Usager::passagers(){

	cout << "Je suis de passage !" << endl;
}
Usager::~Usager() { ; }