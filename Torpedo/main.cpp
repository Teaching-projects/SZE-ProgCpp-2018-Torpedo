#include <iostream>
#include <stdlib.h>
#include <string>
#include "Jatekos.hpp"

using namespace std;

int main(){
	string nev;
	int db = 0, db2 = 0;
	bool ok = false;

	cout << "Adja meg az elso jatekos nevet: ";
	cin >> nev;
	Jatekos jatekos1(nev);
	do{
		if (jatekos1.hajoBeker(db)){
			db++;
			system("cls");
		}
	} while (db<1); //10re visszaírni
	//system("cls");
	//jatekos1.sajatTablatRajzol();
	cout << "Adja meg a masodik jatekos nevet: ";
	cin >> nev;
	db = 0;
	Jatekos jatekos2(nev);
	do{
		if (jatekos2.hajoBeker(db)){
			db++;
			system("cls");
		}		
	} while (db<1); //10re visszaírni
	jatekos1.hajokatMasol(jatekos2, db);
	jatekos2.hajokatMasol(jatekos1, db);
	jatekos1.kiirEllen(db);
	jatekos2.kiirEllen(db);


	do{
		jatekos1.loves(db);
		jatekos1.ellenfelTablatRajzol();
		db2++;
		if (db2 == 3){
			ok = true;
		}

	} while (!ok);

	return 0;


}
