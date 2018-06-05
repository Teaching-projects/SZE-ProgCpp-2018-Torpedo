#ifndef JATEKOS_HPP
#define JATEKOS_HPP

#include <iostream>
#include <ctype.h>
#include <string.h>
#include "Tabla.hpp"
#include "Hajo.hpp"
using namespace std;

class Jatekos{
private:
	string nev;
	Tabla *tabla;
	Hajo hajok[10];

public:
	Jatekos(string nev);
	~Jatekos();
	bool hajoBeker(int db);
	bool ellenorzes(char *pozicio);
	int oszlopAlakito(char betuoszlop);

};

#endif