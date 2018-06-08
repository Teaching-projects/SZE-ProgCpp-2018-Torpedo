#include "Gep.hpp"
#include "Jatekos.hpp"

Gep::Gep(){
	sajattabla = new Tabla(10);
	ellenfeltabla = new Tabla(10);
	talalat = 0;
}

bool Gep::hajoGeneralas(){
	srand(time(NULL));
	int segedoszlop, segedsor;
	

	for (int i = 0; i < 10; i++){
		segedoszlop = rand() % 10;
		segedsor = rand() % 10;
		if (sajattabla->setTabla(segedoszlop, segedsor)){
			hajok[i].setOszlop(segedoszlop);
			hajok[i].setSor(segedsor);
		}
		else{
			i--;
		}
	}
	return true;
}

void Gep::Kiir(){
	for (int i = 0; i < 10; i++){
		cout << hajok[i].getSor() << '\t' << hajok[i].getOszlop()<<'\n';
	}
}

void Gep::TablaKiir(){
	sajattabla->kiRajzol();
}

int Gep::getHajoOszlop(int db){
	return hajok[db].getOszlop();
}

int Gep::getHajoSor(int db){
	return hajok[db].getSor();
}

void Gep::hajokatMasol(Jatekos ellenfel, int db){
	for (int i = 0; i<db; i++){
		ellenfelhajok[i].setSor(ellenfel.getHajoSor(i));
		ellenfelhajok[i].setOszlop(ellenfel.getHajoOszlop(i));
	}
}

int Gep::loves(int db, Jatekos ellenfel){	
	int sor, oszlop;
	int talalte;
	srand(time(NULL));

	sor = rand() % 10;
	oszlop = rand() % 10;
	talalte = ellenfeltabla->becsapodas(oszlop, sor, ellenfelhajok, db);
	if (talalte==0){
		cout << "A gep bevitt egy talalatot.\n";
		ellenfel.getTabla()->ellenfelTablaBeallit(oszlop, sor, talalte);
		talalat++;
		return 0;
	}
	else if(talalte==1){
		cout << "A gep nem talalt.\n";
		ellenfel.getTabla()->ellenfelTablaBeallit(oszlop, sor, talalte);
		return 1;
	}
	else return 2;
		
}

int Gep::getTalalat(){
	return talalat;
}

Tabla* Gep::getTabla(){
	return sajattabla;
}


Gep::~Gep(){}