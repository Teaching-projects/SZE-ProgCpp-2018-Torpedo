#include <iostream>
#include "JatekManager.hpp"
#include <string>

#define HAJOSZAM 10

using namespace std;

int main(){/*
	string nev;
	int db = 0;
	bool ok = false;
	//bool sikeres;
	int lovesmod;
	cout << "Adja meg az elso jatekos nevet: ";
	cin >> nev;
	Jatekos jatekos1(nev);
	do{
		if (jatekos1.hajoBeker(db)){
			db++;			
		}
	} while (db<2); //HAJOSZAM-ra visszaírni
	system("cls");	
	cout << "Adja meg a masodik jatekos nevet: ";
	cin >> nev;	
	db = 0;	
	Jatekos jatekos2(nev);
	do{
		if (jatekos2.hajoBeker(db)){
			db++;			
		}		
	} while (db<2); //HAJOSZAM-ra visszaírni
	jatekos1.hajokatMasol(jatekos2, db);
	jatekos2.hajokatMasol(jatekos1, db);	
	system("cls");
	do{
		cout << jatekos1.nevKiir() << " kovetkezik. ";
		do{
			lovesmod=jatekos1.loves(db, jatekos2);
			if (lovesmod!=2){
				cout << "Sajat tabla:\n";
				jatekos1.sajatTablatRajzol();
				cout << "Ellenfel  tabla:\n";
				jatekos1.ellenfelTablatRajzol();
			}
		} while (lovesmod!=1 && (jatekos1.getTalalat() < 2));
		cout << jatekos1.nevKiir() << " nyomjon gombot a folytatashoz!\n\n";
		getch();
		system("cls");
		if ((jatekos1.getTalalat() < 2)){
			cout << jatekos2.nevKiir() << " kovetkezik. ";
			do{
				lovesmod = jatekos2.loves(db, jatekos1);
				if (lovesmod!=2){
					cout << "Sajat tabla:\n";
					jatekos2.sajatTablatRajzol();
					cout << "Ellenfel  tabla:\n";
					jatekos2.ellenfelTablatRajzol();
				}
			} while (lovesmod!=1 && (jatekos2.getTalalat() < 2));
			cout << jatekos2.nevKiir() << " nyomjon gombot a folytatashoz!\n\n";
			getch();
		}		
	} while (jatekos1.getTalalat() < 2 && jatekos2.getTalalat() < 2);
	if (jatekos1.getTalalat() == 2){
		cout << jatekos1.nevKiir() << " nyert! Gratulalunk!\n\n";
	}
	else cout << jatekos2.nevKiir() << " nyert! Gratulalunk!\n\n";*/

	int mod;
	char bekeres[5];
	JatekManager jatekmanager;
	do{
		cout << "Valasszon a kovetkezo lehetosegek kozul a sorszamuk beirasaval:\n1: Jatekos Vs Gep\n2: Jatekos Vs Jatekos\n3: Szabalyok\n4: Kilepes\n\n";
		cin >> bekeres;
		if (strlen(bekeres) != 1){
			cout << "Nem megfelelo formatum. Probalja ujra!\n\n";
		}
		else{
			mod = bekeres[0] - '0';
			if (mod == 1){

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
