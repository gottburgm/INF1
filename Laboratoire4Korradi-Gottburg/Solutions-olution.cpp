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
	//Constant Variables Declaration
	int const MAXPACKAGEWEIGHT = 10;			//KG
	int const MAXDIMENSIONS = 50;				//cm
	int const NORMALPACKAGETAX = 5;				//CHF
	int const NORMALPACKAGEWEIGHT = 5;			//CHF
	int const NORMALPACKAGEVOLUME = 27;			//dm3
	int const EXCESSWEIGHT5TO8TAX = 1;			//CHF
	int const EXCESSWEIGHT8TO10TAX = 2;			//CHF
	int const EXCESSVOLUMEMORETHEN27DM3TAX = 3;	//CHF
	int const EXCESSVOLUMEMORETHEN33DM3TAX = 6;	//CHF
	double const VAT = 0.8;

	//Variables Declaration
	unsigned int weight, heigth, width, depth, finalNormalTAX;
	unsigned int finalWeightOverTAX = 0;
	unsigned int finalWeightTAX;
	unsigned int finalVolumeOverTAX;
	unsigned int  finalVATLessTax;
	double finalVAT, finalTAXToPay, packageVolume;

	cout << "---------------------------------" << endl;
	cout << "| Programme de calcul des colis |" << endl;
	cout << "| By Korradi and Gottburg       |" << endl;
	cout << "---------------------------------" << endl;
	cout << "Veuillez entrer la hauteur du collis" << endl;
	cin >> heigth;
	cout << "Veuillez entrer la largeur du collis" << endl;
	cin >> width;
	cout << "Veuillez entrer la profondeur du collis" << endl;
	cin >> depth;
	cout << "Veuillez entrer la lourdeur du collis" << endl;
	cin >> weight;
	if (weight > EXCESSWEIGHT5TO8TAX)
	{
		if (weight > EXCESSWEIGHT8TO10TAX)
		{
			int tempWeight;
			if (weight > MAXPACKAGEWEIGHT)
			{
				cout << "go suck yourself" << endl;
			}
			else
			{
				finalWeightOverTAX += (weight - 8) * 2 + 3;
			}
		}
		else
		{
			finalWeightOverTAX += (weight - 5);
		}
	}
	packageVolume = width*heigth*depth;
	if ((width > 50) || (depth > 50) || (heigth < 50)){
		cout << "Go suck yourself" << endl;
	}
	else
	{
		if (packageVolume > 27)
		{
			if (packageVolume > 33) {
				finalVolumeOverTAX = EXCESSVOLUMEMORETHEN33DM3TAX;

			}
			else
			{
				finalVolumeOverTAX = EXCESSVOLUMEMORETHEN27DM3TAX;
			}
		}
	}
	finalVATLessTax = finalVolumeOverTAX + finalWeightOverTAX + NORMALPACKAGETAX;
	finalVAT = finalVATLessTax * VAT;
	finalTAXToPay = finalVAT + finalVATLessTax;

	cout << NORMALPACKAGETAX << " | " << finalWeightOverTAX << " | " << finalVolumeOverTAX << " | " << finalVATLessTax << " | " << finalVAT << " | " << finalTAXToPay << endl;


	return 0;


}
