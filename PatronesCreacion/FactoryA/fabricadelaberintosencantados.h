#ifndef FABRICADELABERINTOSENCANTADOS_H
#define FABRICADELABERINTOSENCANTADOS_H

#include "fabricadelaberintos.h"

class FabricaDeLaberintosEncantados : public FabricaDeLaberintos
{
public:
    //Definicion de Hechizos
    enum Hechizo {SIN_HECHIZO, INVISIBLE, FUEGO, BLOQUEO};
    FabricaDeLaberintosEncantados();

    Habitacion* HacerHabitacion(int n);
};

#endif // FABRICADELABERINTOSENCANTADOS_H
