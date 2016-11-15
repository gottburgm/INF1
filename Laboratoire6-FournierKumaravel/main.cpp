/*
 -----------------------------------------------------------------------------------
 Laboratoire : 06
 Fichier     : FournierKumaravel.cpp
 Auteur(s)   : Robin Fournier
               Jannahrthaani Kumaravel
 Date        : 15.11.2016

 But         : Ecrire un programme qui lit une suite de nombres entiers (positifs
               ou negatifs) au clavier. LA suite sera terminée par la valeur 0.
               
               Le programme affichera un condensé des valeurs saisies en groupant
               toutes les valeurs consécutives identiques, le nombre d'occurence
               sera affiché devant chaque valeur suivi du caractère 'x'.
               Le programme devra déterminer si la suite des nombres est croissante 
               ou non croissante. La suite est croissante si chaque valeur saisie
               est supérieure ou égale à la valeur précédente.

 Remarque(s) : -Si l'utilisateur oublie de saisir le 0 à la fin de la ligne,
                la saisie continue mais génère des erreurs d'affichage.
                Le traitement ce fait cependant correctement.
 
               -Si une lettre est saisie au milieu d'une série, celle-ci sera traitée
                comme un zéro et la série sera considérée comme terminée à partir de
                cette lettre.

 Compilateur : Ubuntu g++ 5.4.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    string output;
    int saisie, lastSaisie=0, cmptRepetitions=1;
    bool estCroissant = true;
    cout<< "Valeurs : ";
    while(saisie != 0)
    {
        cin >> saisie ;
        
        if(lastSaisie!=0) //seul moment où lastSaisie = 0 : premier tour de boucle
        {
            if(saisie != lastSaisie)
            {
                if(cmptRepetitions>1)
                {
                    cout<<cmptRepetitions<<"x"<<lastSaisie << (saisie?",":"");
                    cmptRepetitions = 1;
                } else {
                    cout << lastSaisie << (saisie?",":"");
                }
                
                if(saisie < lastSaisie and saisie )
                    estCroissant = false;
            }
            else
                cmptRepetitions++;
        }
        else cout << endl;
        
        lastSaisie = saisie;
    }
    
    cout << endl << (estCroissant?"Suite croissante":"Suite non croissante") << endl;
    
    
    return 0;
}

