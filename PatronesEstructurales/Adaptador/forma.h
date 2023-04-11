#ifndef FORMA_H
#define FORMA_H


#include "PatronesEstructurales/Adaptador/manipulador.h"
#include "PatronesEstructurales/Compuesto/punto.h"

class Forma
{
public:
    Forma();

    virtual void CajaLimitrofe(Punto* inferiorIzquierdo,Punto* superiorDerecho){};

    virtual Manipulador* CrearManipulador() {};
    virtual bool EstaVacia(){};
};

#endif // FORMA_H
