#ifndef TABLA_HPP
#define TABLA_HPP

#include <iostream>
#include "Hajo.hpp"
using namespace std;

class Tabla{
	private:
		char **tabla;
		const int meret;

	public:
		Tabla(int meret);
		~Tabla();
		void kiRajzol();
		bool setTabla(int oszlop, int sor);
		int becsapodas(int oszlop, int sor, Hajo *ellenfelhajok, int db);
		void ellenfelTablaBeallit(int oszlop, int sor, int talalte);
};

#endif