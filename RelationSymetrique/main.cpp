/**
 * @file main.cpp
 * @author Robin Alonzo
 * @brief Relation Symétrique
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Voiture.h"
#include "Individu.h"
#include <iostream>
using namespace std;

int main(void)
{
    //Création des voitures
    Voiture voit1("RenaultClio", "123AB64");
    Voiture voit2("Peugeot106", "678CD96");
    Voiture voit3("CitroenPicasso", "456EF75");

    //Création des individus
    Individu ind1("Dupond", "Pierre");
    Individu ind2("Martin", "Louis");
    Individu ind3("Durand", "Marcel");
    

    cout << voit1.toString() << endl;
    cout << voit2.toString() << endl;
    cout << voit3.toString() << endl;

    cout << ind1.toString() << endl;
    cout << ind2.toString() << endl;
    cout << ind3.toString() << endl;

    return 0;
}
