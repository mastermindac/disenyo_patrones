#ifndef TCPESTABLECIDA_H
#define TCPESTABLECIDA_H

#include "estadotcp.h"

class TCPEstablecida : public EstadoTCP
{
public:

    void Transmitir(ConexionTCP* conn){};
    void Cerrar(ConexionTCP* conn);

    static EstadoTCP* Instancia();
protected:
    TCPEstablecida();
private:
    static EstadoTCP* _instancia;
};

#endif // TCPESTABLECIDA_H
