/*
 -----------------------------------------------------------------------------------
 Laboratoire : 06
 Fichier     : FournierKumaravellabo6.cpp
 Auteur(s)   : Robin Fournier
               Jannahrthaani Kumaravel
 Date        : 16.11.2016

 But         : Ecrire un programme qui lit une suite de nombres entiers (positifs
               ou négatifs) au clavier. La suite sera terminée par la valeur 0.
               
               Le programme affichera un condensé des valeurs saisies en groupant
               toutes les valeurs consécutives identiques, le nombre d'occurence
               sera affiché devant chaque valeur suivi du caractère 'x'.
               Le programme devra déterminer si la suite des nombres est croissante 
               ou non croissante. La suite est croissante si chaque valeur saisie
               est supérieure ou égale à la valeur précédente.

 Remarque(s) : 1) Si l'utilisateur oublie de saisir le 0 à la fin de la ligne,
                  la saisie continue mais génère des erreurs d'affichage.
                  Le traitement ce fait cependant correctement.
               2) Si une lettre est saisie au milieu d'une série, celle-ci sera traitée
                  comme un zéro et la série sera considérée comme terminée à partir de
                  cette lettre.
    ====================================== Tests =====================================
    |    Valeurs     |               Résultat(s)                 | Remarque          |
    | 1 2 3 4 5 6 0  | 1,2,3,4,5,6          Suite croissante     |         OK        |
    | 1 1 2 2 3 4 0  | 2x1,2x2,3,4          Suite croissante     |         OK        |
    |      1 0       | 1                    Suite croissante     |         OK        |
    | -4 -3 -2 -4 0  | -4,-3,-2,-4          Suite non croissante |         OK        |
    | -4 -3 -2 -1 0  | -4,-3,-2,-1          Suite croissante     |         OK        |
    | -1 -1 -2 -2 0  | 2x-1,2x-2            Suite non croissante |         OK        |
    |   3 2 1 0      | 3,2,1                Suite non croissante |         OK        |
    | 1 2 3 4 a 6 0  | 1,2,3,4              Suite croissante     | Voir remarque n°2 |
    |                |                                           |                   |
    |       0        |                    -                      |         OK        |
    | 44 55 55 22 22 |                                           |                   |
    | 22 32 32 32 32 | 44,2x55,3x22,4x32,88 Suite non croissante |         OK        |
    |      88 0      |                                           |                   |
    ==================================================================================

 Compilateur : Ubuntu g++ 5.4.0 et MinGW-g++ 5.3.0
 -----------------------------------------------------------------------------------
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int saisie=1, lastSaisie=0, cmptRepetitions=1;
    bool estCroissant = true;
    
    cout<< "Valeurs : ";
    while(saisie) {
        cin >> saisie ;
        if(lastSaisie) { //seul moment où lastSaisie = 0 : premier tour de boucle
            if(saisie != lastSaisie) {
                if(cmptRepetitions > 1) {
                    cout << cmptRepetitions << "x" << lastSaisie << (saisie?",":"");
                    cmptRepetitions = 1;
                } else {
                    cout << lastSaisie << (saisie?",":"");
                }
                estCroissant = (saisie < lastSaisie and saisie )?false:estCroissant;
            }
            else cmptRepetitions++;
        }
        else cout << endl;
        lastSaisie = (saisie?saisie:lastSaisie); //ne change pas lastSaisie si 0 final
    }
    if(lastSaisie){ 
       cout << endl << "Suite " << (estCroissant?"":"non ") << "croissante" << endl;
    }
    return 0;
}