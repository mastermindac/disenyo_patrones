#ifndef VENTANAB_H
#define VENTANAB_H


#include "PatronesEstructurales/Bridge/display.h"
class VentanaB
{
public:
    VentanaB(Display *display);

    //Metodo que necesita conocer el Display
    virtual void DibujarContenido();

    //Metodos carac Ventana
    virtual void Abrir(){};
    virtual void Cerrar(){};

    //Getter de Display
    virtual Display* ObtenerDisplay();

private:
    Display *_implDisplay;
};

#endif // VENTANAB_H
