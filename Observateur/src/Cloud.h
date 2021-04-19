#pragma once


#include <iostream>

#include "Observateur.h"

class Cloud: public Observateur{
    public:
        void synchroniser(){
            std::cout << "Stocker la performance ";
        }

        void mettreAJour() override{
            if (connexionStable)
            {
                synchroniser();
            }         
        }



};

