/**
 * @file sportif.h
 * @author Robin Alonzo
 * @brief Classe Sportif
 * @version 0.1
 * @date 2022-09-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef SPORTIF_H
#define SPORTIF_H

#include <iostream>
using namespace std;

/*** Sportif ***/
class Sportif {
    /// ATTRIBUTS : nom, prenom
    public:    // -non-
    protected: // -non-
    private:
        string nom;
        string prenom;
        unsigned short int anneeNaissance;

    /// METHODES
    public:
        // CONSTRUCTEUR
        Sportif(string nom="", string prenom="", unsigned short int anneeNaissance=0);

        // DESTRUCTEUR          /** Parce qu'il il existe une m�thode sp�cialis�e **/
        virtual ~Sportif();     /// cf.    virtual string toString()
                                /// le destructeur DOIT aussi �tre: virtual
        // ENCAPSULATION : nom, prenom
        string getNom() { return nom; }
        void setNom(string val) { nom = val; }

        string getPrenom() { return prenom; }
        void setPrenom(string val) { prenom = val; }

        unsigned short int getAnneeNaissance() { return anneeNaissance; }
        void setAnneeNaissance(unsigned short int val) { anneeNaissance = val; }  

        unsigned short int getAge();      

        // METHODES USUELLES : toString
        virtual string toString();    // m�thodes sp�cialis�e, donc : virtual

        // METHODES SPECIFIQUES : -non-
};

#endif // SPORTIF_H