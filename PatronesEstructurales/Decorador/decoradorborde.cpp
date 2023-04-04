#include "decoradorborde.h"
#include <iostream>

DecoradorBorde::DecoradorBorde(ComponenteVisual* componente,int borde):Decorador(componente)
{
    this->_ancho=borde;
}

void DecoradorBorde::Dibujar(){
    std::cout << "Dibujamos desde el Decorador Borde\n";
    Decorador::Dibujar();
    DibujarBorde(this->_ancho);
}

void DecoradorBorde::DibujarBorde(int borde){

}
