/*
 -----------------------------------------------------------------------------------
 Laboratoire  : Laboratoire 05
 Fichier      : GottburgKorradiLabo5.cpp
 
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
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main() {
		float inputUserF;
		int expo = 0;
		int const BINARY_BASE = 2;
		int const ASCII_0 = 48;
		int const LIMIT = 1;
		int const MANTISSE_LENGTH = 23;
		int const EXPONENT_LENGTH = 8;
		bool isNull = false;
		std::cout << "Valeur : ";
		cin >> inputUserF;
		if (cin.fail()) {
			return 1;
		}
		if (inputUserF == 0) {
			isNull = true;
		}
		int signe = (inputUserF < 0);
		if (signe) {
			inputUserF *= -LIMIT;
		}
		string inputUserB;
		int exposant = 0;
		if (inputUserF >= LIMIT) {
			int exp = int(inputUserF);
			expo = -1;
			while (exp) {
				exp /= BINARY_BASE;
				expo++;
			}
			exposant = expo;
		}
		else {
			float tempExp = inputUserF;
			bool hitOne = true;
			while (tempExp) {
				tempExp *= BINARY_BASE;
				if (hitOne) {
					expo--;
				}
				if (tempExp >= LIMIT) {
					tempExp -= 1;
					hitOne = false;
				}
				exposant = expo;
			}
		}
		string exposantB = "";
		exposant += 127;
		while (exposant) {
			exposantB = char(ASCII_0 + int(exposant) % BINARY_BASE) + exposantB;
			exposant /= BINARY_BASE;
		}
		int mantisseInt = inputUserF;
		float mantisseFloat = inputUserF - mantisseInt;
		string mantisseB;
		while (mantisseInt) {
			mantisseB = char(ASCII_0 + mantisseInt % BINARY_BASE) + mantisseB;
			mantisseInt /= BINARY_BASE;
		}
		while (mantisseFloat) {
			mantisseFloat = mantisseFloat - int(mantisseFloat);
			mantisseB += char(ASCII_0 + int(mantisseFloat * BINARY_BASE));
			mantisseFloat *= BINARY_BASE;
		}
		mantisseB[0] = ' ';
		if (isNull) {
			mantisseB = "0";
			exposantB = "0";
		}
		while (mantisseB.length() < MANTISSE_LENGTH) {
			mantisseB = mantisseB + '0';
		}
		while (exposantB.length() < EXPONENT_LENGTH) {
			exposantB = '0' + exposantB;
		}
		
		std::cout << "\nSigne : " << signe;
		std::cout << "\nMantisse :" << mantisseB;
		std::cout << "\nExposant : " << exposantB << endl;
	return 0;
}
