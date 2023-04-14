#ifndef TCPESCUCHA_H
#define TCPESCUCHA_H

#include "estadotcp.h"

class TCPEscucha : public EstadoTCP
{
public:

    void AbrirActiva(ConexionTCP* conn);

    static EstadoTCP* Instancia();
protected:
    TCPEscucha();
private:
    static EstadoTCP* _instancia;
};

#endif // TCPESCUCHA_H
