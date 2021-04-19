#pragma once
#include <iostream>
#include "InterfaceIterateur.h"
#include <vector>
#include <iterator>

using namespace std;

class IterateurConcret : public InterfaceIterateur
{
public:
	IterateurConcret() = default;
	vector<Fichier>::iterator debut();
	vector<Fichier>::iterator finDeIteration();
	vector<Fichier>::iterator suivant(vector<Fichier>::iterator iterateur);
	vector<Fichier>::iterator creerIterateur();
	vector<Fichier>::iterator it;
	void ajouterFichier(Fichier& fichier);
	vector<Fichier> structureFichiers;
};

//Methode qui retourne le premier element de la structure de fichiers
vector<Fichier>::iterator IterateurConcret::debut()
{
	it = structureFichiers.begin();
	return it;
}

//Methode qui indique la fin de la structure de fichiers
vector<Fichier>::iterator IterateurConcret::finDeIteration()
{
	it = structureFichiers.end();
	return it;
}

//Methode qui permet d'acceder au prochain eleve
vector<Fichier>::iterator IterateurConcret::suivant(vector<Fichier>::iterator iterateur)
{
	it = ++iterateur;
	return it;
}

//Methode qui permet de lancer l'iterateur
vector<Fichier>::iterator IterateurConcret::creerIterateur()
{
	return structureFichiers.begin();
}

//Methode qui permet d'ajouter les informations et la progression de l'eleve
void IterateurConcret::ajouterFichier(Fichier& fichier)
{
	structureFichiers.push_back(fichier);
}
