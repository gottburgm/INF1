#ifndef FOURNIERMBASSILABO7_FUNCS_H
#define FOURNIERMBASSILABO7_FUNCS_H
/**
 -----------------------------------------------------------------------------------
 \file      FournierMbassilabo7_funcs.h
 \brief     Laboratoire 07 - Entête de fonctions
 \authors   Vladimir Mbassi\n
            Robin Fournier
 \date      29.11.2016
 \details   Fichier d'entête pour fonctions et inclusion de librairies.
            \n<b>Compilateur :</b> Ubuntu g++ 5.4.0
  
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <limits>

/**
 @brief Permet la saisie d'un entier de manière contrôlée
 
 @details Si une valeur à virgule est saisie, elle est tronquée
  
 @return La première valeur entière correcte saisie ou tronquée
 */
int SaisieControlee();
/**
 @brief Permet la saisie d'un entier positif de manière contrôlée
  
 @param[in] strictement un booléen décidant si l'entier doit être strictement
                        positif ou non.
  
 @return La première valeur entière correcte saisie
 */
int SaisieEntierPos(bool strictement);

/**
 @brief Fonction de base du premier exercice
 */
void Exercice1();
/**
 @brief Permet de calculer si le nombre passé en paramètres est un carré parfait
  
 @param[in] i un entier positif
  
 @return vrai si l'entier est un carré parfait
 */
bool EstUnCarreParfait(int i);

/**
 @brief Fonction de base du deuxième exercice
 */
void Exercice2();
/**
 @brief Affiche un losange qui s'étend sur i lignes [1-10]
  
 @param[in] i un entier positif compris entre 1 et 10
 */
void AfficherLosange(int i);
/**
 @brief Affiche un caractère "c" "iFois" fois dans la console
 
 @param[in] c un char à aficher 
 @param[in] iFois un entier positif
 */
void AfficherCharNFois(char c, int iFois);

/**
 @brief Fonction de base du 3ème ex. Affiche le nombre de fois où elle a été executée
 */
void Afficher(); //Exercice 3

/**
 @brief Fonction de base du 4ème ex.
 */
void Exercice4();
/**
 @brief Affiche les n premiers chiffres de la suite de Fibonacci
  
 @param[in] iNbChiffres un entier positif
 */
void SuiteFibonacci(int iNbChiffres);

/**
 @brief Fonction de base du 5ème ex.
 */
void Exercice5();
/**
 @brief Permet de savoir si le char passé en paramètre est alpha-numérique ou non
  
 @param[in] c un char
  
 @return vrai si le char est alpha-numérique
 */
bool EstAlphaNum(char c);
/**
 @brief Permet de savoir si le char passé en paramètre est une lettre ou non
  
 @param[in] c un char
  
 @return vrai si le char est une lettre
 */
bool EstLettre(char c);

#endif /* FOURNIERMBASSILABO7_FUNCS_H */