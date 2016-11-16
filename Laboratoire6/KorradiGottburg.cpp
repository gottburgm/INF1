/*
 -------------------------------------------------------------------------------
 Laboratoire  : Laboratoire 06
 Fichier      : KorradiGottburgLabo6.cpp

 Auteurs      : - Michael Gottburg (INF1)
                - Frederic Korradi (INF1)

 Dates        : - 15.11.2016 (debut du projet)
                - 16.11.2016 (rendu du projet)

 Buts         : - Comprendre et utiliser la fonction "cin" 

 Remarque(s)  : - Aucune remarque particuliere

 Compilateurs : - MinGW-g++ 4.8.1 (Windows)
                - gcc version 4.9.2 (Linux)
 -------------------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

int main() {
    int input = 1;
    int lastInput = 0;
    int repetitionCount = 0;
    bool isIncreasing = true;

    cout << "Valeurs : ";
    while (input) {
        cin >> input;
        if (!cin.fail()) {
            if (lastInput) { // Aucun traitement au premier nombre saisit
                if (input == lastInput) {
                    repetitionCount++;
                } else if (input) { // On ne traite pas le 0 de fin de saisie
                    if (input < lastInput) {
                        isIncreasing = false; // La suite n'est pas croissante
                    }
                    // Affichage du nombre de repetition si celui n'est pas nul
                    if (repetitionCount) {
                        cout << ++repetitionCount << 'x';
                        repetitionCount = 0;    // Reinitialisation du compteur
                    }
                    cout << lastInput << ',';
                } else {
                    cout << lastInput; // Derniere valeur avant le 0
                }                      // Affichage sans virgule
            }
            lastInput = input;
        } else {
            cout << "Erreur lors de la saisie ." << endl;
            return 1;
        }
    }
    
    /* Affichage du type de suite (croissante ou non) en fonction de isIncreasing */
    cout << endl << "Suite " << (isIncreasing ? "croissante" : "non croissante") << endl;

    return 0;
}
