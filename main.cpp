#include "PatronesComportamiento/Estado/conexiontcp.h"
#include "PatronesComportamiento/Estrategia/componedorsimple.h"
#include "PatronesComportamiento/Estrategia/composicion.h"
#include "PatronesCreacion/Builder/juegodellaberintobuilder.h"
#include "PatronesCreacion/FactoryA/fabricadelaberintosencantados.h"
#include "PatronesCreacion/FactoryA/juegodellaberintofactorya.h"
#include "PatronesCreacion/Laberinto/juegodellaberinto.h"
#include "PatronesCreacion/SingleTon/fabricadelaberintosst.h"
#include "PatronesEstructurales/Adaptador/forma.h"
#include "PatronesEstructurales/Adaptador/formatexto.h"
#include "PatronesEstructurales/Bridge/displayx.h"
#include "PatronesEstructurales/Bridge/ventanab.h"
#include "PatronesEstructurales/Compuesto/componentecompuesto.h"
#include "PatronesEstructurales/Compuesto/punto.h"
#include "PatronesEstructurales/Decorador/componentetexto.h"
#include "PatronesEstructurales/Decorador/decoradorborde.h"
#include <iostream>


using namespace std;

int main()
{
    int catalogoPatronesActivado=2; //0=Creacion, 1=Estructural, 2=Comportamiento

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


        //Usamos el patron Composite
        cout << "--------------- PATRON COMPOSITE ---------------";
        Punto *p1= new Punto("p1",0,10);
        p1->Dibujar();
        Punto *p2= new Punto("p2",1,11);
        Punto *p3= new Punto("p3",3,14);
        ComponenteCompuesto *c1=new ComponenteCompuesto("comp1");
        c1->anyadir(p2);
        c1->anyadir(p3);
        c1->Dibujar();

        //Ejemplo sobre el patron Adaptador
        std::cout << "--------------- PATRON ADAPTADOR ---------------";
        //Forma *forma=new Forma();
        //forma->CajaLimitrofe(p1,p2);

        FormaTexto *fTexto=new FormaTexto(1,0,5,5);
        fTexto->CajaLimitrofe(p1,p2);

        //Usamos el patron Display
        DisplayX *d1X=new DisplayX();
        VentanaB *vB=new VentanaB(d1X);
        vB->DibujarContenido();
    }else if(catalogoPatronesActivado==2){
    //P. Comportamiento
        std::cout << "-------------- STATE ------------\n";
        ConexionTCP *conn=new ConexionTCP();
        conn->AbrirPasiva();
        std::cout << "-------------- STRATEGY ------------\n";
        ComponedorSimple *cSimple=new ComponedorSimple();
        Composicion *composicion=new Composicion(cSimple);
    }


}
