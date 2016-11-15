/*
 ---------------------------------------------------------------------------------
 Laboratoire  : Laboratoire 06
 Fichier      : KorradiGottburgLabo6.cpp
 
 Auteurs      : - Michael Gottburg (INF1)
				- Frederic Korradi (INF1)

 Dates        : - 15.11.2016 (debut du projet)
				- 15.11.2016 (rendu du projet)

 Buts         : - Appliquer les elements vus dans les chapitres 3a et 3b

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
	int compteur = 0;
	while (input !=0) {
		cin >> input;
		if(cin.fail()) {  // Pour gérer les erreurs de saisie, on kill le programme.
			input = 0;
		}
		if (input == lastInput) {
			compteur++;
		}
		else {
			if (input < lastInput && input) {
				croissante = false;
			}
			if (compteur) {
				cout << ++compteur;
				cout << "x";
				compteur = 0;
			}if (!compteur && lastInput) {
				cout << lastInput;
				if (input) {
					cout << ",";
				}
			}
		}
		lastInput = input;
	}
	cout << endl << "Suite";
	if(!croissante){
		cout << " non";
	}
	cout << " croissante" << endl;
	return 0;
}
