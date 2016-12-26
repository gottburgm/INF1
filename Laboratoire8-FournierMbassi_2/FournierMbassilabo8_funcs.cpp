/**
* \file KorradiGottburgFunctions.cpp
* \brief Definition des fonctions
* \details Definition des prototypes contenus dans le fichier Functions.h
* \author Frederic Korradi
* \author Michael Gottburg
* \version 1.0
* \date 2016-12-20
* \copyright GNU Public License and HEIG-VD
*/

#include "KorradiGottburgFunctions.h"


bool inRange(int value, int min, int max) {
	return (value >= min && value <= max ? true : false);
}

int getInput(const string& MESSAGE, int max, int min) {
	int value = 0;
	cout << MESSAGE;

	while (!(cin >> value) || !(inRange(value, min, max))) {
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
		cout << MESSAGE;
	}
	cin.ignore(numeric_limits<int>::max(), '\n');
	return value;
}

void generateTab1(int tab1[], size_t& size) {
	for (size_t index = 0; index < size; index++) {
		tab1[index] = rand() % 10;
	}
	return;
}

void copyTab1InTab2(const int tab1[], int tab2[], size_t& size_tab1, size_t& size_tab2) {
	size_tab2 = 0;
	for (size_t index = 0; index < size_tab1; index++) {
		tab2[index] = tab1[index];
		size_tab2++;
	}

	return;
}

void printTab(const int tab[], size_t& size, const string& TEXTE) {
	cout << TEXTE << endl;
	for (size_t index = 0; index < size; index++) {
		cout << tab[index] << ' ';
	}
	cout << endl;

	return;
}

void deleteDuplicatesTab2(int tab2[], size_t& size) {
	const short INC = 1;
	const short DOUBLEINC = 2 * INC;
	unsigned int counter = 0;
	if (size) {
		for (size_t index = 0; index < size; index++) {
			for (size_t index2 = index + INC; index2 < size-INC; index2++) {
				if (tab2[index] == tab2[index2]) {
					for (size_t index3 = index2 + INC; index3 < size + DOUBLEINC; index3++) {
						tab2[index3-INC] = tab2[index3];
					}		
					counter++;
				}
			}
		}
		size -= counter;
	}
	return;
}

void insertInTab2IncrementedValuesAfterPairValues(int tab2[], size_t& size_tab_2, const unsigned int& CAPACITYTAB1AND2) {
	const short DIVIDER = 2;
	const short INC = 1;
	const string ALERT = "ERREUR : Capacite du tableau depassee.";
	for (size_t index = 0; index < size_tab_2 - INC; index++) {
		if (size_tab_2 < CAPACITYTAB1AND2) {
			if (tab2[index] % DIVIDER == 0) {
				size_tab_2++;
				for (size_t index2 = size_tab_2; index2 > index; index2--) {
					tab2[index2] = tab2[index2 - INC];
				}
				tab2[index + INC] = tab2[index] + INC;
				index++;
			}
		}
		else {
			cout << ALERT << endl;
		}
	}
	return;
}

void initializeTab3WithTab1AndCompareThem(const int tab1[], size_t& size_tab1, int tab3[][6], size_t& size_tab3_rows, size_t& size_tab3_columns) {
	unsigned last = 0;
	size_t row = 0;
	if (size_tab3_columns * size_tab3_rows >= size_tab1) {   // Verification de la taille du tableau 2D
		int j = 0, k = 0;
		for (int i = 0; i < size_tab1; i++) {
			tab3[j][k] = tab1[i];
			if (k < size_tab3_columns - 1) {
				k++;
			}
			else {
				k = 0;
				j++;
			}
		}
		for (int index = 0; index < size_tab3_rows; index++) {
			printTab(tab3[index], size_tab3_columns, "Affichage du tableau 3 : ");
		}
	}
	else {    // Table 2D trop petite -> Message d'erreur
		cout << "table3 est trop petit par rapport a table1" << endl;
	}
}


/*
	for (size_t col = 0; col < size_tab3_columns; col++) {
		for (row = 0; row < size_tab3_rows; row++) {
			if (last + row <= size_tab1) {
				tab3[col][row] = tab1[last + row];
				cout << col << "," << row << " : " << tab3[col][row] << endl;
			}
			else {
				tab3[col][row] = 11;
				cout << col << "," << row << " : " << tab3[col][row] << endl;
			}
		}
		last = row;
		if (last + size_tab3_columns + 1 < size_tab1) {
			size_tab3_columns++;
		}
	}

	return;
}

*/

void switchPos(int tab[], int x, int y) {
	int temp = tab[x];
	tab[x] = tab[y];
	tab[y] = temp;

	return;
}

int maxPos(int tab[], int size) {
	int pos = 0;
	int max_pos = 0;

	while (pos < size) {
		if (tab[pos] > tab[max_pos]) {
			max_pos = pos;
			pos++;
		}
	}

	return max_pos;
}

void triSelection(int tab[], size_t& size) {
	const short INC = 1;
	int min;
	int index_min;
	int temp;

	for (size_t index = 0; index < size - INC; index++) {
		min = tab[index];
		index_min = index;
		for (size_t index2 = index + INC; index2 < size; index2++) {
			if (tab[index2] < min) {
				min = tab[index2];
				index_min = index2;
			}
		}
		if (index_min != index) {
			temp = tab[index];
			tab[index] = tab[index_min];
			tab[index_min] = temp;
		}
	}

	return;
}
