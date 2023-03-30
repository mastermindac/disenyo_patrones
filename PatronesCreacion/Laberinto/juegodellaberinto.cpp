#include "juegodellaberinto.h"
#include "laberinto.h"
#include "pared.h"
#include "puerta.h"

#include <iostream>


JuegoDelLaberinto::JuegoDelLaberinto()
{
    std::cout << "--------------------------\n";
    std::cout << "CREANDO UN NUEVO LABERINTO\n";
    std::cout << "--------------------------\n";

     Laberinto* unLaberinto = new Laberinto();


     Habitacion* habitacion1 = new Habitacion(1);
     Habitacion* habitacion2 = new Habitacion(2);

     Puerta* laPuerta = new Puerta(habitacion1,habitacion2);

     habitacion1->EstablecerLado(habitacion1->Norte,new Pared);
     habitacion1->EstablecerLado(habitacion1->Sur,new Pared);
     habitacion1->EstablecerLado(habitacion1->Oeste,new Pared);
     habitacion1->EstablecerLado(habitacion1->Este,laPuerta);

     habitacion2->EstablecerLado(habitacion1->Norte,new Pared);
     habitacion2->EstablecerLado(habitacion1->Sur,new Pared);
     habitacion2->EstablecerLado(habitacion1->Este,new Pared);
     habitacion2->EstablecerLado(habitacion1->Oeste,laPuerta);
}
