#ifndef FORMATEXTO_H
#define FORMATEXTO_H

#include "PatronesEstructurales/Adaptador/forma.h"
#include "vistatexto.h"

class FormaTexto : public VistaTexto,public Forma
{
public:
    FormaTexto(int x,int y,int ancho,int alto);

    void CajaLimitrofe(Punto* inferiorIzquierdo,Punto*  superiorDerecho);
};

#endif // FORMATEXTO_H
