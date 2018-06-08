#ifndef JATEKMANAGER_HPP
#define JATEKMANAGER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Jatekos.hpp"
#include <conio.h>
#include "Gep.hpp"

#define HAJOSZAM 10

using namespace std;


class JatekManager{
	public:
		JatekManager();
		~JatekManager();
		void JatekosVsJatekos();
		void JatekosVsGep();
};

#endif