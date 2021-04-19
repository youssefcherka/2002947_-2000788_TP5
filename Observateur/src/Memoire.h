#pragma once


#include <iostream>

#include "Observateur.h"

class Memoire: public Observateur{
    public:
        void stocker(){
            std::cout << "Stocker la performance "
        }

        void mettreAJour() override{
            if (connexionStable == false)
            {
                stocker();
            }
            
        }



};



