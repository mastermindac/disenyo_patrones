#ifndef JUEGODELLABERINTOFACTORYA_H
#define JUEGODELLABERINTOFACTORYA_H


#include "PatronesCreacion/FactoryA/fabricadelaberintos.h"
#include "PatronesCreacion/Laberinto/laberinto.h"
class JuegoDelLaberintoFactoryA
{
public:
    JuegoDelLaberintoFactoryA();

    Laberinto* CrearLaberinto(FabricaDeLaberintos* fabrica);
};

#endif // JUEGODELLABERINTOFACTORYA_H
