/*
 -----------------------------------------------------------------------------------
 Fichier     : main.cpp
 Auteur(s)   : Robin Fournier
 Date        : 18.10.2016

 But         : Exercice 3.10

 Remarque(s) : 

 Compilateur : Ubuntu g++ 5.4.0
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int n1, n2, n3, tmp;
    cout << "Entrez 3 entiers : ";
    cin >> n1 >> n2 >> n3;
    
    if(n1 > n2){
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    
    if(n2 > n3){
        tmp = n2;
        n2 = n3;
        n3 = tmp;
        
        if(n1 > n2){
            tmp = n1;
            n1 = n2;
            n2 = tmp;
        }
    }
    
    cout << "Les 3 entiers tries par ordre croissant : "
         << n1 << " " << n2 << " " << n3 << endl;

    return 0;
}

