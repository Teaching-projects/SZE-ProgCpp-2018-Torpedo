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

bool Tabla::setTabla(int oszlop, int sor){
	/*for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if ()
		}
	}*/
	if (tabla[sor][oszlop] == 'H'){ //azonos hely
		cout << "A megadott pozicion mar talalhato hajo. Probalja ujra!\n\n";
		return false;
	}
	else if (sor == 0 && oszlop == 0 && (tabla[sor+1][oszlop] == 'H' || tabla[sor][oszlop + 1] == 'H')){//bal felsõ sarok
		cout << "Nem helyzet hajot kozvetlenul masik melle. Probalja ujra!\n\n";
		return false;
	}
	else if (sor == 0 && oszlop == 9 && (tabla[sor + 1][oszlop] == 'H' || tabla[sor][oszlop - 1] == 'H')){//jobb felsõ sarok
		cout << "Nem helyzet hajot kozvetlenul masik melle. Probalja ujra!\n\n";
		return false;
	}
	else if (sor == 9 && oszlop == 0 && (tabla[sor - 1][oszlop] == 'H' || tabla[sor][oszlop + 1] == 'H')){//bal alsó sarok
		cout << "Nem helyzet hajot kozvetlenul masik melle. Probalja ujra!\n\n";
		return false;
	}
	else if (sor == 0 && oszlop == 0 && (tabla[sor + 1][oszlop] == 'H' || tabla[sor][oszlop + 1] == 'H')){//bal felsõ sarok
		cout << "Nem helyzet hajot kozvetlenul masik melle. Probalja ujra!\n\n";
		return false;
	}
	else if (tabla[sor - 1][oszlop] == 'H' || tabla[sor + 1][oszlop] == 'H' || tabla[sor][oszlop - 1] == 'H' || tabla[sor][oszlop + 1] == 'H'){//többi rész
		cout << "Nem helyzet hajot kozvetlenul masik melle. Probalja ujra!\n\n";
		return false;
	}
	else{
		tabla[sor][oszlop] = 'H';
		return true;
	}

}

Tabla::~Tabla(){
	for (int i = 0; i < meret; i++) {
		delete[] tabla[i];
	}
	delete[] tabla;
}