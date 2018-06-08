#ifndef JATEKMANAGER_HPP
#define JATEKMANAGER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Jatekos.hpp"
#include <conio.h>
#include "Gep.hpp"
#include <fstream>

#define HAJOSZAM 10

using namespace std;


class JatekManager{
	public:
		JatekManager();
		~JatekManager();
		void JatekosVsJatekos();
		void JatekosVsGep();
		void Fajlbeolvasas();
};

#endif