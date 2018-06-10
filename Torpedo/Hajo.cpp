#include "Hajo.hpp"

//Hajo::Hajo(int sor, int oszlop): sor(sor), oszlop(oszlop){}
Hajo::Hajo(){}

int Hajo::getSor(){
	return sor;
}

int Hajo::getOszlop(){
	return oszlop;
}

void Hajo::setSor(int besor){
	sor = besor;
}
void Hajo::setOszlop(int beoszlop){
	oszlop = beoszlop;
}

Hajo::~Hajo(){}