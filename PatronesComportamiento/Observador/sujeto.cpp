#include "sujeto.h"

Sujeto::Sujeto()
{
    this->_num_observadores=0;
}

void Sujeto::Adscribir(Observador* observador){
    this->_observadores[this->_num_observadores]=observador;
    this->_num_observadores++;
}

void Sujeto::Quitar(Observador* observador){
    this->_observadores[this->_num_observadores]=0;
    this->_num_observadores--;
}

void Sujeto::Notificar(){
    for (int i = 0; i < this->_num_observadores; ++i) {
        this->_observadores[i]->Actualizar(this);
    }
}
