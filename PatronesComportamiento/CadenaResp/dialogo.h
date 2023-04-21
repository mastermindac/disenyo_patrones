#ifndef DIALOGO_H
#define DIALOGO_H

#include "util.h"

class Dialogo : public Util
{
public:
    Dialogo(ManejadorAyuda* m,Tema t=SIN_TEMA_AYUDA);
    void ManejarAyuda();
};

#endif // DIALOGO_H
