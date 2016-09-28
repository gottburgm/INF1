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


	cout << "signed char (" << sizeof (signed char) * 8 << " bits ) : " << ((int) numeric_limits<char>::min()) << " ... " << ((int) numeric_limits<char>::max()) << endl;
	cout << "short (" << sizeof (short) * 8 << " bits ) : \t" << numeric_limits<short>::min() << " ... " <<  numeric_limits<short>::max() << endl;
	cout << "int (" << sizeof (int) * 8 << " bits ) : \t" <<  numeric_limits<int>::min() << " ... " <<  numeric_limits<int>::max() << endl;
	cout << "long (" << sizeof (long) * 8 << " bits ) : \t" <<  numeric_limits<long>::min() << " ... " <<  numeric_limits<long>::max() << endl;
	cout << "long long (" << sizeof (long long) * 8 << " bits ) : \t" << numeric_limits<long long>::min() << " ... " << numeric_limits<long long>::max() << endl;
	return 0;
}

