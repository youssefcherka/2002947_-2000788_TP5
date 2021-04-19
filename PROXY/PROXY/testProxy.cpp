#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Performance.h"
#include "ProxyPerformance.h"
#include <algorithm>

TEST_CASE("La methode getTemps fonctionne ", "[Performance]")
{
	//Pour une performance qui dure 23 secondes
	Performance performance;
	performance.lancerEnregistrement();
	REQUIRE(performance.getTemps() == 23);
}

TEST_CASE("La methode verificationAcces fonctionne ", "[ProxyPerformance]")
{
	//Pour une performance qui dure 23 secondes
	ProxyPerformance proxyPerformance;
	bool vrai = proxyPerformance.verificationAcces();
	REQUIRE(vrai == 1);
}