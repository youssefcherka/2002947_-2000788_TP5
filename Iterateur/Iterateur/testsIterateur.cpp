#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "IterateurConcret.h"
#include "Fichier.h"
#include <algorithm>

TEST_CASE("La methode getPrenom a reussi", "[Fichier]")
{
	Fichier premierFichier("Hugo", "Victor", 80);
	REQUIRE(premierFichier.getNom() == "Hugo");
}

TEST_CASE("L'iterateur fonctionne", "[IterateurConcret]")
{
	IterateurConcret iterateur;
	Fichier fichierN1("Frederic", "Chopin", 40);
	iterateur.ajouterFichier(fichierN1);
	Fichier fichierN2("Aretha", "Franklin", 60);
	iterateur.ajouterFichier(fichierN2);
	Fichier fichierN3("John", "Lennon", 18);
	iterateur.ajouterFichier(fichierN3);
	REQUIRE(iterateur.debut()->getPrenom() == "Chopin");
}

TEST_CASE("L'iterateur suivant", "[IterateurConcret]")
{
	IterateurConcret iterateur;
	Fichier fichierN1("Frederic", "Chopin", 40);
	iterateur.ajouterFichier(fichierN1);
	Fichier fichierN2("Aretha", "Franklin", 60);
	iterateur.ajouterFichier(fichierN2);
	Fichier fichierN3("John", "Lennon", 18);
	iterateur.ajouterFichier(fichierN3);
	auto it = iterateur.debut();
	REQUIRE(iterateur.suivant(it)->getPrenom() == "Franklin");
}