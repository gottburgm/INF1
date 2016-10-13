/*
—---------------------------------------------------------------------------------
Laboratoire : Laboratoire 4
Fichier     : GottburgKorradLabo4.cpp
Auteur(s)   : Frédéric Korradi, Michael Gottburg
Date        : 06.10.2016

But         : Instructions conditionnelles
Vérification des valeurs saisies

Remarque(s) : std::std::cout car sous linux on peut seulement faire les appels
*            de cette manière.

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
	int const MAXPACKAGEWEIGHT = 10; //KG
	int const MAXDIMENSIONS = 50; //cm
	int const NORMALPACKAGETAX = 5; //CHF
	int const NORMALPACKAGEWEIGHT = 5; //CHF
	int const NORMALPACKAGEVOLUME = 27; //dm3
	int const EXCESSWEIGHT5TO8TAX = 1; //CHF
	int const EXCESSWEIGHT8TO10TAX = 2; //CHF
	int const EXCESSWEIGHT8TO10 = 8; //KG
	int const EXCESSWEIGHT5TO8 = 5; //KG
	int const EXCESSVOLUMEMORETHEN27DM3TAX = 3; //CHF
	int const EXCESSVOLUMEMORETHEN33DM3TAX = 6; //CHF
	float const VAT = 0.08;

	//Variables Declaration
	unsigned int heigth = 0;
	unsigned int width = 0;
	unsigned int depth = 0;
	unsigned int weight = 0;
	unsigned int finalNormalTAX = 0;
	unsigned int finalWeightOverTAX = 0;
	unsigned int finalWeightTAX = 0;
	unsigned int finalVolumeOverTAX = 0;
	unsigned int finalVATLessTax = 0;
	float finalVAT, finalTAXToPay, packageVolume;
	bool error = false;
	bool maxweightreached = false;

	std::cout << "---------------------------------" << endl;
	std::cout << "| Programme de calcul des colis |" << endl;
	std::cout << "| By Korradi and Gottburg       |" << endl;
	std::cout << "---------------------------------" << endl;
	std::cout << "Veuillez entrer la hauteur du collis" << endl;
	cin >> heigth;
	if (!(cin.fail())) {
		std::cout << "Veuillez entrer la largeur du collis" << endl;
		cin >> width;
		if (!(cin.fail())) {
			std::cout << "Veuillez entrer la profondeur du collis" << endl;
			cin >> depth;
			if (!(cin.fail())) {
				std::cout << "Veuillez entrer le poids du collis" << endl;
				cin >> weight;
				if (!(cin.fail())) {
					if (weight > EXCESSWEIGHT5TO8) {
						if (weight > EXCESSWEIGHT8TO10) {
							if (weight > MAXPACKAGEWEIGHT) {
								std::cout << "Le poids de votre collis depasse la limite de " << MAXPACKAGEWEIGHT << " Kg." << endl;
								maxweightreached = true;
							}
							else {
								finalWeightOverTAX += (weight - 8) * EXCESSWEIGHT8TO10TAX + EXCESSWEIGHT5TO8TAX * 3;
							}
						}
						else {
							finalWeightOverTAX += (weight - 5) * EXCESSWEIGHT5TO8TAX;
						}
					}
					if (!maxweightreached) {
						packageVolume = width * heigth * depth;
						if ((width >= 50) || (depth >= 50) || (heigth >= 50) || (packageVolume <= 0)) {
							std::cout << "Les valeurs saisies sont incorrectes." << endl;
						}
						else {
							if (packageVolume >= 27) {
								if (packageVolume >= 33) {
									finalVolumeOverTAX = EXCESSVOLUMEMORETHEN33DM3TAX;

								}
								else {
									finalVolumeOverTAX = EXCESSVOLUMEMORETHEN27DM3TAX;
								}
							}
							finalVATLessTax = finalVolumeOverTAX + finalWeightOverTAX + NORMALPACKAGETAX;
							finalVAT = finalVATLessTax * VAT;
							finalTAXToPay = finalVAT + finalVATLessTax;
							int w = 30;
							std::cout << left << std::setw(w) << "Taxe Normale : " << NORMALPACKAGETAX << " CHF" << endl;
							if (finalWeightOverTAX) {
								std::cout << left << std::setw(w) << "Surtaxe de poids : " << finalWeightOverTAX << " CHF" << endl;
							}
							if (finalVolumeOverTAX) {
								std::cout << left << std::setw(w) << "Surtaxe de volume :  " << finalVolumeOverTAX << " CHF" << endl;
							}
							std::cout << left << std::setw(w) << "Taxe sans TVA : " << finalVATLessTax << " CHF" << endl;
							std::cout << left << std::setw(w) << "TVA : " << finalVAT << " CHF" << endl;
							std::cout << left << std::setw(w) << "Taxe a payer par le client : " << finalTAXToPay << " CHF" << endl;
						}
					}
				}
				else {            /* Erreur Format */
					error = true;   /* Lors de ls saisie de la poids */
				}
			}
			else {                /* Erreur Format */
				error = true;       /* Lors de ls saisie de la profondeur */
			}
		}
		else {                    /* Erreur Format */
			error = true;           /* Lors de ls saisie de la largeur */
		}
	}
	else {                        /* Erreur Format  */
		error = true;               /* Lors de ls saisie de la hauteur */
	}

	if (error)
	{
		std::cout << "Le format de votre saisie est incorrect ." << endl;
		return 1;
	}
	else {
		return 0;
	}
}
