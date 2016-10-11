/*
---------------------------------------------------------------------------------
Laboratoire : Laboratoire 3
Fichier     : Korradi_Gottburg_Fournier.cpp
Auteur(s)   : Michael Gottburg
              Robin Fournier
              Frédéric Korrad

Date        : 06.10.2016

But         : Chapitres 1 et 2

Remarque(s) : Le programme ne fait aucun test. Si la saisie n'est pas correcte,
si autre chose que des enteiers positifs sont insérés et pas exagérement grand
(éviter les nombres supérieurs à quelques centaines de millions,il pourra avoir
des comportements imprévus.

Compilateur : MinGW-g++ 4.8.1
---------------------------------------------------------------------------------
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    //Exercice 2.11
    const double PI = atan(1) * 4;
    double r1, r2, h1, h2, h3;
    cout << "========================== Exercice 2.11 ===========================" << endl << endl;
    cout << "               r1" << endl;
    cout << "              |--|" << endl;
    cout << "          ........      -" << endl;
    cout << "          ||||||||      | h2" << endl;
    cout << "         /        \\     -" << endl;
    cout << "        /          \\    |" << endl;
    cout << "       /            \\   | h3" << endl;
    cout << "       |------------|   -" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   | h4" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |            |   |" << endl;
    cout << "       |____________|   -" << endl;
    cout << "              |-----|" << endl;
    cout << "                 r2" << endl;
    cout << endl << endl;

    cout << "Veuillez entrer r1 [cm]:" << endl;
    cin >> r1;
    cout << "Veuillez entrer r2 [cm]:" << endl;
    cin >> r2;
    cout << "Veuillez entrer h1 [cm]:" << endl;
    cin >> h1;
    cout << "Veuillez entrer h2 [cm]:" << endl;
    cin >> h2;
    cout << "Veuillez entrer h3 [cm]:" << endl;
    cin >> h3;

    double volCylindre1 = PI * pow(r1, 2) * h1;
    double volCylindre2 = PI * pow(r2, 2) * h2;
    double volCone = (h3 * PI / 3)*(pow(r1, 2) + pow(r2, 2) + r1 * r2);
    double volTot = volCylindre1 + volCylindre2 + volCone;

    cout << "Volume total : " << volTot << " cm3" << endl; //voir precision
    cout << "====================================================================" << endl;

    //Exercice 2.13
    cout << "========================== Exercice 2.13 ===========================" << endl << endl;

    int saisieUtilisateur = 0, nbChiffres = 0, nbFirstChiffre = 0, nbLastChiffre = 0;
    cout << "Veuillez saisir un nombre entier >= 0 : ";
    cin >> saisieUtilisateur;

    nbChiffres = floor(log10(abs(saisieUtilisateur))) + 1;
    nbFirstChiffre = floor(saisieUtilisateur / pow(10, nbChiffres - 1));
    nbLastChiffre = saisieUtilisateur % 10;

    cout << "Nombre saisi       : " << saisieUtilisateur << endl;
    cout << "Nombre de chiffres : " << nbChiffres << endl;
    cout << "Premier chiffre    : " << nbFirstChiffre << endl;
    cout << "Dernier chiffre    : " << nbLastChiffre << endl;

    //(int)(saisieUtilisateur / pow(10, (int) floor(log10(saisieUtilisateur)))) << endl;
    cout << "====================================================================" << endl;
}
