#pragma once
#include <iostream>
#include <string>
using namespace std;

//Classe abstraite qui represente l'interface du fichier
class InterfaceStructureFichier
{
public:
	string getNom() const { return nom_; };
	string getPrenom() const { return prenom_; };
	virtual void Progression()= 0;

private:
	string nom_;
	string prenom_;
	int note_;

};
