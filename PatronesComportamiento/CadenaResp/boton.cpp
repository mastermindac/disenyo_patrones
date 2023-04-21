#include "boton.h"
#include <iostream>

Boton::Boton(ManejadorAyuda* m,Tema t) : Util(m,t)
{

}

void Boton::ManejarAyuda(){
    if(this->TieneAyuda()){
        std::cout << "[BOTON] Tema de ayuda: " << this->TemaAyuda();
    }else{
        ManejadorAyuda::ManejarAyuda();
    }
}
