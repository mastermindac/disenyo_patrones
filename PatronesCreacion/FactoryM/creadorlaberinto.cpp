#include "creadorlaberinto.h"
#include "PatronesCreacion/Laberinto/puerta.h"

CreadorLaberinto::CreadorLaberinto()
{

}

Laberinto* CreadorLaberinto::FabricarLaberinto(){
    Laberinto* unLaberinto = new Laberinto();


    Habitacion* habitacion1 = new Habitacion(1);
    unLaberinto->AnyadirHabitacion(habitacion1);
    Habitacion* habitacion2 = new Habitacion(2);
    unLaberinto->AnyadirHabitacion(habitacion2);

    Puerta* laPuerta = new Puerta(habitacion1,habitacion2);

    return unLaberinto;
}
