#include "Jatekos.hpp"

Jatekos::Jatekos(string nev) :nev(nev){
	tabla = new Tabla(10);	
}

bool Jatekos::hajoBeker(int db){
	int besor, beoszlop;
	bool helyes;
	char pozicio[3], betuoszlop;
	cout << "Adja meg a(z)" << db + 1 << ". hajo poziciojat: ";
	cin >> pozicio;
	if (strlen(pozicio) == 2 && (pozicio[0] == 'A' || pozicio[0] == 'B' || pozicio[0] == 'C' || pozicio[0] == 'D' || pozicio[0] == 'E' || pozicio[0] == 'F' || pozicio[0] == 'G' || pozicio[0] == 'H'
		|| pozicio[0] == 'I' || pozicio[0] == 'J') && isdigit(pozicio[1])){
		betuoszlop = pozicio[0];
		beoszlop = oszlopAlakito(betuoszlop);
		
	}
	else return false;
	/*betuoszlop = pozicio[0];
	helyes=ellenorzes(pozicio);
	if(!helyes) return false;
	else{
	beoszlop=oszlopAlakito(betuoszlop);
	besor=pozicio[1]-'0';
	return true;
	}*/

}

bool ellenorzes(char pozicio[]){
	if ((pozicio[0] == 'A' || pozicio[0] == 'B' || pozicio[0] == 'C' || pozicio[0] == 'D' || pozicio[0] == 'E' || pozicio[0] == 'F' || pozicio[0] == 'G'
		|| pozicio[0] == 'H' || pozicio[0] == 'I' || pozicio[0] == 'J') && isdigit(pozicio[1])){
		return true;
	}
	return false;
}


int Jatekos::oszlopAlakito(char betuoszlop){
	if (betuoszlop == 'A') return 0;
	else if (betuoszlop == 'B')	return 1;
	else if (betuoszlop == 'C') return 2;
	else if (betuoszlop == 'D') return 3;
	else if (betuoszlop == 'E') return 4;
	else if (betuoszlop == 'F') return 5;
	else if (betuoszlop == 'G') return 6;
	else if (betuoszlop == 'H') return 7;
	else if (betuoszlop == 'I') return 8;
	else if (betuoszlop == 'J') return 9;
}

Jatekos::~Jatekos(){}