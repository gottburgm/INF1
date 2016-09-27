/* 
 * File:      Gottburg.cpp
 * Author:    Michael Gottburg
 * Classroom: INF1-1-E
 * OS : Linux 4.0.0-kali1-amd64 #1 SMP Debian 4.0.4-1+kali2 (2015-06-03) x86_64 GNU/Linux
 * Created on 22. septembre 2016, 16:51
 */

/* 
 * ################################## TESTS ####################################
 * Note : "/" signifie que l'exception a ete levee avant la demande de saisie
 *            de la valeur concernee
 * 1 :
 *    input     : val1 = abc
 *                val2 = /
 *    output    : Floating point Exeption
 *    Remarque  : Test "Bad Format"
 * 
 * 2 :
 *    input     : val1 = 
 *                val2 = /
 *    output    : /
 *    Remarque  : Test "Bad Format"
 *
 * 3 :
 *    input     : val1 = 1
 *                val2 = c
 *    output    : Floating point Exeption
 *    Remarque  : Test "Bad Format" sur seconde valeur
 * 
 * 4 :
 *    input     : val1 = 21
 *                val2 = $
 *    output    : Floating point Exeption
 *    Remarque  : Test "Bad Format" / "Shell Code Execution"
 * 5 :
 *    input     : val1 = 9999999999999999
 *                val2 = /
 *    output    : Floating point Exeption
 *    Remarque  : Test "Integer Overflow"
 * 
 * 5 :
 *    input     : val1 = 3
 *                val2 = 9
 *    output    : <Résultats correctes>
 *    Remarque  : Test saisie usuelle
 * #############################################################################
 */

/* Librairies */
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/* Affichage des deux valeurs saisies par l'utilisateur */
int print_values(int val1, int val2) {
    std::cout << "Valeur 1 : " << val1 << endl;
    std::cout << "Valeur 2 : " << val2 << endl << endl;

    return 0;
}

/* Permutation des deux valeurs saisies par l'utilisateur */
int switch_values(int val1, int val2) {
    /* 
     * (entier) temp    : Variable necessaire a la permutation de val1 et val2 
     */
    int temp = 0;

    /* Permutation */
    temp = val1;
    val1 = val2;
    val2 = temp;

    std::cout << "Permutation : " << endl;

    /* Appelle de la fonction qui affichera les deux valeurs qui lui sont données */
    print_values(val1, val2);

    return 0;
}

/* Affichage des resultats des operations effectuees par do_calculs */
int print_result(int val1, int val2, int somme, int difference, int produit, int quotient, int reste) {
    /* Appelle de la fonction qui affichera les deux valeurs qui lui sont données */
    print_values(val1, val2);

    /* Affichage des resultats des calculs faits par do_calculs */
    std::cout << "Addition : " << val1 << " + " << val2 << " = " << somme << endl;
    std::cout << "Soustraction : " << val1 << " - " << val2 << " = " << difference << endl;
    std::cout << "Multiplication : " << val1 << " * " << val2 << " = " << produit << endl;
    std::cout << "Division : " << val1 << " / " << val2 << " = " << quotient;
    std::cout << " avec un reste de : " << reste << endl;

    return 0;
}

/* Operations (Addition, soustraction, multiplication, division */
int do_calculs(int val1, int val2) {
    /*
     * (entier) somme       : contiendra le resultat de l'addition de val1 et val2
     * (entier) difference  : contiendra le resultat de la soustraction de val1 et val2
     * (entier) produit     : contiendra le resultat de la multiplication de val1 et val2
     * (entier) quotient    : contiendra le resultat de la division de val1 et val2
     * (entier) reste       : contiendra le reste de la division de val1 et val2
     */

    int somme = 0;
    int difference = 0;
    int produit = 0;
    int quotient = 0;
    int reste = 0;

    /* Addition */
    somme = val1 + val2;
    /* Soustraction */
    difference = val1 - val2;
    /* Multiplication */
    produit = val1 * val2;
    /* Division */
    quotient = val1 / val2;
    /* Reste de la division */
    reste = val1 % val2;

    /* Appelle de la fonction d'affichage avec les resultats en parametres */
    print_result(val1, val2, somme, difference, produit, quotient, reste);

    return 0;
}

/* Main */
int main(int argc, char** argv) {
    /*
     * (entier) val1   : COntiendra la premiere valeur saisie par l'utilisateur
     * (entier) val2   : COntiendra la seconde valeur saisie par l'utilisateur
     */
    int val1 = 0;
    int val2 = 0;

    /* Saisie valeur 1 */
    std::cout << "Veuillez saisir une valeur : ";
    cin >> val1;
    std::cout << endl;

    /* Saisie valeur 2 */
    std::cout << "Veuillez saisir une seconde valeur : ";
    cin >> val2;
    std::cout << endl;

    /* Appel de la fonction qui effectuera les operations avec les deux valeurs */
    do_calculs(val1, val2);

    return 0;
}

