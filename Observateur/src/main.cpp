#include <iostream>
#include "Performance.h"
#include "Memoire.h"
#include "Cloud.h"



int main() {
    Performance performance;
    Memoire memoire;
    Cloud cloud;
    performance.ajouterObservateur(&cloud);
    performance.ajouterObservateur(&memoire);
    performance.finirPerformance();
    return 0;
    // Soleil soleil;
    // ReveilleMatin reveilleMatin;
    // Coq coq;
    // soleil.ajouterObservateur(&reveilleMatin);
    // soleil.ajouterObservateur(&coq);
    // soleil.seLever();

}