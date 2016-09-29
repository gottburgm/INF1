/*
 -----------------------------------------------------------------------------------
 Laboratoire : Lab02
 Fichier     : GottburgFournierlabo2.cpp
 Auteur(s)   : Michael Gottburg
               Robin FOurnier
 
 Date        : 29.09.2016

 But         : Calculer le prix d'une course en fonction de divers parametres
               lies a celle-ci

 Remarque(s) : /

 Compilateur : gcc version 4.9.2 (Debian 4.9.2-10)
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    /* Constantes */
    const int PRIX_PRISE_EN_CHARGE = 5;
    const float TAXE = 0.08;
    const float PRIX_KM_HORS_VILLE = 0.45;
    const float PRIX_KM_VILLE = 2.85;
    const float PRIX_MINUTE = 0.45;
    
    /* Declaration / Initialisation */
    int nb_heures_course = 0;
    int nb_minutes_course = 0;
    int nb_minutes_total = 0;
    float nb_km_ville = 0;
    float nb_km_hors_ville = 0;
    float prix_km_ville = 0;
    float prix_km_hors_ville = 0;
    float prix_km_total = 0;
    float prix_duree = 0;
    float prix_total = 0;
    float prix_taxe = 0;
    
    /* Saisie des valeurs */
    std::cout << "Nombre de kilometres parcourus en ville : ";
    cin >> nb_km_ville;
    
    std::cout << "Nombre de kilometres parcourus hors ville : ";
    cin >> nb_km_hors_ville;
    
    std::cout << "Nombre d'heures qu'a dure la course  : ";
    cin >> nb_heures_course;
    
    std::cout << "Nombre de minutes qu'a dure la course  : ";
    cin >> nb_minutes_course;
    
    /* Calcul de la somme finale*/
    /* Calcul le prix en fonction de la distance */
    prix_km_ville = nb_km_ville * PRIX_KM_VILLE;
    prix_km_hors_ville = nb_km_hors_ville * PRIX_KM_HORS_VILLE;
    prix_km_total = prix_km_ville + prix_km_hors_ville;
    
    /* OCalcul le prix en fonction de la duree */
    nb_minutes_total = (nb_heures_course * 60) + nb_minutes_course;
    prix_duree = nb_minutes_total * PRIX_MINUTE;
    
    /* Calcul le total et la taxe */
    prix_total = PRIX_PRISE_EN_CHARGE + prix_km_total + prix_duree;
    prix_taxe = prix_total * TAXE;
    
    /* Affichage de la facture */
    std::cout << endl << endl << "=========== FACTURE ===========" << endl;
    std::cout << "Tarif prise en charge : " << PRIX_PRISE_EN_CHARGE << " CHF." << endl;
    
    std::cout << "Nombre de kilometres parcourus en ville : " << nb_km_ville << " Km." << endl;
    std::cout << "Cout des kilometres parcourus en ville : " << prix_km_ville << " CHF." << endl;
    std::cout << "Tarif : " << PRIX_KM_VILLE << " CHF/Km ." << endl << endl;
    
    std::cout << "Nombre de kilometres parcourus hors ville : " << nb_km_hors_ville << " Km." << endl;
    std::cout << "Cout des kilometres parcourus hors ville : " << prix_km_hors_ville << " CHF." << endl;
    std::cout << "Tarif : " << PRIX_KM_HORS_VILLE << " CHF/Km ." << endl << endl;
    
    std::cout << "Duree de la course : " << nb_minutes_total << " min." << endl;
    std::cout << "Cout en fonction du temps de la course : " << prix_duree << " CHF." << endl;
    std::cout << "Tarif : " << PRIX_MINUTE << " CHF/min ." << endl << endl;
    
    std::cout << "Sous total : " << prix_total << " CHF." << endl;
    
    /* AJout de la taxe pour obtenir le prix final */
    prix_total += prix_taxe;
    
    std::cout << "TVA : " << TAXE * 100 << "% ." << endl;
    std::cout << "Valeur ajoutee : " << prix_taxe << " CHF." << endl << endl << endl;
    std::cout << "Total : " << prix_total << " CHF." << endl;
    std::cout << "===============================" << endl;
    
    return 0;
}
