#ifndef UTIL_H
#define UTIL_H

#include "manejadorayuda.h"

class Util : public ManejadorAyuda
{
public:
    Util(ManejadorAyuda* padre,Tema t=SIN_TEMA_AYUDA);
    virtual void ManejarAyuda(){};
private:
    ManejadorAyuda* _padre;
};

#endif // UTIL_H
