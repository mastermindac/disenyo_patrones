#include "componentevisualc.h"
#include <iostream>

ComponenteVisualC::ComponenteVisualC(std::string nombre,int x,int y)
{
    this->_nombre=nombre;
    this->_x=x;
    this->_y=y;
}

void ComponenteVisualC::Dibujar(){
    std::cout << "Dibujamos el componente: " + this->_nombre + "\n";
}

