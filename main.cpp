#include "Builder/juegodellaberintobuilder.h"
#include "Laberinto/juegodellaberinto.h"
#include <iostream>


using namespace std;

int main()
{
    //Version sin patrones
    JuegoDelLaberinto *mapa=new JuegoDelLaberinto();

    //Creación del laberinto mediante un builder
    JuegoDelLaberintoBuilder *mapaBuilder=new JuegoDelLaberintoBuilder();

    //Creación del laberinto mediante un FactoryM
    JuegoDelLaberintoBuilder *mapaFactoryM=new JuegoDelLaberintoBuilder();

}
