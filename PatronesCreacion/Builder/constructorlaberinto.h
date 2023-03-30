#ifndef CONSTRUCTORLABERINTO_H
#define CONSTRUCTORLABERINTO_H

#include "PatronesCreacion/Laberinto/laberinto.h"

class ConstructorLaberinto
{
public:
    ConstructorLaberinto();

    //Inicializar mapa
    virtual void ConstruirLaberinto(){}

    //Partes
    virtual void ConstruirHabitacion(int habitacion){}
    virtual void ConstruirPuerta(int h1, int h2){}
    virtual void Pared(int h1){}

    virtual Laberinto* ObtenerLaberinto(){}
};

#endif // CONSTRUCTORLABERINTO_H
