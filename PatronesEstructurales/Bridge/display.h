#ifndef DISPLAY_H
#define DISPLAY_H


#include "PatronesEstructurales/Compuesto/punto.h"
class Display
{
public:
    Display();

    virtual void EstablecerArea(Punto *punto) = 0;
    virtual void EstablecerOrigen(Punto *punto) = 0;
};

#endif // DISPLAY_H
