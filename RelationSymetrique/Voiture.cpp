/**
 * @file Voiture.cpp
 * @author Robin Alonzo
 * @brief Definition de la classe Voiture
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Voiture.h"

//***VOITURE***
//Constructeur

Voiture::Voiture(string marqueSaisi, string plaqueSaisi) {
    this->marque = marqueSaisi;
    this->plaque = plaqueSaisi;
}

Voiture::~Voiture (){
    cout << "  De la voiture " << getPlaque() << ", ";
}

string Voiture::getPlaque()
{
    return this->plaque;
}

string Voiture::getMarque()
{
    return this->marque;
}

void Voiture::setMarque(string marqueSaisi)
{
    this->marque = marqueSaisi;
}

void Voiture::setPlaque(string plaqueSaisi)
{
    this->plaque = plaqueSaisi;
}

string Voiture::toString() 
{
    string message;
    message = getPlaque() + " " + getMarque();
    return message;
}