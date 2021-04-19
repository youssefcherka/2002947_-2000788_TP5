#include "PartitionNumerique.h"



PartitionNumerique* PartitionNumerique::Instance_ = nullptr;


PartitionNumerique *PartitionNumerique::getInstance()
{
    /**
     * This is a safer way to create an instance. instance = new Singleton is
     * dangeruous in case two instance threads wants to access at the same time
     */
    if(Instance_ ==nullptr){
        Instance_ = new PartitionNumerique;
    }
    return Instance_;
}
