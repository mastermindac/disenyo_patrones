#include "tcpestablecida.h"
#include "PatronesComportamiento/Estado/tcpescucha.h"


EstadoTCP* TCPEstablecida::_instancia=0;

EstadoTCP* TCPEstablecida::Instancia(){
    if(_instancia==0){
        _instancia=new TCPEstablecida();
    }
    return _instancia;
}
TCPEstablecida::TCPEstablecida()
{

}

void TCPEstablecida::Cerrar(ConexionTCP* conn)
{
    CambiarEstado(conn,TCPEscucha::Instancia());
}

