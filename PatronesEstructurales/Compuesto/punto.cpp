#include "punto.h"

Punto::Punto(std::string nombre,int x,int y):ComponenteVisualC(nombre,x,y)
{

}

void Punto::Dibujar(){
    ComponenteVisualC::Dibujar();
}
