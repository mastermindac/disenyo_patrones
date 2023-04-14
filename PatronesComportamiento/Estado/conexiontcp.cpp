#include "conexiontcp.h"
#include "PatronesComportamiento/Estado/tcpcerrada.h"
#include <iostream>

ConexionTCP::ConexionTCP()
{
    std::cout << "Nueva conexion\n";
    std::cout << "Conexion cerrada\n";

    this->_estado = TCPCerrada::Instancia();
}

void ConexionTCP::AbrirPasiva(){
    this->_estado->AbrirPasiva(this);
}
