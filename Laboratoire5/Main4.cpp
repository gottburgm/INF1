/*
?---------------------------------------------------------------------------------
Laboratoire : Laboratoire 5
Fichier     : GottburgKorradLabo5.cpp
Auteur(s)   : Michael Gottburg, Frederic Korradi
Date        : 08.11.2016

But         : Instructions conditionnelles


Remarque(s) : std::cout car sous linux on peut seulement faire les appels
de cette manière.

Compilateur : MinGW-g++ 4.8.1
?---------------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main() {
	while (true) {
		float inputUserF;
		int expo = 0;
		cout << "Valeur : ";
		cin >> inputUserF;
		int signe = (inputUserF < 0);
		if (signe) {
			inputUserF *= -1;
		}
		string inputUserB;
		int exposant;
		if (inputUserF >= 1) {
			int exp = int(inputUserF);
			expo = -1;
			while (exp) {
				exp /= 2;
				expo++;
			}
			//cout << expo << endl;
			exposant = expo;
		}
		else {
			float exp = inputUserF;
			bool hitOne = true;
			while (exp) {
				exp *= 2;
				if (hitOne) {
					expo--;
				}
				if (exp >= 1) {
					exp -= 1;
					hitOne = false;
				}
				//cout << exp << endl;
				exposant = expo;
			}
		}
		string exposantB = "";
		exposant += 127;
		while (exposant) {
			exposantB = char(48 + int(exposant) % 2) + exposantB;
			//cout << exposantB << " | " << exposant << endl;
			exposant /= 2;
		}
		//cout << exposantB << endl;




		int mantisseINT = inputUserF;
		float mantisseFLOAT = inputUserF - mantisseINT;
		string mantisseB;
		while (mantisseINT) {
			mantisseB = char(48 + mantisseINT % 2) + mantisseB;
			mantisseINT /= 2;
		}
		while (mantisseFLOAT) {
			mantisseFLOAT = mantisseFLOAT - int(mantisseFLOAT);
			mantisseB += char(48 + int(mantisseFLOAT * 2));
			mantisseFLOAT *= 2;
		}
		mantisseB[0] = ' ';
		int i = 0;
		int length = 0;
		//cout << mantisseB << endl;

		cout << "\nSigne : " << signe;
		cout << "\nMantisse :" << mantisseB;
		cout << "\nExposant : " << exposantB << endl;
	}
	return 0;
}
