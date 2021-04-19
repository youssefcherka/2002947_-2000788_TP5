#pragma once
#include <iostream>

//Classe abstraite qui represente l'interface de la performance de l'eleve
class InterfacePerformance
{
public:
    virtual void lireEnregistrement() const = 0;
    virtual void lancerEnregistrement() = 0;
};
