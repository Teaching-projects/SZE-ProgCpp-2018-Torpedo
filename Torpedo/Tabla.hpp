#ifndef TABLA_HPP
#define TABLA_HPP

#include <iostream>
using namespace std;

class Tabla{
private:
	char **tabla;
	const int meret;

public:
	Tabla(int meret);
	~Tabla();
	void kiRajzol();
	//bool setTabla(int oszlop, int sor, char irany, int meret);
	//int becsapodas(int oszlop, int sor);
};

#endif