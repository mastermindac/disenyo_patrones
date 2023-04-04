#ifndef PUNTO_H
#define PUNTO_H

#include "componentevisualc.h"

class Punto : public ComponenteVisualC
{
public:
    Punto(std::string nombre,int x,int y);

    void Mover(int x, int y){};
    void Dibujar();
};

#endif // PUNTO_H
