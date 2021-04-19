#include <iostream>
#include "SingletonMeyers.h"
#include <assert.h>

#include "PartitionNumerique.h"

int main() {

    PartitionNumerique* test1 = PartitionNumerique::getInstance();
    PartitionNumerique* test2 = PartitionNumerique::getInstance();
    if (test1 == test2) {
        std::cout << "succes" << std::endl;
    }

    return 0;
}