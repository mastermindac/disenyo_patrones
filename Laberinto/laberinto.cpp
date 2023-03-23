#include "laberinto.h"

Laberinto::Laberinto()
{
    this->_numHabitaciones=0;
}
void Laberinto::AnyadirHabitacion (Habitacion* habitacion){
    this->_habitaciones[this->_numHabitaciones]=habitacion;
    this->_numHabitaciones++;
}

Habitacion* Laberinto::NumeroDeHabitacion(int numHabitacion){
    return this->_habitaciones[this->_numHabitaciones];
}
