#include "PatronesCreacion/Builder/juegodellaberintobuilder.h"
#include "PatronesCreacion/FactoryA/fabricadelaberintosencantados.h"
#include "PatronesCreacion/FactoryA/juegodellaberintofactorya.h"
#include "PatronesCreacion/Laberinto/juegodellaberinto.h"
#include "PatronesCreacion/SingleTon/fabricadelaberintosst.h"
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

    //Creación del laberinto mediante un FactoryA
    FabricaDeLaberintosEncantados *fabrica=new FabricaDeLaberintosEncantados;
    JuegoDelLaberintoFactoryA *mapaFactoryA=new JuegoDelLaberintoFactoryA();
    mapaFactoryA->CrearLaberinto(fabrica);

    //Crear laberinto SingleTon
    FabricaDeLaberintosST *fabricaST=FabricaDeLaberintosST::Instancia();
    FabricaDeLaberintosST *fabricaST2=FabricaDeLaberintosST::Instancia();

}
