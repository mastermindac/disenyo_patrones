#include "aplicacion.h"
#include <iostream>

Aplicacion::Aplicacion(Tema t):ManejadorAyuda(0,t)
{

}

void Aplicacion::ManejarAyuda(){
    if(this->TieneAyuda()){
        std::cout << "[APLICACION] Tema de ayuda: " << this->TemaAyuda();
    }
}
