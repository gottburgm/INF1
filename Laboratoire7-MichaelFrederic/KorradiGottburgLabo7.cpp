#include <iostream>
#include <string>
#include "KorradiGottburgLabo7.h"
using namespace std;
int main() {
	unsigned int choice;
	do {
		choice = saisie("Choix : ");
		cout << choice << endl;
		if (cin.fail()) {
			cout << "connard" << endl;
		}
		if(choice >0 && choice <6){
			switch (choice) {
			case 1: exercice1(); break;
			case 2: exercice2(); break;
			case 4: exercice4(); break;
			case 5: exercice5(); break;
			}
		}
	} while (choice);
	return 0;
}

void exercice1() {
	int nombre;
	bool is_perfect_square = false;
	nombre = saisie("Veuillez rentrer le potentiel carré parfait : ");
	int carre_parfait = 1;
	int impaire = 1;
	while (nombre >= carre_parfait) {
		impaire += 2;
		carre_parfait += impaire;
		if (nombre == carre_parfait) {
			is_perfect_square = true;
		}
		cout << endl << carre_parfait << endl;
	}
	cout << endl << nombre << (is_perfect_square == true ? " est" : " n'est pas") << " un carré parfait." << endl;
}

void exercice2()
{
}

void exercice4()
{
}

void exercice5()
{
}

void afficher()
{
}

void displayDiamond(int nombre)
{
}

void displayFibonacci(int nombre)
{
}

int saisie(string text, int const MAX, int const MIN)
{
	int nombre;
	while (nombre > MAX || nombre < MIN) {
		cout << text;
		cin >> nombre;
		cout << endl;
	}
	return nombre;
}
unsigned int saisie(string text, unsigned int const MAX, unsigned int const MIN) {
	int nombre;
	while (nombre < MIN || nombre > MAX) {
		cout << text;
		cin >> nombre;
		cout << endl;
	}
	return nombre;
}
