/**
 -----------------------------------------------------------------------------------
 \file      FournierMbassi_labo8.cpp
 \brief     Laboratoire 8 - Fonction et Tableau à 1 et 2 dimensions
 \authors   Vladimir Mbassi\n
            Robin Fournier
 \date      20.12.2016
 \details   Fichier de définition de fonctions.
  
 -----------------------------------------------------------------------------------
 */

#include "FournierMbassilabo8_funcs.h"

using namespace std;

/*
 * 
 */

size_t taille2 = CAPACITE;
int table1[CAPACITE] = {1, 2, 5, 6, 1, 3, 5, 4, 3}; // table1 1D
int table2[CAPACITE] = {};                          // table2 1D
int table3[N_LIGNES][N_COLONNES];                   // table3 2D

int main(int argc, char** argv) {
    srand(time(NULL));
    float saisie;
    int choix;
    bool fin = false;   // Booleen = true quand l'utilisateur termine le programme
    
    cout << "Choisir une action (entre 1 et 7), 0 pour terminer : " << endl;
    cout << "1. Initialiser table1 avec des valeurs aleatoires." << endl;
    cout << "2. Copier table1 dans table2." << endl;
    cout << "3. Imprimer les valeurs des 2 tableaux." << endl;
    cout << "4. Supprimer les doublons de table2" << endl;
    cout << "5. Tri par selection" << endl;
    cout << "6. Insertion valeur dans table2" << endl;
    cout << "7. Initialiser table3 avec valeur de table1" << endl;
    while (!fin) {
        cin >> saisie;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Valeur saisie invalide ! \nRessayez s'il vous plait : ";
        } else {
            choix = saisie;
            switch (choix) {
                case EXIT:
                    fin = true;
                    break;
                case INITIALISER:
                    cout << "Initialisation aleatoire du tableau 1." << endl;
                    rand_initialisation(table1, CAPACITE);
                    break;
                case COPIER:
                    cout << "Copie du tableau 1 dans le tableau 2." << endl;
                    copier(table1, table2, CAPACITE, taille2);
                    break;
                case IMPRIMER:
                    cout << "Imprimer la valeur des 2 tableaux." << endl;
                    cout << "table1 : ";
                    afficher(table1, CAPACITE);
                    cout << "table2 : ";
                    afficher(table2, taille2);
                    break;
                case SUPPRIMER:
                    cout << "Suppression des doublons dans le tableau 2" << endl;
                    suppr_doublon(table2, taille2);
                    break;
                case TRI:
                    cout << "Tri par selection des 2 tableau" << endl;
                    tri_selection(table1, CAPACITE);
                    tri_selection(table2, taille2);
                    break;
                case INSERER:
                    cout << "Insertion de valeur dans tableau 2" << endl;
                    insertion(table2, taille2);
                    break;
                case INITIALISER_TAB3:
                    cout << "Initialisation du tableau 3" << endl;
                    initialisation_2d(table3, table1, CAPACITE);
                    afficher_2d(table3);
                    break;
                default:
                    cout << "Choix invalide (entre 1 et 7)" << endl;
                    break;
            }
        }
    }
    return 0;
}

