#ifndef COMPONEDORSIMPLE_H
#define COMPONEDORSIMPLE_H

#include "componedor.h"

class ComponedorSimple : public Componedor
{
public:
    ComponedorSimple();

    int Componer(int tamanyoOriginal[],int tamanyoMaximo[],int tamanyoMinimo[],int numComponentes,int anchoLinea,int saltos[]);
};

#endif // COMPONEDORSIMPLE_H
