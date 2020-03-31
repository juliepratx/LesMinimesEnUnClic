#include "GestionDuPort.h"
#include <iostream>
#include <string>


using namespace std;


GestionDuPort::GestionDuPort(){

}

GestionDuPort::~GestionDuPort() {
	;
}

void GestionDuPort::afficheListeClient()
{

	// affichage du tableau des usagers du port 
	// non disponible

	cout << "Liste des clients :" << endl;
	cout << "ID VNH : " << endl;
	cout << "ID VT1 : " << endl;
	cout << "ID VT2 : " << endl;


}

void GestionDuPort::afficheListePlacesDispo()
{
	cout << "Liste des places disponibles : " << endl;
	cout << "Places à flot : " << nbDePlaceAFlot << endl;
	cout << "Places visiteurs : " << nbDePlaceVisiteurs << endl;
	cout << "Corps mort : " << ndBdePlaceCorpsMort << endl;
}

