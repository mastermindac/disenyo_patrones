#include "constructorlaberintoestandar.h"
#include "Laberinto/puerta.h"

ConstructorLaberintoEstandar::ConstructorLaberintoEstandar()
{

}

void ConstructorLaberintoEstandar::ConstruirLaberinto()
{
    this->_laberintoActual=new Laberinto();
}

void ConstructorLaberintoEstandar::ConstruirHabitacion(int habitacion){
    Habitacion *h=new Habitacion(habitacion);
    this->_laberintoActual->AnyadirHabitacion(h);
}

void ConstructorLaberintoEstandar::ConstruirPuerta(int h1, int h2){
    Puerta *p=new Puerta(this->_laberintoActual->NumeroDeHabitacion(h1),this->_laberintoActual->NumeroDeHabitacion(h2));
    Habitacion *h=this->_laberintoActual->NumeroDeHabitacion(h1);
    h->EstablecerLado(h->Este,p);
}

Laberinto* ConstructorLaberintoEstandar::ObtenerLaberinto(){
    return this->_laberintoActual;
}

