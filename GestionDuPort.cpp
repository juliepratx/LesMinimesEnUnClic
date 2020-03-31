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

	cout << "Liste des clients :" << endl;


}

void GestionDuPort::afficheListePlacesDispo()
{
	cout << "Liste des places disponibles : " << endl;
	cout << "Places à flot : " << nbDePlaceAFlot << endl;
	cout << "Places visiteurs : " << nbDePlaceVisiteurs << endl;
	cout << "Corps mort : " << ndBdePlaceCorpsMort << endl;
}

