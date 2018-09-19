/**
 -----------------------------------------------------------------------------------
 \file      FournierMbassilabo7_funcs.cpp
 \brief     Laboratoire 07 - Définition de fonctions
 \authors   Vladimir Mbassi\n
            Robin Fournier
 \date      29.11.2016
 \details   Fichier de définition de fonctions.
            \n<b>Compilateur :</b> Ubuntu g++ 5.4.0
  
 -----------------------------------------------------------------------------------
 */
#include "FournierMbassilabo7_funcs.h"

using namespace std;

void Exercice1() {
    int iSaisi;
    cout << " \n======= Exercice 1 =======" << endl;
    cout << "Veuillez saisir un entier positif svp : ";
    iSaisi = SaisieEntierPos(false);
    cout << iSaisi
            << (EstUnCarreParfait(iSaisi) ? " est " : " n'est pas ") << "un carre parfait\n";
}

bool EstUnCarreParfait(int i) {
    bool estCP = false;
    for (int cpt = 0; cpt <= i; cpt++) {
        estCP = (cpt * cpt == i) ? true : estCP;
    }
    return estCP;
}

void Exercice2() {
    int iSaisi;
    cout << " \n======= Exercice 2 =======" << endl;
    cout << "Veuillez saisir un entier entre 1 et 10 : ";
    iSaisi = SaisieEntierPos(true);
    
    while (iSaisi > 10){
        cout << "Valeur saisie invalide ! \nRessayez s'il vous plait : ";
        iSaisi = SaisieEntierPos(true);
    } 
    AfficherLosange(iSaisi);
}

void AfficherLosange(int i) {
    int NbLignes = 2 * i - 1;
    int iNbEtoiles = 0, nbSpaces = 0;
    cout << endl;
    for (int cpt = 0; cpt < NbLignes; cpt++) {
        if (cpt <= NbLignes / 2) {
            iNbEtoiles = 1 + cpt * 2;
        } else {
            iNbEtoiles = NbLignes - (cpt - (NbLignes / 2)) * 2;
        }
        nbSpaces = (NbLignes - iNbEtoiles) / 2;

        AfficherCharNFois(' ', nbSpaces);
        AfficherCharNFois('*', iNbEtoiles);
        AfficherCharNFois(' ', nbSpaces);
        cout << endl;
    }
}

void AfficherCharNFois(char c, int iFois) {
    for (int i = 0; i < iFois; i++) {
        cout << c;
    }
}

void Afficher() {
    static int i = 0;
    cout << "Appel numero " << ++i << endl;
}

void Exercice4() {
    int iSaisi;
    cout << " \n======= Exercice 4 =======" << endl;
    cout << "Veuillez saisir un entier positif svp : ";
    iSaisi = SaisieEntierPos(false);
    SuiteFibonacci(iSaisi);
    cout << endl;
}

void SuiteFibonacci(int iNbChiffres) {
    long double iPreced1 = 1, iPreced2 = 0, temp = 0;
    cout << ((iNbChiffres > 0) ? "1 " : "");
    for (int i = 1; i < iNbChiffres; i++) {
        if(iPreced1+iPreced2 > numeric_limits<long double>::max())
        {
            cout << endl << endl << "... jusqu'à l'infini"<<endl;
            return;
        }
        cout << " " << iPreced1 + iPreced2 << " ";
        temp = iPreced2;
        iPreced2 = iPreced1;
        iPreced1 = temp + iPreced2;
    }
}

void Exercice5() {
    char saisie = 0;
    string chaine;
    char lastChar = 0;
    int iNbMots = 0, iMaxSize = 0, iSize = 0, iNbChar = 0, iNbCarNonAN = 0;
    cout << "Caractères saisis : ";
    while (saisie != '#') {
        cin >> noskipws >> saisie;
        if (saisie != '#' and saisie != '\n') {
            chaine += saisie;
            iNbChar++;
            iNbCarNonAN = (EstAlphaNum(saisie) ? iNbCarNonAN : ++iNbCarNonAN);
            if (EstLettre(lastChar) && !EstLettre(saisie)) {
                iMaxSize = (iSize > iMaxSize) ? iSize : iMaxSize;
                iSize = 0;
            } else if (!EstLettre(lastChar) && EstLettre(saisie)) {
                iNbMots++;
            }
            iSize = (EstLettre(saisie)) ? ++iSize : iSize;
        }
        lastChar = saisie;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nombre de caractères : " << iNbChar << endl;
    cout << "Nombre de mots : " << iNbMots << endl;
    cout << "Longueur max. d'un mot : " << iMaxSize << endl;
    cout << "Nombre de caractères non alphanumériques : " << iNbCarNonAN << endl;
}

bool EstAlphaNum(char c) {
    int ci = c;
    return (((ci < 48) or (ci > 57 and ci < 65)
            or (ci > 90 and ci < 97) or ci > 122) ? false : true);
}

bool EstLettre(char c) {
    int ci = c;
    return ((ci >= 65 and ci <= 90) or (ci >= 97 and ci <= 122) ? true : false);
}

int SaisieControlee() {
    float fSaisi;
    cin >> fSaisi;
    while (cin.fail() or fSaisi > numeric_limits<int>::max() or fSaisi < numeric_limits<int>::min()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Valeur saisie invalide ! \nRessayez s'il vous plait : ";
        cin >> fSaisi;
    }
    return (int)fSaisi;
}

int SaisieEntierPos(bool strictement) {
    int iSaisi = SaisieControlee();
    while (iSaisi < 0 + (strictement ? 1 : 0)) {
        cout << "Valeur saisie invalide ! \nRessayez s'il vous plait : ";
        iSaisi = SaisieControlee();
    }
    return iSaisi;
}