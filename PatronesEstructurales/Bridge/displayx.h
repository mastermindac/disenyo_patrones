#ifndef DISPLAYX_H
#define DISPLAYX_H

#include "display.h"

class DisplayX : public Display
{
public:
    DisplayX();

    void EstablecerArea(Punto *punto);
    void EstablecerOrigen(Punto *punto);

private:
    Punto *_supIzq,* _infDer;
    int _area;
    int _idPantalla;
};

#endif // DISPLAYX_H
