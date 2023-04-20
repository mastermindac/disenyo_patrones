#ifndef SUJETO_H
#define SUJETO_H


#include "PatronesComportamiento/Observador/observador.h"

class Sujeto
{
public:
    static const int NUM_MAX_OBSERVADORES=10;

    Sujeto();

    virtual void Adscribir(Observador* observador);
    virtual void Quitar(Observador* observador);

    virtual void Notificar();

private:
    int _num_observadores;
    Observador* _observadores[NUM_MAX_OBSERVADORES];
};

#endif // SUJETO_H
