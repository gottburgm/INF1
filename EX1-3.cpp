/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on 21. septembre 2016, 17:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "+---------------+---------------+---------------+----------------+" << endl;
    std::cout << "|     Type      |      Nom      | Gaz principal | Gaz secondaire |" << endl;
    std::cout << "+---------------+---------------+---------------+----------------+" << endl;
    std::cout << "|   Tellurique  |    Mercure    |        /      |         /      |" << endl;
    std::cout << "|   Tellurique  |    Venus      |       CO2     |        N2      |" << endl;
    std::cout << "|   Tellurique  |    Terre      |       N2      |        O2      |" << endl;
    std::cout << "|   Tellurique  |    Mars       |       CO2     |        N2      |" << endl;
    std::cout << "+---------------+---------------+---------------+----------------+" << endl;
    std::cout << "|    Gazeuse    |    Jupiter    |       H2      |        He      |" << endl;
    std::cout << "|    Gazeuse    |    Saturne    |       H2      |        He      |" << endl;
    std::cout << "|    Gazeuse    |    Uranus     |       H2      |        He      |" << endl;
    std::cout << "|    Gazeuse    |    Neptune    |       H2      |        He      |" << endl;
    std::cout << "+---------------+---------------+---------------+----------------+" << endl;
    return 0;
}

