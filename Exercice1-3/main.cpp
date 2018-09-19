/*
 -----------------------------------------------------------------------------------
 Fichier		: main.cpp
 Auteur(s)	: Robin Fournier
 Date			: 27.09.2016

 But			: Afficher un tableau avec les données données dans l'exercice 1.3

 Remarque(s) : -

 Compilateur : MinGW-g++ 4.8.1
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
   string tPlanetes[8][4] = {
      {"Mercure", "tellurique", "-", "-"} ,
      {"Vénus\t", "tellurique", "CO2", "N2"} ,
      {"Terre\t", "tellurique", "N2", "O2"} ,
      {"Mars\t", "tellurique", "CO2", "N2"} ,
      {"Jupiter", "gazeuse", "H2", "He"} ,
      {"Saturne", "gazeuse", "H2", "He"} ,
      {"Uranus", "gazeuse", "H2", "He"},
      {"Neptune", "gazeuse", "H2", "He"}
   };
   
   cout << "Type \t\t Nom \t Gaz princip. \t Gaz second. \n______________________________________________________" << endl;
   for(int i =0; i<8;i++){
      cout << tPlanetes[i][1] << " \t " << tPlanetes[i][0] << " \t " << tPlanetes[i][2] << " \t " << tPlanetes[i][3] << endl;
   }
   return 0;
}

