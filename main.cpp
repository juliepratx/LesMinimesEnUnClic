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
#include <Windows.h>



using namespace std;

int main(){

    SetConsoleOutputCP(65001);

    cout << "*******************************************************" << endl;
    cout << "*             TEST DU PROGRAMME N°1                   *" << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << "** Nouvel usager **" << endl;
    Usager U1;
    U1.abonnes();
    cout << endl;
    cout << "** Quel type de bâteau ? **" << endl;
    Bateau B1(9);
    cout << endl;
    cout << "** Réservation d'un emplacement à quai ou en mer **" << endl;
    cout << endl;
    B1.nbDePlaceDispo("Voilier non habitable", "abonné", false);
    cout << endl;
    cout << "*******************************************************" << endl;
    cout << "*                    FACTURE                          *" << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    B1.facturationVoilierNonHabitable(30, "abonné");
    B1.facturationEau(false);
    B1.facturationElectricite(false);
    cout << endl;
    cout << "*******************************************************" << endl;
    B1.totalAPayer("Voilier non habitable");
    cout << "*******************************************************" << endl;
    cout << endl;
    /*
    cout << "*******************************************************" << endl;
    cout << "*             TEST DU PROGRAMME N°2                   *" << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << "** Nouvel usager **" << endl;
    Usager U2;
    U2.abonnes();
    cout << endl;
    cout << "** Quel type de bâteau ? **" << endl;
    Bateau B2(9);
    cout << endl;
    cout << "** Réservation d'un emplacement à quai ou en mer **" << endl;
    cout << endl;
    B2.nbDePlaceDispo("Voilier non habitable", "abonné", false);
    cout << endl;

    */



    return 0;
}