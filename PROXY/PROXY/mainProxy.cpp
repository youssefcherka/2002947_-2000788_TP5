#include <iostream>
#include "Performance.h"
#include "ProxyPerformance.h"
#include "InterfacePerformance.h"
#include <memory>

int main()
{
    Performance performance;
    ProxyPerformance pPerformance(performance);
    pPerformance.accesLancerEnregistrement();
    pPerformance.accesLireEnregistrement();
}