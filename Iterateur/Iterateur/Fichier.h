#pragma once
#include<iostream>
#include <string>
#include "InterfaceStructureFichier.h"
using namespace std;
class Fichier : public InterfaceStructureFichier
{
public:
	Fichier(string nom, string prenom, int note);
	Fichier() = default;
	string getNom() const { return nom_; };
	string getPrenom() const { return prenom_; };
	int getNote() const { return note_; };
	void Progression() override;

private:
	string nom_;
	string prenom_;
	int note_;

};

//Constructeur d'un fichier. Un fichier comporte un nom, un prenom et une note
Fichier::Fichier(string nom, string prenom, int note)
{
	nom_ = nom;
	prenom_ = prenom;
	note_ = note;
}

//Fonction qui evalue la progression de chaque eleve
void Fichier::Progression()
{
	if (note_ < 20)
	{
		cout << "Objectifs partiellement atteints. En progression." << endl; 
	}
	else if (note_ > 70)
	{
		cout << "Objectifs atteints" << endl; //Note minimale pour atteindre les objectifs est de 70
	}
	else
	{
		cout << "Objectifs atteints. Quelques erreurs" << endl;
	}

}

