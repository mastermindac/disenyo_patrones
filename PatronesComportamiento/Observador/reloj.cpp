#include "reloj.h"
#include <iostream>
#include <ctime>

Reloj::Reloj()
{
    this->_hora=0;
    this->_minuto=0;
    this->_segundo=0;
}

void Reloj::Pulso(){
    const std::time_t now = std::time(nullptr) ; // Obtenemos la hora en este momento
    const std::tm calendar_time = *std::localtime( std::addressof(now) ) ; //La convertimos de acuerdo a la hora local
    _hora = calendar_time.tm_hour;
    _minuto = calendar_time.tm_min;
    _segundo = calendar_time.tm_sec;

    std::cout<< "Pulso lanzado\n";
    this->Notificar();
}

int Reloj::ObtenerHora(){
    return this->_hora;
}

int Reloj::ObtenerMinuto(){
    return this->_minuto;
}

int Reloj::ObtenerSegundo(){
    return this->_segundo;
}

