#include <iostream>
#include <stdlib.h>
#include <string>
#include "Jatekos.hpp"
#include <conio.h>

#define HAJOSZAM 10

using namespace std;

int main(){
	string nev;
	int db = 0;
	bool ok = false;
	bool sikeres;
	cout << "Adja meg az elso jatekos nevet: ";
	cin >> nev;
	Jatekos jatekos1(nev);
	do{
		if (jatekos1.hajoBeker(db)){
			db++;			
		}
	} while (db<2); //10re visszaírni
	system("cls");	
	cout << "Adja meg a masodik jatekos nevet: ";
	cin >> nev;	
	db = 0;	
	Jatekos jatekos2(nev);
	do{
		if (jatekos2.hajoBeker(db)){
			db++;			
		}		
	} while (db<2); //10re visszaírni
	jatekos1.hajokatMasol(jatekos2, db);
	jatekos2.hajokatMasol(jatekos1, db);	
	system("cls");
	do{
		cout << jatekos1.nevKiir() << " kovetkezik. ";
		do{
			sikeres=jatekos1.loves(db);
			cout << "Sajat tabla:\n";
			jatekos1.sajatTablatRajzol();
			cout << "Ellenfel  tabla:\n";
			jatekos1.ellenfelTablatRajzol();
		} while (sikeres && (jatekos1.getTalalat() < 2));
		cout << jatekos1.nevKiir() << " nyomjon gombot a folytatashoz!\n\n";
		getch();
		system("cls");
		if ((jatekos1.getTalalat() < 2)){
			cout << jatekos2.nevKiir() << " kovetkezik. ";
			do{
				sikeres = jatekos2.loves(db);
				cout << "Sajat tabla:\n";
				jatekos2.sajatTablatRajzol();
				cout << "Ellenfel  tabla:\n";
				jatekos2.ellenfelTablatRajzol();
			} while (sikeres && (jatekos2.getTalalat() < 2));
			cout << jatekos2.nevKiir() << " nyomjon gombot a folytatashoz!\n\n";
			getch();
		}		
	} while (jatekos1.getTalalat() < 2 && jatekos2.getTalalat() < 2);
	if (jatekos1.getTalalat() == 2){
		cout << jatekos1.nevKiir() << " nyert! Gratulalunk!\n\n";
	}
	else cout << jatekos2.nevKiir() << " nyert! Gratulalunk!\n\n";
	return 0;
}
