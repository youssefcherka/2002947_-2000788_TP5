#pragma once


class Observateur {

    public:
        virtual void mettreAJour() = 0;
        virtual ~Observateur() = default;
        bool connexionStable;
};
