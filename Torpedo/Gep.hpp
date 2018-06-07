#ifndef GEP_HPP
#define GEP_HPP

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Tabla.hpp"
#include "Hajo.hpp"
using namespace std;

class Gep{
	private:
		Tabla *sajattabla;
		Hajo hajok[10];
		Tabla *ellenfeltabla;
		Hajo ellenfelhajok[10];

	public:
		Gep();
		~Gep();
		bool hajoGeneralas();
		void Kiir();
		void TablaKiir();
};

#endif