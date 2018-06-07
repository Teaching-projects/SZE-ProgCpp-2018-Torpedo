#include "Gep.hpp"

Gep::Gep(){
	sajattabla = new Tabla(10);
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

Gep::~Gep(){}