#include "manejadorayuda.h"

ManejadorAyuda::ManejadorAyuda(ManejadorAyuda* m,Tema t)
{
    this->_tema=t;
    this->_sucesor=m;
}

bool ManejadorAyuda::TieneAyuda(){
    return this->_tema!=SIN_TEMA_AYUDA;
}

void ManejadorAyuda::ManejarAyuda(){
    if(this->_sucesor!=0){
        this->_sucesor->ManejarAyuda();
    }
}

std::string ManejadorAyuda::TemaAyuda(){
    switch (this->_tema) {
    case SIN_TEMA_AYUDA:
        return "SIN TEMA";
        break;
    case TEMA_APLICACION:
        return "APLICACION";
        break;
    case TEMA_IMPRESION:
        return "IMPRESION";
        break;
    case TEMA_FUNCIONAMIENTO:
        return "/*FUNCIONAMIENTO*/";
        break;
    default:
        break;
    }

}
