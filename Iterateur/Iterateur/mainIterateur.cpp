#include <iostream>
#include"Fichier.h"
#include "IterateurConcret.h"

int main()
{
	//Fichier qui contient le profil de 4 eleves
	IterateurConcret iterateur;
	Fichier fichierN1("Chopin", "Frederique", 40);
	iterateur.ajouterFichier(fichierN1);
	Fichier fichierN2("Franklin", "Aretha", 60);
	iterateur.ajouterFichier(fichierN2);
	Fichier fichierN3("Lennon", "John", 18);
	iterateur.ajouterFichier(fichierN3);
	Fichier fichierN4("Armstrong", "Louis", 80);
	iterateur.ajouterFichier(fichierN4);
	auto it = iterateur.creerIterateur();

	for (it = iterateur.debut(); it != iterateur.finDeIteration(); ++it)
	{
		cout << it->getNom() << endl;

	}
	
	return 0;
}