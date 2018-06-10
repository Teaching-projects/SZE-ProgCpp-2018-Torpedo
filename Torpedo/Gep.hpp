#ifndef GEP_HPP
#define GEP_HPP

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Tabla.hpp"
#include "Hajo.hpp"
class Jatekos;

using namespace std;

class Gep{
	private:
		Tabla *sajattabla;
		Hajo hajok[10];
		Tabla *ellenfeltabla;
		Hajo ellenfelhajok[10];
		int talalat;

	public:
		Gep();
		~Gep();
		bool hajoGeneralas();
		void TablaKiir();
		int getHajoSor(int db);
		int getHajoOszlop(int db);
		void hajokatMasol(Jatekos ellenfel, int db);
		int loves(int db, Jatekos ellenfel);
		int getTalalat();		
		Tabla* getTabla();
		
};

#endif