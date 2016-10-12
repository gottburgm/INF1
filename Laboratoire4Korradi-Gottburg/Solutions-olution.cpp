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

	return 0;


}
