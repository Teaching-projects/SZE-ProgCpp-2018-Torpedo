#include "JatekManager.hpp"

#define HAJOSZAM 3

JatekManager::JatekManager(){}

void JatekManager::JatekosVsJatekos(){
	string nev;
	int db = 0;
	bool ok = false;	
	int lovesmod;
	cout << "Adja meg az elso jatekos nevet: ";
	cin >> nev;
	Jatekos jatekos1(nev);
	do{
		if (jatekos1.hajoBeker(db)){
			db++;
		}
	} while (db<HAJOSZAM);
	system("cls");
	cout << "Adja meg a masodik jatekos nevet: ";
	cin >> nev;
	db = 0;
	Jatekos jatekos2(nev);
	do{
		if (jatekos2.hajoBeker(db)){
			db++;
		}
	} while (db<HAJOSZAM); 
	jatekos1.hajokatMasol(jatekos2, db);
	jatekos2.hajokatMasol(jatekos1, db);
	system("cls");
	do{
		cout << jatekos1.nevKiir() << " kovetkezik. ";
		do{
			lovesmod = jatekos1.loves(db, jatekos2);
			if (lovesmod != 2){
				cout << "Sajat tabla:\n";
				jatekos1.sajatTablatRajzol();
				cout << "Ellenfel  tabla:\n";
				jatekos1.ellenfelTablatRajzol();
			}
		} while (lovesmod != 1 && (jatekos1.getTalalat() < HAJOSZAM));
		cout << jatekos1.nevKiir() << " nyomjon gombot a folytatashoz!\n\n";
		_getch();
		system("cls");
		if ((jatekos1.getTalalat() < HAJOSZAM)){
			cout << jatekos2.nevKiir() << " kovetkezik. ";
			do{
				lovesmod = jatekos2.loves(db, jatekos1);
				if (lovesmod != 2){
					cout << "Sajat tabla:\n";
					jatekos2.sajatTablatRajzol();
					cout << "Ellenfel  tabla:\n";
					jatekos2.ellenfelTablatRajzol();
				}
			} while (lovesmod != 1 && (jatekos2.getTalalat() < HAJOSZAM));
			cout << jatekos2.nevKiir() << " nyomjon gombot a folytatashoz!\n\n";
			_getch();
		}
	} while (jatekos1.getTalalat() < HAJOSZAM && jatekos2.getTalalat() < HAJOSZAM);
	if (jatekos1.getTalalat() == HAJOSZAM){
		system("cls");
		cout << jatekos1.nevKiir() << " nyert! Gratulalunk!\n\n";
	}
	else{
		system("cls");
		cout << jatekos2.nevKiir() << " nyert! Gratulalunk!\n\n";
	}
}
void JatekManager::JatekosVsGep(){
	string nev;
	int db = 0, lovesmod;
	Gep gep;

	if (gep.hajoGeneralas()){}
	system("cls");
	cout << "Adja meg a jatekos nevet: ";
	cin >> nev;
	Jatekos jatekos1(nev);
	do{
		if (jatekos1.hajoBeker(db)){
			db++;
		}
	} while (db<HAJOSZAM);
	jatekos1.hajokatMasolGep(gep, db);
	gep.hajokatMasol(jatekos1, db);
	system("cls");
	do{
		do{
			lovesmod = jatekos1.lovesGep(db, gep);			
		} while (lovesmod != 1 && (jatekos1.getTalalat() < HAJOSZAM));
		if ((jatekos1.getTalalat() < HAJOSZAM)){
			system("cls");
			do{				
				lovesmod = gep.loves(db, jatekos1);
				if (lovesmod != 2){					
					cout << "Sajat tabla:\n";
					jatekos1.sajatTablatRajzol();
					cout << "Ellenfel  tabla:\n";
					jatekos1.ellenfelTablatRajzol();
				}
			} while (lovesmod != 1  && (gep.getTalalat() < HAJOSZAM));
		}
	} while (jatekos1.getTalalat() < HAJOSZAM && gep.getTalalat() < HAJOSZAM);
	if (jatekos1.getTalalat() == HAJOSZAM){
		system("cls");
		cout << jatekos1.nevKiir() << " nyert! Gratulalunk!\n\n";
	}
	else{
		system("cls");
		cout << "On vesztett!\n\n";
	}
}

JatekManager::~JatekManager(){}