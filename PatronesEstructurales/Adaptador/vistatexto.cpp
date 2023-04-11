#include "vistatexto.h"

VistaTexto::VistaTexto(int x,int y,int ancho,int alto)
{
    this->_x=x;
    this->_y=y;
    this->_ancho=ancho;
    this->_alto=alto;
}

void VistaTexto::ObtenerOrigen(int* x, int* y){
    *x=this->_x;
    *y=this->_y;
}

void VistaTexto::ObtenerArea(int* ancho, int* alto){
    *ancho=this->_ancho;
    *alto=this->_alto;
}
