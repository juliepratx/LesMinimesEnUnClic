/*
Projet POO : LesMinimesEnUnClic

Le port de plaisance de La Rochelle est composé de :
- 5'000 places à flot
- (dont) 300 places visiteurs
- 30 corps morts

@A rendre le 31 mars 2020 (au plus tard)

PROGRAMME PRINCIPAL

*/

#include <iostream>
#include "Bateau.h"
#include "GestionDuPort.h"
#include "Usager.h"
#include "VoilierNonHabitable.h"
#include "VoilierType1.h"
#include "VoilierType2.h"
#include "Tarifs.h"
#include <Windows.h>



using namespace std;

int main(){

    SetConsoleOutputCP(65001);

    cout << "__________________ Test du programme __________________" << endl;
    cout << endl;
    cout << endl;
    cout << "** Quel type de bâteau ? **" << endl;
    Bateau B2(9);
    cout << endl;
    cout << "** Réservation d'un emplacement à quai ou en mer **" << endl;
    cout << endl;
    B2.nbDePlaceDispo("Voilier non habitable", "abonné", false);
    cout << endl;
    cout << "** Détail de la facturation **" << endl;
  
    





    return 0;
}