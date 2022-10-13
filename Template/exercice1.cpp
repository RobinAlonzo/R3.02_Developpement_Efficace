/**
 * @file exercice1.cpp
 * @author Robin.A
 * @brief list
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <list>
#include <iostream>
#include <map>

using namespace std;

void listeSimple()
{
    //Variables
    typedef list<string> ListeDeStrings; //Utilisaton de la class list
    ListeDeStrings uneListeS; //Création d'une liste de string

    //Insertion des valeurs
    uneListeS.push_back(ListeDeStrings::value_type("Pantxika"));
    uneListeS.push_back(ListeDeStrings::value_type("Yann"));
    uneListeS.push_back(ListeDeStrings::value_type("Philippe"));
    uneListeS.push_back(ListeDeStrings::value_type("Patrick"));

    //Création d'un pointeur
    ListeDeStrings::iterator unPointeur;

    //Initialisation au début du pointeur
    unPointeur = uneListeS.begin();

    //Parcours de la liste
    while (unPointeur != uneListeS.end())
    {
        cout << *unPointeur << endl;
        unPointeur ++;
    }
}

void listePairs()
{
        //Definition des types
    typedef pair<string,string> Paire;
    typedef list<Paire> listeP;

    //Variables
    listeP uneListeP;


    //Insertion des éléments dans notre liste
    uneListeP.push_back(listeP::value_type("Pantxika","06.01.01.01.01"));
    uneListeP.push_back(listeP::value_type("Patrick","06.01.01.01.01"));
    uneListeP.push_back(listeP::value_type("Yann","06.01.01.01.01"));

    //Création d'un itérateur
    listeP::iterator unPointeur;

    //Initialisation de l'itérateur au début
    unPointeur = uneListeP.begin();

    //Parcours de la liste
    while (unPointeur != uneListeP.end())
    {
        cout << unPointeur->first << "-" << unPointeur->second << endl;
        unPointeur ++;
    }
}

void listMap()
{
    //Définitions des types

    typedef map<string, string> Annuaire;

    //Variables
    Annuaire unAnnuaire;

    unAnnuaire.insert(Annuaire::value_type('Patrick', "078047836760"));





}
int main(void)
{
    //Appel de listeSimple
    cout << "Procédure utilisant une liste simple" << endl;
    listeSimple();

    //Appel de listPair
    cout << "Procédure utilisant une liste pair" << endl;
    listePairs();
    

    return 0;
}
