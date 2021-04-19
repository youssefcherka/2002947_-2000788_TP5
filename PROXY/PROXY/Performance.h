#pragma once
#include <iostream>
#include "InterfacePerformance.h"

using namespace std;
class Performance : public InterfacePerformance
{
private:
    int temps = 0;
    int minuterie = 0;
public:
    Performance() = default;
    int getTemps() { return temps; };
    void lireEnregistrement() const;
    void lancerEnregistrement();
};


void Performance::lancerEnregistrement()
{
    minuterie = 0;
    cout << "Saisir la duree de votre enregistrement en seconde : " << endl;
    cin >> temps; //Demande la duree de la performance
    cout << "L'enregistrement est lancee ! A vous de jouer " << endl;
    while (minuterie != temps) //Lancement de la minuterie
    {
        minuterie++;
    }
    cout << endl;
    cout << "Fin de l'enregistrement ! " << endl;
    cout << "Duree : " << temps << endl; //Affiche le temps de la performance

}

//Methode qui permet a l'eleve de lire son enregistrement
void Performance::lireEnregistrement() const
{
    cout << "Vous pouvez a present lire votre enregistrement" << endl;
}
