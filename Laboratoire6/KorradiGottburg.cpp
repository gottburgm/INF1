#include <iostream>
#include <string>
using namespace std;

int main() {
	int input = 1;
	bool croissante = true;
	string output="";
	int lastInput = 0;
	cout << "Valeurs : ";

	while (input) {
		cin >> input;
		int compteur = 0;
		if (input == lastInput) {
			compteur++;
		}
		if (input < lastInput) {
			croissante = false;
		}
		if (compteur) {
			output += compteur + "x";
		}
		else {
			output += input + ",";
		}
		lastInput = input;
	}
	cout << endl << output << endl;
	cout << "Suite ";
	if(!croissante){
		cout << "non";
	}
	cout << " croissante" << endl;

	return 0;
}
