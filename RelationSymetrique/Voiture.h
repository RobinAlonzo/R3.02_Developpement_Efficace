/**
 * @file Voiture.h
 * @author Robin Alonzo
 * @brief La classe voiture
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef VOITURE_H
#define VOITURE_H

#include "Individu.h"
#include <iostream>
using namespace std;

class Individu;

class Voiture {
    ///ATRIBUTS
    public:
    private:
        string marque;
        string plaque;
        Individu* monPilote;
    protected:

    //Methodes
    public:
        //Constructeur
        Voiture(string marqueSaisi, string plaqueSaisi, Individu pilote);

        //Destructeur
        ~Voiture();

        //Getter
        string getMarque();
        string getPlaque();

        //Setter
        void setMarque(string marque);
        void setPlaque(string plaque);

        //Fonction Externe
        string toString();

};

#endif
