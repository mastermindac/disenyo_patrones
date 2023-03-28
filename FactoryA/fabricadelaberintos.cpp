#include "fabricadelaberintos.h"

FabricaDeLaberintos::FabricaDeLaberintos()
{

}
Laberinto* FabricaDeLaberintos::HacerLaberinto(){
    return new Laberinto();
};

Pared* FabricaDeLaberintos::HacerPared(){
    return new Pared();
};

Habitacion* FabricaDeLaberintos::HacerHabitacion(int n){
    return new Habitacion(n);
};

Puerta* FabricaDeLaberintos::HacerPuerta(Habitacion* h1,Habitacion* h2){
    return new Puerta(h1,h2);
};
