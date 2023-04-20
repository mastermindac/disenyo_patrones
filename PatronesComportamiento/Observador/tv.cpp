#include "tv.h"
#include <iostream>

Tv::Tv(Reloj *s)
{
    this->_relojCentral=s;
}

void Tv::Actualizar(Sujeto *s){
    if(s==_relojCentral){
        std::cout<< "Hora actualizada: "<<_relojCentral->ObtenerHora()<<":"<<_relojCentral->ObtenerMinuto()<<"\n";
    }
}
