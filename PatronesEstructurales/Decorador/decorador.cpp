#include "decorador.h"
#include <iostream>

Decorador::Decorador(ComponenteVisual* cVisual)
{
    this->_componente=cVisual;
}

void Decorador::Dibujar(){
    std::cout << "Dibujamos desde el Decorador\n";
    this->_componente->Dibujar();
}
