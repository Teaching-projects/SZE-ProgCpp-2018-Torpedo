#include <iostream>
#include "JatekManager.hpp"
#include <string>
#include "Gep.hpp"

using namespace std;


int main(){	
	int mod;	
	JatekManager jatekmanager;	
	char bekeres[5];
	
	do{
		cout << "Valasszon a kovetkezo lehetosegek kozul a sorszamuk beirasaval:\n1: Jatekos Vs Gep\n2: Jatekos Vs Jatekos\n3: Szabalyok\n4: Kilepes\n\n";
		cin >> bekeres;
		if (strlen(bekeres) != 1){
			cout << "Nem megfelelo formatum. Probalja ujra!\n\n";
		}
		else{
			mod = bekeres[0] - '0';
			if (mod == 1){
				jatekmanager.JatekosVsGep();
			}
			else if (mod == 2){
				system("cls");
				jatekmanager.JatekosVsJatekos();
			}
			else if (mod == 3){

			}
			else if (mod == 4){
				cout << "Kilepest valasztotta.\n";
			}
			else{
				cout << "Nincs ilyen lehetoseg. Valasszon a lehetosegek kozul.\n\n";
			}
		}

	} while (mod != 4);
	return 0;
}
