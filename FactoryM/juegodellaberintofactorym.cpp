#include "juegodellaberintofactorym.h"
#include "FactoryM/creadorlaberinto.h"
#include <iostream>

JuegoDelLaberintoFactoryM::JuegoDelLaberintoFactoryM()
{
    std::cout << "---------------------------------------\n";
    std::cout << "CREANDO UN NUEVO LABERINTO CON FACTORYM\n";
    std::cout << "---------------------------------------\n";

    CreadorLaberinto *cLaberinto=new CreadorLaberinto();
    cLaberinto->FabricarLaberinto();
}
