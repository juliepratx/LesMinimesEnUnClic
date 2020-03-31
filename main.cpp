/*
Projet POO : LesMinimesEnUnClic

Le port de plaisance de La Rochelle est composé de :
- 5'000 places à flot
- (dont) 300 places visiteurs
- 30 corps morts

@A rendre le 31 mars 2020 (au plus tard)

PROGRAMME PRINCIPAL

*/

#include <Windows.h>
#include <iostream>
#include "Bateau.h"
#include "VoilierNonHabitable.h"
#include "VoilierType1.h"
#include "VoilierType2.h"
#include "GestionDuPort.h"
#include "Usager.h"



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
    cout << "** Enregistrement du bâteau **" << endl;
    // 9 = taille du bateau
    Bateau B1(9);
    cout << endl;
    cout << "** Réservation d'un emplacement à quai ou en mer **" << endl;
    cout << endl;
    // Type de bateau : Voilier non habitable, Voilier type 1, Voilier type 2
    // nbDePlaceDispo (type de bâteau, type d'usager, corps mort oui ou non)
    B1.nbDePlaceDispo("Voilier non habitable", "abonné", false);
    cout << endl;
    cout << "*******************************************************" << endl;
    cout << "*                    FACTURE                          *" << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    // facturationVoilierNonHabitable (nb de jour, type d'usager : abonné ou passager)
    B1.facturationVoilierNonHabitable(30, "abonné");
    // false = pas d'eau
    B1.facturationEau(false);
    // false = pas d'électricité
    B1.facturationElectricite(false);
    cout << endl;
    cout << "*******************************************************" << endl;
    // totalAPAyer (type de bâteau)
    B1.totalAPayer("Voilier non habitable");
    cout << "*******************************************************" << endl;
    cout << endl;
  


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

    cout << "*******************************************************" << endl;
    cout << "*            PLACES DISPONIBLES DANS LE PORT          *" << endl;
    cout << "*******************************************************" << endl;
    GestionDuPort G1;
    G1.afficheListePlacesDispo();
    cout << endl;




    cout << "*******************************************************" << endl;
    cout << "*                TEST CLASSE USAGER                   *" << endl;
    cout << "*******************************************************" << endl;
 

    



    return 0;
}