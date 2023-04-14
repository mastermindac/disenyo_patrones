#ifndef TCPCERRADA_H
#define TCPCERRADA_H

#include "estadotcp.h"

class TCPCerrada : public EstadoTCP
{
public:
    static EstadoTCP* Instancia();

    void AbrirPasiva(ConexionTCP* conn);

protected:
    TCPCerrada();

private:
    static EstadoTCP* _instancia;
};

#endif // TCPCERRADA_H
