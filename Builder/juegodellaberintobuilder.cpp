#include "juegodellaberintobuilder.h"
#include "Builder/constructorlaberintoestandar.h"
#include <iostream>

JuegoDelLaberintoBuilder::JuegoDelLaberintoBuilder()
{
    std::cout << "--------------------------------------\n";
    std::cout << "CREANDO UN NUEVO LABERINTO CON BUILDER\n";
    std::cout << "--------------------------------------\n";
    ConstructorLaberintoEstandar *cLaberinto=new ConstructorLaberintoEstandar();
    cLaberinto->ConstruirLaberinto();
    cLaberinto->ConstruirHabitacion(1);
    cLaberinto->ConstruirHabitacion(2);
    cLaberinto->ObtenerLaberinto();
}
