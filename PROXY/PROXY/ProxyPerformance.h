#include <iostream>
#include <memory>
#include "Performance.h"
using namespace std;

//Controle l'acces de la performance
class ProxyPerformance : public InterfacePerformance
{
public:
    ProxyPerformance(Performance laPerformance);
    ProxyPerformance() = default;
    void lireEnregistrement() const;
    void lancerEnregistrement();
    bool verificationAcces();
    void accesLancerEnregistrement();
    void accesLireEnregistrement();
private:
    shared_ptr<Performance> performance; //pointeur intelligent qui pointe vers la performance de l'eleve
};

 ProxyPerformance::ProxyPerformance(Performance laPerformance)
{
    performance = make_shared<Performance>(laPerformance); //Alloue dynamiquement
}

void ProxyPerformance::lireEnregistrement() const
{

}

void ProxyPerformance::lancerEnregistrement()
{

}
//L'eleve entre son identifants, mot de passe et annee de naissance pour voir acceder au lancement de l'enregistrement et la lecture
bool ProxyPerformance::verificationAcces()
{
    string identifiant, motDePasse;
    int anneeNaissance;
    cout << "Saisir votre identifiant: ";
    cin >> identifiant;
    cout << "Saisir votre mot de passe : ";
    cin >> motDePasse;
    cout << "Saisir votre annee de naissance : ";
    cin >> anneeNaissance;
    if (identifiant == "x" || motDePasse == "x" || anneeNaissance == 0)
    {
        return false;
    }
    return true;
}

void ProxyPerformance::accesLancerEnregistrement()
{
    if (verificationAcces()) //Verification des informations de l'eleve
    {
        performance->lancerEnregistrement(); //on lance l'enregistrement a partir de l'objet performance de type Performance
    }
    else
    {
        cout << "Impossible de lancer l'enregistrement " << endl;
    }
}

void ProxyPerformance::accesLireEnregistrement()
{
    if (verificationAcces()) //Verification des informations de l'eleve
    {
        performance->lireEnregistrement(); //on accede a la lecture de l'enregistrement a partir de l'objet performance de type Performance
    }
    else
    {
        cout << "Impossible de lire l'enregistrement " << endl;
    }
}


