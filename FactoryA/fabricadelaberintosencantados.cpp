#include "fabricadelaberintosencantados.h"
#include "FactoryA/habitacionencantada.h"

FabricaDeLaberintosEncantados::FabricaDeLaberintosEncantados()
{

}

Habitacion* FabricaDeLaberintosEncantados::HacerHabitacion(int n)
{
    return new HabitacionEncantada(n,this->SIN_HECHIZO);
}
