#include "composicion.h"
#include <cstdlib>

Composicion::Composicion(Componedor * componedor)
{
    this->_componedor=componedor;
}

void Composicion::Repara(){
    int tamanyoOriginal[NUM_COMP_MAX],tamanyoMax[NUM_COMP_MAX],tamanyoMin[NUM_COMP_MAX],saltos[NUM_COMP_MAX];
    int anchoLinea,numComponentes;

    //Un ejemplo de 3 componentes y sus tamaños
    anchoLinea=0;
    numComponentes=3;
    for(int i=0;i++;i<numComponentes){
        tamanyoOriginal[i] = rand() % 100 + 1;
        tamanyoMax[i] = tamanyoOriginal[i] + rand() % 10 + 1;
        tamanyoMin[i] = tamanyoOriginal[i] - rand() % 10 + 1;
        anchoLinea=anchoLinea+tamanyoOriginal[i];
    }

    //Se recopilan todos los componentes para ser pasador al componedor
    this->_componedor->Componer(tamanyoOriginal,tamanyoMax,tamanyoMin,numComponentes,anchoLinea,saltos);
}
