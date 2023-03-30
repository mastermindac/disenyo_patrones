#include "juegodellaberintofactorya.h"
#include "Laberinto/habitacion.h"
#include "Laberinto/laberinto.h"
#include "Laberinto/puerta.h"
#include <iostream>

JuegoDelLaberintoFactoryA::JuegoDelLaberintoFactoryA()
{

}

Laberinto* JuegoDelLaberintoFactoryA::CrearLaberinto(FabricaDeLaberintos* fabrica){

    std::cout << "---------------------------------------\n";
    std::cout << "CREANDO UN NUEVO LABERINTO CON FACTORYA\n";
    std::cout << "---------------------------------------\n";

    Laberinto* laberinto=fabrica->HacerLaberinto();
    Habitacion* h1=fabrica->HacerHabitacion(1);
    Habitacion* h2=fabrica->HacerHabitacion(2);

    Puerta* p=fabrica->HacerPuerta(h1,h2);

    return laberinto;
}
