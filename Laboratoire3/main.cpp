/*
�---------------------------------------------------------------------------------
Laboratoire : Laboratoire 3
Fichier     : KorradLabo3.cpp
Auteur(s)   : Frédéric Korradi
Date        : 06.10.2016

But         : Chapitres 1 et 2

Remarque(s) : Le programme ne fait aucun test. Si la saisie n'est pas correcte,
si autre chose que des enteiers positifs sont ins�r�s et pas exag�rement grand
(�viter les nombres sup�rieurs � quelques centaines de millions,il pourra avoir
des comportements impr�vus.

Compilateur : MinGW-g++ 4.8.1
�---------------------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	//Exercice 2.11
	unsigned int r1, r2, h1, h2, h3;
	double pi = 3.1415926535;
	cout << "veuillez entrer r1" << endl;
	cin >> r1;
	cout << "veuillez entrer r2" << endl;
	cin >> r2;
	cout << "veuillez entrer h1" << endl;
	cin >> h1;
	cout << "veuillez entrer h2" << endl;
	cin >> h2;
	cout << "veuillez entrer h3" << endl;
	cin >> h3;
	double volCylindre1 = pi*pow(r1, 2)*h1;
	double volCylindre2 = pi*pow(r2, 2)*h2;
	double volCone = ((h3*pi / 3)*(pow(r1, 2) + pow(r2, 2) + r1*r2));
	double volTot = volCylindre1 + volCylindre2 + volCone;
	cout << "volume totale : " << volTot << " cm3" << endl;

	//Exercice 2.13
	int saisieUtilisateur, nbChiffres, nbFirstChiffre, nbLastChiffre;
	cout << "Entrez un nombre entier >= 0:";
	cin >> saisieUtilisateur;
	cout << endl << endl << floor(log10(abs(saisieUtilisateur))) + 1;
}