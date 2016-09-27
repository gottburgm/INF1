/*
 -----------------------------------------------------------------------------------
 Fichier		: main.cpp
 Auteur(s)	: Robin Fournier
 Date			: 27. septembre 2016, 15:54

 But			: Creer un programme qui détermine et affiche la taille en bits et l'intervalle
				  des types signed char, short, int, long et long long

 Remarque(s) : -

 Compilateur : MinGW-g++ 4.8.1
 -----------------------------------------------------------------------------------
 */


#include <cstdlib>
#include <limits>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	cout << "signed char (8 bits) : " << numeric_limits<signed char>::min() << " ... " << numeric_limits<signed char>::min()
	return 0;
}

