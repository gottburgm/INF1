/*
 -----------------------------------------------------------------------------------
 Fichier     : main.cpp
 Auteur(s)   : Robin Fournier
 Date        : 18.10.2016

 But         : Exercice 3.15

 Remarque(s) : 

 Compilateur : Ubuntu g++ 5.4.0
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int noMois;
    enum class Mois{ JAN = 1, FEV, MAR, AVR, MAI, JUN, JUI, AOU, SEP, OCT, NOV, DEC };
    
    cout << "Entrez un no de mois s'il vous plait (1-12) : ";
    
    cin >> noMois;
    
    cout << endl << "Ce mois comporte ";
    
    switch(noMois){
        case (int)Mois::FEV : 
            cout << "28 ou 29 jours";
            break;
        default:
            cout << 30 + ((noMois > (int)Mois::JUN )?1 - noMois % 2 : noMois % 2) 
                 << " jours.";
            break;
    }
    cout << endl;
    return 0;
}

