#ifndef DECORADORBORDE_H
#define DECORADORBORDE_H

#include "decorador.h"

class DecoradorBorde : public Decorador
{
public:
    DecoradorBorde(ComponenteVisual* componente,int borde);

    void Dibujar();

private:
    void DibujarBorde(int ancho);
    int _ancho;
};

#endif // DECORADORBORDE_H
