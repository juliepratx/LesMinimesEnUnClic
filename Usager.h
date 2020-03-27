#ifndef USAGER_H_INCLUDED
#define USAGER_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Usager{

public:

	Usager();
	~Usager();


	void abonnes();
	void passagers();
	//void id(string typeDeBateau);

private:

	string idVNH ="VNH";
	int id_VNH = 0;
	string idVT1 = "VT1";
	int id_VT1 = 0;
	string idVT2 = "VT2";
	int id_VT2 = 0;

};


#endif
