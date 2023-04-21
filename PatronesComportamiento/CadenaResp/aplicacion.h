#ifndef APLICACION_H
#define APLICACION_H

#include "manejadorayuda.h"

class Aplicacion : public ManejadorAyuda
{
public:
    Aplicacion(Tema t=SIN_TEMA_AYUDA);
    void ManejarAyuda();
};

#endif // APLICACION_H
