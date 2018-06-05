#include "Tabla.hpp"

Tabla::Tabla(int meret) : meret(meret){
	tabla = new char*[meret];
	for (int i = 0; i < meret; i++){
		tabla[i] = new char[meret];
	}
	for (int i = 0; i < meret; i++){
		for (int j = 0; j < meret; j++){
			tabla[i][j] = ' ';
		}
	}
}

void Tabla::kiRajzol(){
	int szam = 0;
	cout << " | A | B | C | D | E | F | G | H | I | J |\n";
	for (int i = 0; i < meret; i++){
		cout << "------------------------------------------\n";
		cout << szam << "| ";
		szam++;
		for (int j = 0; j < meret; j++){
			cout << tabla[i][j] << " | ";
		}
		cout << "\n";

	}
	cout << "------------------------------------------\n\n";
}

Tabla::~Tabla(){
	for (int i = 0; i < meret; i++) {
		delete[] tabla[i];
	}
	delete[] tabla;
}