#ifndef LABERINTO_H
#define LABERINTO_H

#include "habitacion.h"

class Laberinto
{
public:
    Laberinto();

    //Añadimos habitaciones a nuestro laberinto
    void AnyadirHabitacion (Habitacion* habitacion);
    //Nos devuelve la habitación numero
    Habitacion* NumeroDeHabitacion(int numHabitacion);

private:
    int _numHabitaciones;
    Habitacion* _habitaciones[10];
};

#endif // LABERINTO_H
