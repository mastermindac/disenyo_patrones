#ifndef DECORADOR_H
#define DECORADOR_H


#include "PatronesEstructurales/Decorador/componentevisual.h"
class Decorador
{
public:
    Decorador(ComponenteVisual* cVisual);

    virtual void Dibujar();
    virtual void CambiarTamano(){};

private:
    ComponenteVisual* _componente;
};

#endif // DECORADOR_H
