#include "ventanab.h"
#include <iostream>

VentanaB::VentanaB(Display *display)
{
    this->_implDisplay=display;
}

void VentanaB::DibujarContenido(){
    //Se implemetaría el uso del dibujo del contenido a partir de _implDisplay
    this->_implDisplay->EstablecerOrigen(new Punto("p1",0,0));

    std::cout <<"\nDibujamos el contenido del display\n";
}/**/

Display* VentanaB::ObtenerDisplay(){
    return this->_implDisplay;
}
