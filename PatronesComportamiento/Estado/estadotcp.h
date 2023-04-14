#ifndef ESTADOTCP_H
#define ESTADOTCP_H


#include "PatronesComportamiento/Estado/conexiontcp.h"
class EstadoTCP
{
public:
    EstadoTCP();

    //Acciones dentro de las comunicaciones
    virtual void Transmitir(ConexionTCP* conn){};
    virtual void AbrirActiva(ConexionTCP* conn){};
    virtual void AbrirPasiva(ConexionTCP* conn){};
    virtual void Cerrar(ConexionTCP* conn){};

protected:
    virtual void CambiarEstado(ConexionTCP* conn,EstadoTCP* e){};
};

#endif // ESTADOTCP_H
