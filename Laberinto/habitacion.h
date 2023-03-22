#ifndef HABITACION_H
#define HABITACION_H

#include "lugardelmapa.h"

class Habitacion : public LugarDelMapa
{
public:
    Habitacion(int numHabitacion);

    //Funcion que devuelve el lado sobre la direccion aplicada
    LugarDelMapa* ObtenerLado(Direccion direcc);
    //Funcion que define qué habrá en cada direccion
    void EstablecerLado(Direccion direcc,LugarDelMapa* tipoLugar);
    //Funcion que implementaría la lógica de qué hacer dependiendo del lado sobre el que se quiera actuar
    void Entrar();

private:
    LugarDelMapa* _lados[4];
    int _contLado;
    int _numeroHabitacion;
};

#endif // HABITACION_H
