#ifndef COMPONENTECOMPUESTO_H
#define COMPONENTECOMPUESTO_H

#include "componentevisualc.h"

class ComponenteCompuesto : public ComponenteVisualC
{
public:
    const static int MAX_COMP=20;
    ComponenteCompuesto(std::string nombre);

    void Mover(int x, int y){};
    void Dibujar();

    void anyadir(ComponenteVisualC* hijo);
    void eliminar(ComponenteVisualC* hijo){};

private:
    std::string _nombre;
    ComponenteVisualC* _componentes[MAX_COMP];
    int _numComp;
};

#endif // COMPONENTECOMPUESTO_H
