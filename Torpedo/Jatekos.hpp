#ifndef JATEKOS_HPP
#define JATEKOS_HPP

#include <iostream>
#include <ctype.h>
#include <string>
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
		int talalat;

	public:
		Jatekos(string nev);
		~Jatekos();
		string nevKiir();
		bool hajoBeker(int db);
		bool ellenorzes(char *pozicio);
		int oszlopAlakito(char betuoszlop);
		void sajatTablatRajzol();
		void ellenfelTablatRajzol();
		int loves(int db, Jatekos ellenfel);
		void hajokatMasol(Jatekos ellenfel, int db);
		int getHajoSor(int db);
		int getHajoOszlop(int db);	
		int getTalalat();
		Tabla* getTabla();
};

#endif