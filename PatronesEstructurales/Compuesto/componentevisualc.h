#ifndef COMPONENTEVISUALC_H
#define COMPONENTEVISUALC_H


#include <string>

class ComponenteVisualC
{
public:
    ComponenteVisualC(std::string nombre,int x,int y);

    virtual void Mover(int x, int y){};
    virtual void Dibujar();

private:
    std::string _nombre;
    int _x,_y;
};

#endif // COMPONENTEVISUALC_H
