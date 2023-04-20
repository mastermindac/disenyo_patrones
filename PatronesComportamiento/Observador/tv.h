#ifndef TV_H
#define TV_H

#include "PatronesComportamiento/Observador/reloj.h"
#include "observador.h"

class Tv : public Observador
{
public:
    Tv(Reloj *s);
    void Actualizar(Sujeto *sujetoNotifica);

private:
    Reloj *_relojCentral;
};

#endif // TV_H
