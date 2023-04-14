#include "tcpescucha.h"
#include "PatronesComportamiento/Estado/tcpestablecida.h"

EstadoTCP* TCPEscucha::_instancia=0;

EstadoTCP* TCPEscucha::Instancia(){
    if(_instancia==0){
        _instancia=new TCPEscucha();
    }
    return _instancia;
}

TCPEscucha::TCPEscucha()
{

}

void TCPEscucha::AbrirActiva(ConexionTCP* conn){
    CambiarEstado(conn,TCPEstablecida::Instancia());
}
