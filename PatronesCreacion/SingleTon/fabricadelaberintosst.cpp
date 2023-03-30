#include "fabricadelaberintosst.h"

FabricaDeLaberintosST::FabricaDeLaberintosST()
{

}

FabricaDeLaberintosST* FabricaDeLaberintosST::_instancia=0;

FabricaDeLaberintosST* FabricaDeLaberintosST::Instancia(){
    if(_instancia==0){
        _instancia=new FabricaDeLaberintosST();
    }

    return _instancia;
}
