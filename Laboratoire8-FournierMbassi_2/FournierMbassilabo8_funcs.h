#ifndef MBASSI_LABO8_FUNCS_H
#define MBASSI_LABO8_FUNCS_H

/**
 -----------------------------------------------------------------------------------
 \file      FournierMbassi_labo8_funcs.h
 \brief     Laboratoire 8 - Fonction et Tableau à 1 et 2 dimensions
 \authors   Vladimir Mbassi\n
            Robin Fournier
 \date      20.12.2016
 \details   Fichier d'entête pour fonctions et inclusion de librairies.
  
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <limits>
#include <time.h>

const size_t CAPACITE = 10;         // Dimension des tables table1 et table2
const size_t N_LIGNES = 5;          // Nombre de lignes de table3
const size_t N_COLONNES = 5;        // Nombre de colonnes de table3

// Variable constante pour les différents choix possibles
const unsigned int EXIT = 0;
const unsigned int INITIALISER = 1;
const unsigned int COPIER = 2;
const unsigned int IMPRIMER = 3;
const unsigned int SUPPRIMER = 4;
const unsigned int TRI = 5;
const unsigned int INSERER = 6;
const unsigned int INITIALISER_TAB3 = 7;

/**
 @brief Affiche le tableau
  
 @param[in] tab[] est le tableau à afficher
 @param[in] N est la taille du tableau à afficher
 */
void afficher(const int tab[], size_t N);

/**
 @brief Affiche le tableau à 2 dmimension
  
 @param[in] tab2d[] est le tableau à afficher
 */
void afficher_2d(const int tab2d[][N_COLONNES]);

/**
 @brief Initialise le tableau par des valeurs aléatoires comprise entre 1 et 10
  
 @param[in] tab[] est le tableau à initialiser
 @param[in] N est la taille du tableau
 */
void rand_initialisation(int tab[], size_t N);

/**
 @brief Copie tab1 dans tab2
  
 @param[in] tab1[] est le tableau à copier (source)
 @param[in] tab2[] est le tableau dans lequel est effectué la copie (destination)
 @param[in] N est la taille du tableau 1
 @param[in, out] taille2 est la taille du tableau 2
 */
void copier(const int tab1[], int tab2[], size_t N, size_t& taille2);

/**
 @brief Supprime les doublons de la table
  
 @param[in] tab[] est le tabeau avec les doublons à supprimer
 @param[in, out] N est la taille du tableau
 */
void suppr_doublon(int tab[], size_t& taille);

/**
 @brief Insere une valeur après chaque valeur paire
  
 @param[in] tab[] est le tabeau dans lequel il faut insérer les valeurs
 @param[in, out] N est la taille du tableau
 */
void insertion(int tab[], size_t& taille);

/**
 @brief Insere une valeur après chaque valeur paire
 
 @param[in, out] tab2d est le tableau à 2 dimensions
 @param[in] tab[] est le tabeau duquel il faut copier les valeurs
 @param[in] N est la taille de tab
 */
void initialisation_2d(int tab2d[][N_COLONNES], const int tab[], size_t N);

/**
 @brief Effectue un tri par sélection sur le tableau
 
 @param[in, out] tab est le tableau à triers
 @param[in] N est la taille de tab
 */
void tri_selection(int tab[], size_t N);

#endif /* MBASSI_LABO8_FUNCS_H */
