#ifndef CREADORLABERINTO_H
#define CREADORLABERINTO_H


#include "Laberinto/laberinto.h"
class CreadorLaberinto
{
public:
    CreadorLaberinto();

    virtual Laberinto* FabricarLaberinto();

};

#endif // CREADORLABERINTO_H
