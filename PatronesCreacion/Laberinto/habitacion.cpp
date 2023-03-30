#include "habitacion.h"
#include <iostream>

Habitacion::Habitacion(int numHabitacion)
{
    this->_contLado=0;
    this->_numeroHabitacion = numHabitacion;
    std::cout << "CREANDO NUEVA HABITACION " << this->_numeroHabitacion << "\n";
}

void Habitacion::Entrar(){

}

LugarDelMapa*  Habitacion::ObtenerLado(Direccion direcc){

}

void  Habitacion::EstablecerLado(Direccion direcc,LugarDelMapa* tipoLugar){
    this->_lados[this->_contLado]=tipoLugar;
    this->_lados[this->_contLado]->posicion=direcc;
    this->_contLado++;
}
