#ifndef JATEKOS_HPP
#define JATEKOS_HPP

#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "Tabla.hpp"
#include "Hajo.hpp"
using namespace std;

class Jatekos{
private:
	string nev;
	Tabla *sajattabla;
	Hajo hajok[10];
	Tabla *ellenfeltabla;
	Hajo ellenfelhajok[10];

public:
	Jatekos(string nev);
	~Jatekos();
	bool hajoBeker(int db);
	bool ellenorzes(char *pozicio);
	int oszlopAlakito(char betuoszlop);
	void sajatTablatRajzol();
	void ellenfelTablatRajzol();
	bool loves(int db);
	void hajokatMasol(Jatekos ellenfel, int db);
	int getHajoSor(int db);
	int getHajoOszlop(int db);
	//teszteléshez kellet, véglegesben nem kell kiíratni
	void kiirEllen(int db);


};

#endif