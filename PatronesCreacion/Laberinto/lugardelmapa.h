#ifndef LUGARDELMAPA_H
#define LUGARDELMAPA_H


class LugarDelMapa
{
public:
    //Definicion de las 4 posibles direcciones
    enum Direccion {Norte, Sur, Este, Oeste};

    LugarDelMapa();
    virtual void Entrar() = 0;

    Direccion posicion;
};

#endif // LUGARDELMAPA_H
