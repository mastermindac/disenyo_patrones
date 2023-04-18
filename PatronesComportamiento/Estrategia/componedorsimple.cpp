#include "componedorsimple.h"

ComponedorSimple::ComponedorSimple()
{

}

int ComponedorSimple::Componer(int tamanyoOriginal[],int tamanyoMaximo[],int tamanyoMinimo[],int numComponentes,int anchoLinea,int saltos[])
{
    int anchoCalculado=0;
    int contadorSaltos=0;

    //Recorremos uno a uno los componentes usando los tamaños originales
    for(int i=0;i++;i<numComponentes){
        anchoCalculado=anchoCalculado+tamanyoOriginal[i];
        if(anchoCalculado==anchoLinea){
            //Añadimos el primer salto y seguimos calculando
            saltos[contadorSaltos]=anchoCalculado;
            anchoCalculado=0;
        }
        else if(anchoCalculado>anchoLinea){
            //Añadimos el primer salto y seguimos calculando a partir del anterior ya que nos hemos pasado
            saltos[contadorSaltos]=anchoCalculado;
            anchoCalculado=0;
            i--;
        }
    }
}
