#ifndef USAGER_H_INCLUDED
#define USAGER_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Usager{

public:

	Usager();
//	Usager(const Usager& unUsager, string typeDeBateau);
	~Usager();

	void afficheID(string typeDeBateau);
	void abonnes();
	void passagers();
	void id(string typeDeBateau);

private:

	string idVNH = "VNH", idVT1 = "VT1", idVT2 = "VT2";
	int id_VNH = 0; int id_VT1 = 0; int id_VT2 = 0;

	/*
	// Modèle d'identifiant :

	char idVNH[7] = {'V', 'N', 'H', '0', '0', '0', '0'};
	char idVT1[7] = {'V', 'T', '1', '0', '0', '0', '0'};
	char idVT2[7] = {'V', 'T', '2', '0', '0', '0', '0'};
	*/

};


#endif
