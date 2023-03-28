#ifndef FABRICADELABERINTOS_H
#define FABRICADELABERINTOS_H


#include "Laberinto/laberinto.h"
#include "Laberinto/pared.h"
#include "Laberinto/puerta.h"
class FabricaDeLaberintos
{
public:
    FabricaDeLaberintos();

    virtual Laberinto* HacerLaberinto();
    virtual Pared* HacerPared();
    virtual Habitacion* HacerHabitacion(int n);
    virtual Puerta* HacerPuerta(Habitacion* h1,Habitacion* h2);

};

#endif // FABRICADELABERINTOS_H
