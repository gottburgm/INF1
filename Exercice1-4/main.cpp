

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
   string prenom = "";
   int age = 0;
   
   cout << "Veuillez entrer votre prenom s'il vous plait: " << endl;
   getline (cin, prenom);
   
   cout << "Bonjour, " << prenom << " veuillez entrer votre age s'il vous plait: " << endl ;
   cin >> age;

   cout << prenom <<",\nVous avez " << age << " ans et vous etes ne(e) en " << 2016 - age << ".\n";
   return 0;
}

