#include "tcpcerrada.h"
#include <iostream>
#include "PatronesComportamiento/Estado/tcpescucha.h"

EstadoTCP* TCPCerrada::_instancia=0;

EstadoTCP* TCPCerrada::Instancia(){
    if(_instancia==0){
        _instancia=new TCPCerrada();
    }
    return _instancia;
}

TCPCerrada::TCPCerrada()
{

}

void TCPCerrada::AbrirPasiva(ConexionTCP* conn){
    std::cout << "Conexion Escucha Pasiva\n";
    CambiarEstado(conn,TCPEscucha::Instancia());
}
