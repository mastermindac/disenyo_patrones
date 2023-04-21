#include "dialogo.h"
#include <iostream>

Dialogo::Dialogo(ManejadorAyuda* m,Tema t):Util(m,t)
{

}

void Dialogo::ManejarAyuda(){
    if(this->TieneAyuda()){
        std::cout << "[DIALOGO] Tema de ayuda: " << this->TemaAyuda();
    }else{
        ManejadorAyuda::ManejarAyuda();
    }
}
