#ifndef CONEXIONTCP_H
#define CONEXIONTCP_H


class EstadoTCP;
class ConexionTCP
{
public:
    ConexionTCP();

    void AbrirPasiva();

private:
    EstadoTCP* _estado;
};

#endif // CONEXIONTCP_H
