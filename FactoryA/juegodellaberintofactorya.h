#ifndef JUEGODELLABERINTOFACTORYA_H
#define JUEGODELLABERINTOFACTORYA_H


#include "FactoryA/fabricadelaberintos.h"
#include "Laberinto/laberinto.h"
class JuegoDelLaberintoFactoryA
{
public:
    JuegoDelLaberintoFactoryA();

    Laberinto* CrearLaberinto(FabricaDeLaberintos* fabrica);
};

#endif // JUEGODELLABERINTOFACTORYA_H
