/*
<<<<<<< HEAD
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
=======
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

>>>>>>> 5410a08df271e243174cd30bb55426f2b15d8562
#include <iostream>

using namespace std;

int main() {
<<<<<<< HEAD
  int input = 1;
  int lastInput = 0;
  int compteur = 0;
  bool croissante = true;
  string croissante = "croissante";
  
  cout << "Valeurs : ";
  while (input) {
    cin >> input;
    if(cin.fail()) {  // Pour gérer les erreurs de saisie, on kill le programme.
      continue;
    } else if (lastInput) {
      if (input == lastInput) {
	compteur++;
      } else if (input < lastInput && input) {
	croissante = "non croissante";
      }
      if (compteur) {
	cout << ++compteur;
	cout << "x";
	compteur = 0;
      } else {
	cout << lastInput;
	if (input) {
	  cout << ",";
	}
      }
    }
    lastInput = input;
  }
  cout << endl << "Suite " << croissante << endl;
  
  return 0;
=======
    int input = 1;
    int inputCount = 0;
    int lastInput = 0;
    int repetitionCount = 0;
    bool isIncreasing = true;

    cout << "Valeurs : ";
    while (input) {
        cin >> input;
        if (!cin.fail()) {
            if (lastInput) { // Aucun traitement au premier nombre saisit
                if (input != lastInput) {
                    inputCount++;
                    if (repetitionCount) {
                        cout << ++repetitionCount << 'x';
                        repetitionCount = 0; // Reinitialisation du compteur
                    }
                    if (input) {
                        if (input < lastInput) {
                            isIncreasing = false; // La suite n'est pas croissante
                        }
                        cout << lastInput << ',';
                    } else {
                        cout << lastInput; // Derniere valeur avant le 0
                    } // Affichage sans virgule
                } else {
                    repetitionCount++;
                }
            }
            lastInput = input;
        } else {
            cout << "Erreur lors de la saisie ." << endl;
            return 1;
        }
    }

    if (inputCount > 1) {
        /* Affichage du type de suite (croissante ou non) en fonction de isIncreasing */
        cout << endl << "Suite " << (isIncreasing ? "croissante" : "non croissante") << endl;
    } else {
        cout << endl << (inputCount ? "Une seule valeur saisie ." : "Aucune valeur saisie .") << endl;
    }
    return 0;
>>>>>>> 5410a08df271e243174cd30bb55426f2b15d8562
}
