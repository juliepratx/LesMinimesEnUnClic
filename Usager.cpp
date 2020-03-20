/*
Classe des usagers du Port
*/

#include "Usager.h"
#include <iostream>


using namespace std;

Usager::Usager()
{
}

Usager::~Usager()
{
}

void Usager::abonnes(){

	cout << "Je suis un abonné !" << endl;
}

void Usager::passagers(){

	cout << "Je suis de passage !" << endl;
}
