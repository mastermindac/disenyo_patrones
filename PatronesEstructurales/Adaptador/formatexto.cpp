#include "formatexto.h"

FormaTexto::FormaTexto(int x,int y,int ancho,int alto):VistaTexto(x,y,ancho,alto)
{

}

void FormaTexto::CajaLimitrofe(Punto* inferiorIzquierdo,Punto*  superiorDerecho){
    int inferior,izquierda,ancho,alto;

    this->ObtenerOrigen(&inferior, &izquierda);
    this->ObtenerArea(&ancho,&alto);

    inferiorIzquierdo= new Punto("punto",inferior,izquierda);
    superiorDerecho= new Punto("punto",inferior+alto,izquierda+ancho);
}

