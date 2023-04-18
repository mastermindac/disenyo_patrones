#ifndef COMPONEDOR_H
#define COMPONEDOR_H


class Componedor
{
public:
    Componedor();

    virtual int Componer(int tamanyoOriginal[],int tamanyoMaximo[],int tamanyoMinimo[],int numComponentes,int anchoLinea,int saltos[])=0;


};

#endif // COMPONEDOR_H
