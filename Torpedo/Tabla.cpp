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
	if (tabla[sor][oszlop] == 'H'){ //azonos hely
		cout << "A megadott pozicion mar talalhato hajo. Probalja ujra!\n\n";
		return false;
	}
	else if (sor == 0 && oszlop == 0 && (tabla[sor + 1][oszlop] != 'H' && tabla[sor][oszlop + 1] != 'H')){//bal felsõ sarok
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (sor == 0 && oszlop == 9 && (tabla[sor + 1][oszlop] != 'H' && tabla[sor][oszlop - 1] != 'H')){//jobb felsõ sarok
		tabla[sor][oszlop] = 'H';
		return true;;
	}
	else if (sor == 9 && oszlop == 0 && (tabla[sor - 1][oszlop] != 'H' && tabla[sor][oszlop + 1] != 'H')){//bal alsó sarok
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (sor == 9 && oszlop == 9 && (tabla[sor - 1][oszlop] != 'H' && tabla[sor][oszlop - 1] != 'H')){//bal felsõ sarok
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (sor == 0 && (tabla[sor + 1][oszlop] != 'H' && tabla[sor][oszlop - 1] != 'H' && tabla[sor][oszlop + 1] != 'H')){//elsõ sor
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (sor == 9 && (tabla[sor - 1][oszlop] != 'H' && tabla[sor][oszlop - 1] != 'H' && tabla[sor][oszlop + 1] != 'H')){//utolsó sor
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (oszlop == 0 && (tabla[sor - 1][oszlop] != 'H' && tabla[sor+1][oszlop] != 'H' && tabla[sor][oszlop + 1] != 'H')){//elsõ oszlop
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (oszlop == 9 && (tabla[sor - 1][oszlop] != 'H' && tabla[sor + 1][oszlop] != 'H' && tabla[sor][oszlop - 1] != 'H')){//utolsó oszlop
		tabla[sor][oszlop] = 'H';
		return true;
	}
	else if (tabla[sor - 1][oszlop] != 'H' && tabla[sor + 1][oszlop] != 'H' && tabla[sor][oszlop - 1] != 'H' && tabla[sor][oszlop + 1] != 'H'){//többi rész
		tabla[sor][oszlop] = 'H';
		return true;
	}	
	else{
		cout << "Nem helyzet hajot kozvetlenul masik melle. Probalja ujra!\n\n";
		return false;
	}
}

bool Tabla::becsapodas(int oszlop, int sor, Hajo *ellenfelhajok, int db){
	if (tabla[sor][oszlop] == 'X' || tabla[sor][oszlop] == 'O'){
		cout << "Ide mar erkezett talalat.\n";
		return false;
	}
	for (int i = 0; i<db; i++){
		if (sor == ellenfelhajok[i].getSor() && oszlop == ellenfelhajok[i].getOszlop()){
			cout << "Talalat! Ujra On kovetkezik!\n";
			tabla[sor][oszlop] = 'X';
			return true;
		}
		else{			
			if (i == db-1){
				tabla[sor][oszlop] = 'O';
				cout << "Nem talalt!\n";
				return false;
			}
		}
	}
}

void Tabla::ellenfelTablaBeallit(int oszlop, int sor, bool talalte){
	if (talalte){
		tabla[sor][oszlop] = 'X';
	}
	else{
		tabla[sor][oszlop] = 'O';
	}
}

Tabla::~Tabla(){
	for (int i = 0; i < meret; i++) {
		delete[] tabla[i];
	}
	delete[] tabla;
}