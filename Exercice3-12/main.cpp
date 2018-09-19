/*
 -----------------------------------------------------------------------------------
 Fichier     : main.cpp
 Auteur(s)   : Robin Fournier
 Date        : 18.10.2016

 But         : Exercice 3.12

 Remarque(s) : 

 Compilateur : Ubuntu g++ 5.4.0
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float rl1, rl2, rl3, rl4, moyenne;
    
    cout << "Entrez 4 notes s'il vous plait :" << endl;
    cin >> rl1 >> rl2 >> rl3 >> rl4;
    
    moyenne = (rl1+rl2+rl3+rl4)/4;
    
    cout << fixed << setprecision(1) << "Moyenne = " << moyenne << " - " ;
    
    if(moyenne > 5.5)
        cout << "Excellent";
    else if(moyenne > 5)
        cout << "Tres bien";
    else if(moyenne > 4.5)
        cout << "Bien";
    else if(moyenne >= 4)
        cout << "Moyen";
    else
        cout << "Insuffisant";
    
    cout << endl;
    return 0;
}

