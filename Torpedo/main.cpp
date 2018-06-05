#include <iostream>
#include <stdlib.h>
#include <string>
#include "Jatekos.hpp"

using namespace std;

int main(){
	string nev;
	int db = 0;

	cout << "Adja meg a jatekos nevet: ";
	cin >> nev;
	Jatekos jatekos1(nev);
	do{		
		if (jatekos1.hajoBeker(db)){
			db++;
		}
	} while (db<5); //10re visszaírni
	system("cls");
	jatekos1.tablatRajzol();

	return 0;


}
