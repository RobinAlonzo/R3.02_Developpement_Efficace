/**
 * @file main.cpp
 * @author Robin Alonzo
 * @brief Polymorphisme
 * @version 0.1
 * @date 2022-09-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "outils.h"
#include <iostream>
using namespace std;

int main(void)
{
    Outils outils; //Création de notre objet
    short int anneeActuelle = outils.anneeActuelle(); //Variable contenant l'année actuelle

    cout << "L'année actuelle est : " << anneeActuelle << endl;
    cout << "L'année actuelle est : " << Outils::anneeActuelle();
    
    return 0;
}
