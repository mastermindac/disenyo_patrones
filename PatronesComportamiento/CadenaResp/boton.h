#ifndef BOTON_H
#define BOTON_H

#include "util.h"

class Boton : public Util
{
public:
    Boton(ManejadorAyuda* m,Tema t=SIN_TEMA_AYUDA);
    void ManejarAyuda();
};

#endif // BOTON_H
