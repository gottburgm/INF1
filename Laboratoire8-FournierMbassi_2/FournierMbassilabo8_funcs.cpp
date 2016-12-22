/**
 -----------------------------------------------------------------------------------
 \file      FournierMbassi_labo8_funcs.cpp
 \brief     Laboratoire 8 - Fonction et Tableau à 1 et 2 dimensions
 \authors   Vladimir Mbassi\n
            Robin Fournier
 \date      20.12.2016
 \details   Fichier de définition des fonctions
  
 -----------------------------------------------------------------------------------
 */

#include "FournierMbassilabo8_funcs.h"

using namespace std;

void copier(const int tab1[], int tab2[], size_t N, size_t& taille2) {
    for (int i = 0; i < N; i++) {
        tab2[i] = tab1[i];
    }
    taille2 = CAPACITE; // On réinitialise la taille de table2 à CAPACITE
}

void afficher(const int tab[], size_t N) {
    cout << "[";
    for (int i = 0; i < N - 1; i++) {
        cout << tab[i] << ",";
    }
    cout << tab[N - 1] << "]" << endl;
}

void suppr_doublon(int tab[], size_t& taille) {
    for (int i = 0; i < taille; i++) {  // Pour chaque valeur du tableau
        for (int j = i + 1; j < taille; j++) { // Verification de tous les val suivantes
            if (tab[j] == tab[i]) {
                // Déclalage à gauche si doublon
                for (int k = j; k < taille; k++) {
                    tab[k] = tab[k + 1];
                }
                taille--;
                i--;    // Décrementation nécessaire si multiples doublons successifs
            }
        }
    }
}

void rand_initialisation(int tab[], size_t N) {
    const int MAX = 10, MIN = 0;
    for (int i = 0; i < N; i++) { // Affectation d'une val aléatoire entre MAX et MIN
        tab[i] = (rand() % (MAX - MIN + 1)) + MIN;
    }
}

void insertion(int tab[], size_t& taille) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 == 0) {  // Si valeur paire
            if (taille < CAPACITE) {    // Augmentation de la taille si inférieur a la capacité
                taille++;
            }
            // On décale toutes les valeurs à droite après "i"
            for (int j = taille - 1; j > i + 1; j--) {
                tab[j] = tab[j - 1];
            }
            // Puis on insère valeur + 1 à "i + 1"
            tab[i + 1] = tab[i] + 1;


        }
    }
}

void initialisation_2d(int tab2d[][N_COLONNES], const int tab[], size_t N) {
    if (N_COLONNES * N_LIGNES >= N) {   // Verification de la taille du tableau 2D
        int j = 0, k = 0;
        for (int i = 0; i < N; i++) {
            tab2d[j][k] = tab[i];
            if (k < N_COLONNES - 1) {
                k++;
            } else {
                k = 0;
                j++;
            }
        }
    } else {    // Table 2D trop petite -> Message d'erreur
        cout << "table3 est trop petit par rapport a table1" << endl;
    }
}

void afficher_2d(const int tab2d[][N_COLONNES]) {
    for (int i = 0; i < N_LIGNES; i++) {
            afficher(tab2d[i], N_COLONNES);
        }
}

void tri_selection(int tab[], size_t N) {
    int min;    // Indice de la contenant la valeur minimale actuelle
    int tmp;    // Variable tampon pour l'échange entre tab[min] et tab[i]
    
    for (int i = 0; i < N - 1; i++) {   // Pour chaque valeur de tab[] sauf dernière
        min = i;
        for (int j = i + 1; j < N; j++) {   // On recherche la plus petite valeure
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        if (min != i) { // On échange les valeurs de tab[min] et tab[i]
            tmp = tab[i];
            tab[i] = tab[min];
            tab[min] = tmp;
        }
    }
}

