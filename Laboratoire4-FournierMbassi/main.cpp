/*
 -----------------------------------------------------------------------------------
 Laboratoire : 04
 Fichier     : Fournier_Mbassi.cpp
 Auteur(s)   : Robin Fournier
 Date        : 12.10.2016

 But         : - Instructions conditionnelles
               - Vérification des valeurs saisies

 Remarque(s) : <à compléter>

 Compilateur : Ubuntu g++ 5.4.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    bool saisieIncorrecte = false;
    
    int largeur, longueur, hauteur, poids;
    unsigned int taxePoids = 0, taxeVolume = 0;
    
    float taxeTTC=0.0,taxeTot=0.0, volume=0.0;
    const float TVA = 0.08;
    const unsigned int TAXE_NORM = 5, LIM_POIDS1 = 8, LIM_POIDS2 = 5,SUPP_POIDS1 = 2,
          SUPP_POIDS2 = 1, LIM_VOL1 = 33, LIM_VOL2 = 27,SUPP_VOL1 = 6, SUPP_VOL2 = 3,
          POIDS_MAX = 10, DIM_MAX = 50;
    
    
    cout << "Veuillez saisir la longueur [cm] : " << endl;
    cin >> longueur;
    cout << "Veuillez saisir la largeur [cm]  : " << endl;
    cin >> largeur;
    cout << "Veuillez saisir la hauteur [cm]  : " << endl;
    cin >> hauteur;
    cout << "Veuillez saisir le poids [kg]    : " << endl;
    cin >> poids;
    
    if( (cin.fail()) || (longueur<=0 || largeur <=0 || poids <=0 || hauteur <=0 )){
        cout << "Erreur : saisie incorrecte, redemarrez le programme." << endl;
    }
    else if(poids > POIDS_MAX){
        cout << "Colis hors norme : poids trop eleve"<<endl;
    }
    else if(longueur > DIM_MAX || largeur > DIM_MAX || hauteur > DIM_MAX){
        cout << "Colis hors norme : une ou plusieurs dimension(s) trop elevee(s)"<< endl;
    }
    else{
        if(poids > LIM_POIDS1){
            //première surtaxe sur le poids
            taxePoids = (LIM_POIDS1-LIM_POIDS2)*SUPP_POIDS2;
            
            //seconde surtaxe sur le poids
            taxePoids += (poids - LIM_POIDS1) * SUPP_POIDS1;
        }
        else if (poids > LIM_POIDS2){
            //première surtaxe sur le poids
            taxePoids = (poids-LIM_POIDS2)*SUPP_POIDS2;
        }
        
        // cm3 -> dm3
        volume = longueur * largeur * hauteur /1000.0;
        
        if(volume > LIM_VOL1){
            taxeVolume = SUPP_VOL1;
        }
        else if(volume > LIM_VOL2){
            taxeVolume = SUPP_VOL2;
        }
        taxeTot = taxeVolume + taxePoids + TAXE_NORM;
        
        int quotient = taxeTot * TVA * 100 / 5;
        taxeTTC = taxeTot + quotient * 5.0 / 100;
        
        cout << endl << endl << "=========== FACTURE ===========" << endl;
        cout << "Taxe normale : " << TAXE_NORM << " Frs." << endl;
        
        if(taxePoids > 0){
           cout << "Surtaxe poids : " << taxePoids << "Frs. ( " << poids << " kg)" << endl; 
        }

        if(taxeVolume > 0){
           cout << "Dimensions : " << longueur << "cm x " << largeur << "cm x " << hauteur << "cm\n";
           cout << "Surtaxe d'encombrement : " << taxeVolume << " Frs. ( " << volume << " dm3)" << endl; 
        }

        cout << "Taxe sans TVA : " << taxeTot << " Frs." << endl;

        /* AJout de la taxe pour obtenir le prix final */
        //prix_total += prix_taxe_arrondi;

        cout << "TVA : " << TVA * 100 << "% ." << endl;
        cout << "Valeur ajoutee : " << taxeTTC - taxeTot << " Frs. ("<< taxeTot * TVA << ")."<<endl << endl << endl;
        cout << "Total : " << taxeTTC << " Frs." << endl;
        cout << "===============================" << endl;
    }
    
    
    
    
    
    
    return 0;
}

