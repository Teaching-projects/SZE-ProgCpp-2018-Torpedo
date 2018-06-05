#ifndef HAJO_HPP
#define HAJO_HPP

#include <iostream>
using namespace std;

class Hajo{
private:
	int sor;
	int oszlop;

public:
	// Hajo(int sor, int oszlop);
	Hajo();
	~Hajo();
	int getSor();
	int getOszlop();
	void setSor(int besor);
	void setOszlop(int beoszlop);
};

#endif