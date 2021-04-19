#pragma once

#include <vector>
#include <iterator>
#include <iostream>
#include "Fichier.h"

//Classe abstraite de l'interface de l'iterateur
class InterfaceIterateur
{
public:
	virtual vector<Fichier>::iterator debut() = 0;
	virtual vector<Fichier>::iterator finDeIteration() = 0;
	virtual vector<Fichier>::iterator suivant(vector<Fichier>::iterator iterateur) = 0;
};
