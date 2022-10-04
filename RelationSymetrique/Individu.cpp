/**
 * @file Individu.cpp
 * @author Robin Alonzo
 * @brief Defintion de la class voiture
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Individu.h"

Individu::Individu(string prenomSaisi, string nomSaisi)
{
    this->nom = nomSaisi;
    this->prenom = prenomSaisi;
}

Individu::~Individu()
{
    cout << "  De l'individu " << getNom() << ", ";
}

string Individu::getNom()
{
    return this->nom;
}

string Individu::getPrenom()
{
    return this->prenom;
}

void Individu::setNom(string nomSaisi)
{
    this->nom = nomSaisi;
}

void Individu::setPrenom(string prenomSaisi)
{
    this->prenom = prenomSaisi;
}

string Individu::toString()
{
    string message;
    message = getNom() + " " + getPrenom();
    return message;
}