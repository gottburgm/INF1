/*
 -----------------------------------------------------------------------------------
 Fichier     : main.cpp
 Auteur(s)   : Robin Fournier
 Date        : 18.10.2016

 But         : Exercice 3.11

 Remarque(s) : 

 Compilateur : Ubuntu g++ 5.4.0
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int nb;
    
    cout << "Veuillez saisir un entier >=0 s'il vous plait : ";
    cin >> nb;
    cout << endl;
    
    if((nb % 3 == 0) and (nb % 5 == 0))
        cout << nb << " est un multiple de 3 et 5";
    else if (nb % 3 == 0)
        cout << nb << " est multiple de 3";
    else if (nb % 5 == 0)
        cout << nb << " est multiple de 5";
    else
        cout << nb << " n'est ni multiple de 3 ni multiple de 5";
    
    cout << endl;
    
    return 0;
}

