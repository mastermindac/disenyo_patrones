#ifndef CONSTRUCTORLABERINTOESTANDAR_H
#define CONSTRUCTORLABERINTOESTANDAR_H

#include "constructorlaberinto.h"

class ConstructorLaberintoEstandar : public ConstructorLaberinto
{
public:
    ConstructorLaberintoEstandar();

    void ConstruirLaberinto();

    void ConstruirHabitacion(int habitacion);
    void ConstruirPuerta(int h1, int h2);

    Laberinto* ObtenerLaberinto();

private:
    Laberinto *_laberintoActual;

};

#endif // CONSTRUCTORLABERINTOESTANDAR_H
