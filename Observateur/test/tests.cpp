// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/Soleil.h"
#include <string>


TEST_CASE( "Tests pour la classe Soleil", "[Soleil]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests
    std::string expected = "Wouhou le soleil se lève!\n";
    Soleil soleil;
    soleil.seLever();
    std::string text = buffer.str();
    REQUIRE(text == expected);

    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);

}












