#pragma once

#include <list>
#include "Observateur.h"

class Observable {
    std::list<Observateur*> observateurs;

    public:
        void ajouterObservateur(Observateur* c) { observateurs.push_back(c); }
        void effacerObservateur(Observateur* c) { observateurs.remove(c); }
        void notifier() { for (auto&o : observateurs) o->mettreAJour();}
        virtual ~Observable() = 0;
};

Observable::~Observable() = default;



