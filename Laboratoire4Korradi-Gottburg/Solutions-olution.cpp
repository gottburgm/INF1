/*
—---------------------------------------------------------------------------------
Laboratoire : Laboratoire 4
Fichier     : GottburgKorradLabo4.cpp
Auteur(s)   : Frédéric Korradi, Michael Gottburg
Date        : 06.10.2016

But         : Instructions conditionnelles
			  Vérification des valeurs saisies

Remarque(s) : 

Compilateur : MinGW-g++ 4.8.1
—---------------------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int const MAXPACKAGEWEIGHT = 10;			//KG
	int const MAXDIMENSIONS = 50;				//cm
	int const NORMALPACKAGETAX = 5;				//CHF
	int const NORMALPACKAGEWEIGHT = 5;			//CHF
	int const NORMALPACKAGEVOLUME = 27;			//dm3
	int const EXCESSWEIGHT5TO8TAX = 1;			//CHF
	int const EXCESSWEIGHT8TO10TAX = 2;			//CHF
	int const EXCESSVOLUMEMORETHEN27DM3TAX = 3;	//CHF
	int const EXCESSVOLUMEMORETHEN33DM3TAX = 6;	//CHF
	int const VAT = 0.8;
	string const SoucisMinusOucis = "Gottburg";

	unsigned int finalNormalTAX, fianlWeightOverTAX, finalVolumeOverTAX, finalVATLessTax;
	double finalVAT, finalTAXToPay;
	cout << "Salutations et bienvenue dans ce logiciel fais par des" << endl;
	cout << "Connards qui n'ont pas " << endl;
	cout << "Hesite à vous faire croire à une " << endl;
	cout << "Utopie." << endl;
	cout << "Toujours est-il que nousa vons regarde" << endl;
	cout << "Zootopia et pensent que" << endl;
	cout << "Salomon viendrait enfait du " << endl;
	cout << "Togo et ne serait pas " << endl;
	cout << "Autoritaire, tout du moins, pas plus que " << endl;
	cout << "Franz qui ne pensait pas " << endl;
	cout << "Faire de mal aux pauvres petits " << endl;
	cout << "Enfants qui auraient peut etre des parents" << endl;
	cout << "Lepreux. Bis." << endl;
	return 0;


}
