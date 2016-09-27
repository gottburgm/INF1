/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on 21. septembre 2016, 17:44
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */

void print_Result(string prenom, int age, int annee_naissance) {
    std::cout << "Bonjour " << prenom << ", vous avez " << age << " ans et etes ne dans l'annee " << annee_naissance << " ." << endl;
}

int calcul_Annee(int age) {
    const int annee = 2016;
    int annee_naissance = annee - age;
    
    return annee_naissance;
}

string get_Prenom() {
    string prenom;
    std::cout << "Quel est votre prenom : ";
    getline(cin, prenom);
    std::cout << endl;
    
    return prenom;
}

int get_Age() {
    int age = 0;
    std::cout << "Quel est votre age : ";
    cin >> age;
    std::cout << endl;
    
    return age;
}

int main(int argc, char** argv) {
    int age = 0;
    int annee_naissance = 0;
    string prenom = "";
    
    prenom = get_Prenom();
    age = get_Age();
    annee_naissance = calcul_Annee(age);
    print_Result(prenom, age, annee_naissance);
    return 0;
}

