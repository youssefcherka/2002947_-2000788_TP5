// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "PartitionNumerique.h"


TEST_CASE( "Tests pour la classe PartitionNumerique" ) {
    PartitionNumerique* test1 = PartitionNumerique::getInstance();
    PartitionNumerique* test2 = PartitionNumerique::getInstance();
    REQUIRE(test1 == test2);
}
