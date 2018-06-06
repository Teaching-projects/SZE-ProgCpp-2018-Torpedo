#include "Jatekos.hpp"

Jatekos::Jatekos(string nev) :nev(nev){
	sajattabla = new Tabla(10);
	ellenfeltabla = new Tabla(10);
	talalat = 0;
}

string Jatekos::nevKiir(){
	return nev;
}

bool Jatekos::hajoBeker(int db){
	int besor, beoszlop;	
	char pozicio[10], betuoszlop;	
	
	cout << "Adja meg a(z) " << db+1 << ". hajo poziciojat: ";
	cin >> pozicio;
	if (strlen(pozicio) == 2 && (pozicio[0] == 'A' || pozicio[0] == 'B' || pozicio[0] == 'C' || pozicio[0] == 'D' || pozicio[0] == 'E' || pozicio[0] == 'F' || pozicio[0] == 'G' || pozicio[0] == 'H'
		|| pozicio[0] == 'I' || pozicio[0] == 'J') && isdigit(pozicio[1])){
		betuoszlop = pozicio[0];
		beoszlop = oszlopAlakito(betuoszlop);
		besor = pozicio[1] - '0';
		hajok[db].setOszlop(beoszlop);
		hajok[db].setSor(besor);
		//cout <<hajok[db].getOszlop();
		//cout << hajok[db].getSor()<<"\n";
		if (sajattabla->setTabla(beoszlop, besor)){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		cout << "Nem megfelelo formatum probalja ujra.\n\n";
		return false;
	}
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

void Jatekos::sajatTablatRajzol(){
	sajattabla->kiRajzol();
}

void Jatekos::ellenfelTablatRajzol(){
	ellenfeltabla->kiRajzol();
}

int Jatekos::getHajoOszlop(int db){
	return hajok[db].getOszlop();
}

int Jatekos::getHajoSor(int db){
	return hajok[db].getSor();
}

void Jatekos::hajokatMasol(Jatekos ellenfel, int db){
	for (int i = 0; i<db; i++){
		ellenfelhajok[i].setSor(ellenfel.getHajoSor(i));
		ellenfelhajok[i].setOszlop(ellenfel.getHajoOszlop(i));
	}
}
/*
void Jatekos::kiirEllen(int db){
for(int i=0; i<db;i++){
cout <<ellenfelhajok[i].getOszlop()<<"  "<<ellenfelhajok[i].getSor()<<'\n';
}
}*/

bool Jatekos::loves(int db){
	char celpont[10], betuoszlop;
	int sor, oszlop;
	cout << "Adja meg a celpontot: ";
	cin >> celpont;
	if (strlen(celpont) == 2 && (celpont[0] == 'A' || celpont[0] == 'B' || celpont[0] == 'C' || celpont[0] == 'D' || celpont[0] == 'E' || celpont[0] == 'F' || celpont[0] == 'G' || celpont[0] == 'H'
		|| celpont[0] == 'I' || celpont[0] == 'J') && isdigit(celpont[1])){
		betuoszlop = celpont[0];
		oszlop = oszlopAlakito(betuoszlop);
		sor = celpont[1] - '0';
		if (ellenfeltabla->becsapodas(oszlop, sor, ellenfelhajok, db)){	
			talalat++;
			return true;
		}
		else{
			return false;
		}


	}
	else{
		cout << "Ervenytelen formatum.\n\n";
		return false;
	}
}

int Jatekos::getTalalat(){
	return talalat;
}

Jatekos::~Jatekos(){}