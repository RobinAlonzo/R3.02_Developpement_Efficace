/**
 * @file Individu.h
 * @author Robin Alonzo 
 * @brief Declaration de la class individu
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

#include "Voiture.h"
#include <iostream>
using namespace std;

class Voiture;

class Individu
{
    //ATTRIBUTS
    public:
    private:
        string nom;
        string prenom;
        Voiture* maVoiture;
    protected:

    //METHODES
    public:
        //CONSTRUCTEUR
        Individu(string nom, string prenom, Voiture voiture);

        //DESTRUCTEUR
        ~Individu();

        //GETTER
        string getPrenom();
        string getNom();

        //SETTER
        void setPrenom(string prenomSaisi);
        void setNom(string nomSaisi);

        //FONCTION EXTERNE
        string toString();
};

#endif