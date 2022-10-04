/**
 * @file sportif.cpp
 * @author Robin Alonzo
 * @brief Definition de la classe Sportif.cpp
 * @version 0.1
 * @date 2022-09-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "sportif.h"
#include <outils.h>

/*** Individu ***/
Sportif::Sportif(string nom, string prenom, unsigned short int anneeNaissance) {
    this->setNom (nom);
    this->setPrenom (prenom);
    this->setAnneeNaissance(anneeNaissance);
}

Sportif::~Sportif() {
    cout << "  Sportif " << this->toString() << " ... meurt !!!!\n";
}

string Sportif::toString() {
    string message;
    message = getNom() + " " + getPrenom();
    return message;
}

unsigned short int Sportif::getAge() {
    unsigned short int age = 0;
    age = Outils::anneeActuelle() - getAnneeNaissance();
    return age;
}
