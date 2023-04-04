#include "PatronesCreacion/Builder/juegodellaberintobuilder.h"
#include "PatronesCreacion/FactoryA/fabricadelaberintosencantados.h"
#include "PatronesCreacion/FactoryA/juegodellaberintofactorya.h"
#include "PatronesCreacion/Laberinto/juegodellaberinto.h"
#include "PatronesCreacion/SingleTon/fabricadelaberintosst.h"
#include "PatronesEstructurales/Decorador/componentetexto.h"
#include "PatronesEstructurales/Decorador/decoradorborde.h"
#include <iostream>


using namespace std;

int main()
{
    int catalogoPatronesActivado=1; //0=Creacion, 1=Estructural, 2=Comportamiento

    //P. Creacion
    if(catalogoPatronesActivado==0){
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

    //P. EStructural
    }else if(catalogoPatronesActivado==1){
        ComponenteTexto *cTexto=new ComponenteTexto();
        cTexto->Dibujar();
        DecoradorBorde *dBorde=new DecoradorBorde(cTexto,1);
        dBorde->Dibujar();

    }


}
