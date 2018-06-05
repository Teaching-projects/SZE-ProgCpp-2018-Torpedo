#include <iostream>
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
		jatekos1.hajoBeker(db);
	} while (db<15);

		return 0;


}
