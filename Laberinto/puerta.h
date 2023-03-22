#ifndef PUERTA_H
#define PUERTA_H

#include "habitacion.h"
#include "lugardelmapa.h"

class Puerta : public LugarDelMapa
{
public:
    //Una puerta comunica dos habitaciones
    Puerta(Habitacion* habitacion1, Habitacion* habitacion2);

    //Funcion que implementaría la lógica de qué hacer dependiendo del lado sobre el que se quiera actuar
    void Entrar();

private:
    Habitacion* _habitacion1;
    Habitacion* _habitacion2;

};

#endif // PUERTA_H
