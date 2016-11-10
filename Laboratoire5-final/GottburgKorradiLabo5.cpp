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

/* Librairies */
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main()
{
    /* Declaration des variables de la fonction main */
    int const BINARY_BASE = 2; // Base Mathematique du binaire
    int const ASCII_0 = 48; // Representation du zero dans la table ASCII
    int const LIMIT = 1;
    int const MANTISSE_LENGTH = 23;
    int const EXPONENT_LENGTH = 8;
    float inputUserF;
    int expo_iterator = 0;
    int signe = 0;
    string mantisseB = "";
    string exposantB = "";

    /* Saisie d'un nombre : (string) STDIN => (float) inputUserF */
    std::cout << "Valeur : ";
    cin >> inputUserF;
    std::cout << endl;

    if (!cin.fail())
    {
        if (inputUserF != 0) // Si inputUserF ne vaut pas 0
        {
            /*
             * retour de vrai (1): si inputUserF est negatif (< 0)
             * retour de faux (0): si inputUseF est positif (> 0)
             */
            if (inputUserF < 0)
            {
                inputUserF *= -LIMIT; // multiplication par -1
                signe = 1;
            }
            int exposant = 0;
            if (inputUserF >= LIMIT)
            {
                int tempExp = int(inputUserF);
                expo_iterator = -1;
                while (tempExp)
                {
                    tempExp /= BINARY_BASE;
                    expo_iterator++;
                }
                exposant = expo_iterator;
            }
            else
            {
                float tempExp = inputUserF;
                do
                {
                    tempExp *= BINARY_BASE;
                    expo_iterator--;
                    exposant = expo_iterator;
                }
                while (tempExp >= LIMIT);
            }
            exposant += 127;
            while (exposant)
            {
                exposantB = char(ASCII_0 + int(exposant) % BINARY_BASE) + exposantB;
                exposant /= BINARY_BASE;
            }
            int mantisseInt = inputUserF;
            float mantisseFloat = inputUserF - mantisseInt;

            while (mantisseInt)
            {
                mantisseB = char(ASCII_0 + mantisseInt % BINARY_BASE) + mantisseB;
                mantisseInt /= BINARY_BASE;
            }
            while (mantisseFloat)
            {
                mantisseFloat = mantisseFloat - int(mantisseFloat);
                mantisseB += char(ASCII_0 + int(mantisseFloat * BINARY_BASE));
                mantisseFloat *= BINARY_BASE;
            }
            mantisseB[0] = ' ';
        }
        else
        {
            mantisseB = "0";
            exposantB = "0";
        }
        while (mantisseB.length() < MANTISSE_LENGTH)
        {
            mantisseB += '0';
        }
        while (exposantB.length() < EXPONENT_LENGTH)
        {
            exposantB += '0';
        }

        /* Affichage des resultats */
        std::cout << "\nSigne : " << signe;
        std::cout << "\nMantisse :" << mantisseB;
        std::cout << "\nExposant : " << exposantB << endl;
    }
    else
    {
        /* 
         * Avertissement a l'utilisateur de la presence d'une erreur
         * Retour de la valeur 1 de main au programme
         */
        std::cout << "Erreur lors de la saisie de la valeur." << endl;
        return 1;
    }

    return 0;
}
