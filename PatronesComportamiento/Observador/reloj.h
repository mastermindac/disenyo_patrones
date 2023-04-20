#ifndef RELOJ_H
#define RELOJ_H

#include "sujeto.h"

class Reloj : public Sujeto
{
public:
    Reloj();

    int ObtenerHora();
    int ObtenerMinuto();
    int ObtenerSegundo();

    void Pulso();

private:
   int _hora,_minuto,_segundo;
};

#endif // RELOJ_H
