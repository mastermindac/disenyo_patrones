#ifndef COMPOSICION_H
#define COMPOSICION_H


#include "PatronesComportamiento/Estrategia/componedor.h"
#include "PatronesEstructurales/Decorador/componentevisual.h"
class Composicion
{
public:
    const int NUM_COMP_MAX=10;
    Composicion(Componedor *);

    void Repara();

private:
    Componedor* _componedor;
    ComponenteVisual* _componentes;
    int _numComponentes;
    int _anchoLinea;
    int _saltosLinea;
    int _contadorLineas;
};

#endif // COMPOSICION_H
