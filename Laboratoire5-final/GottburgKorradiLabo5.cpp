/*
-----------------------------------------------------------------------------------
Laboratoire  : Laboratoire 06
Fichier      : KorradiGottburgLabo6.cpp

Auteurs      : - Michael Gottburg (1INF1)
			   - Frederic Korradi (1INF1)

Dates        : - 29.10.2016 (debut du projet)
			   - 10.11.2016 (rendu du projet)

Buts         : - Appliquer les elements vus dans les chapitres 3a et 3b
			   - Utiliser les chaines de caracteres en tant que tableau
			   - Calcul binaire, conversion, utilision des casts, etc.

Remarque(s)  : std::cout car sous linux on peut seulement faire les appels
			   de cette manière.

Compilateurs : - MinGW-g++ 4.8.1 (Windows)
			   - gcc version 4.9.2 (Linux)
---------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	int input = 1;
	bool croissante = true;
	string output="";
	int lastInput = 0;
	cout << "Valeurs : ";

	while (input) {
		cin >> input;
		int compteur = 0;
		if (input == lastInput) {
			compteur++;
		}
		if (input < lastInput) {
			croissante = false;
		}
		if (compteur) {
			cout << compteur;
			cout << "x";
		}
		else {
			cout << input;
			cout << ",";
		}
		lastInput = input;
	}
	cout << "Suite ";
	if(!croissante){
		cout << "non";
	}
	cout << " croissante" << endl;

	return 0;
}
