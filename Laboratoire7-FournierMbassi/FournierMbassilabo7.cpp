/**
 -----------------------------------------------------------------------------------
 \file      FournierMbassilabo7.cpp
 \brief     Laboratoire 07 - Chapitre 4 - Fonctions
 \authors   Vladimir Mbassi\n
            Robin Fournier
 \date      29.11.2016
 \details   Pour l'exercice 4, la série s'arrête après le 23601ème terme.
                 "... jusqu'à l'infini" est affiché.\n
            Pour l'exercice 5, les caractères avancés (ex: é, è, ...) ne sont pas
              gérés et sont donc comptés comme deux caractères non-alpha-
              numériques.
            \n<b>Compilateur :</b> Ubuntu g++ 5.4.0

 -----------------------------------------------------------------------------------
 */
#include "FournierMbassilabo7_funcs.h"

using namespace std;

int main() {
    bool bQuit;
    int choix = -1;
    do {
        cout << (choix != -1 ? "\n" : "")
                << "Veuillez saisir un entier entre 1 et 5 [0 pour quitter]:";
        choix = SaisieEntierPos(false);
        switch (choix) {
            case 0: bQuit = true;
                break;
            case 1: Exercice1();
                break;
            case 2: Exercice2();
                break;
            case 3: Afficher();
                break;
            case 4: Exercice4();
                break;
            case 5: Exercice5();
                break;
            default: cout << "erreur: nombre saisi incorrect!" << endl;
                break;
        }
    } while (!bQuit);
    return 0;
}
