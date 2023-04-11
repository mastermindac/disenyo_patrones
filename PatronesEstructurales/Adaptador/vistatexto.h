#ifndef VISTATEXTO_H
#define VISTATEXTO_H


class VistaTexto
{
public:
    VistaTexto(int x,int y,int ancho,int alto);

    virtual void ObtenerOrigen(int* x, int* y);
    virtual void ObtenerArea(int* ancho, int* alto);
    virtual bool EstaVacia(){};

private:
    int _x,_y;
    int _ancho,_alto;
};


#endif // VISTATEXTO_H
