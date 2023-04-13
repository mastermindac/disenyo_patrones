#include "displayx.h"

DisplayX::DisplayX()
{

}

//Se establece el origen como la esquina sup izquierda
void DisplayX::EstablecerOrigen(Punto *punto){
    this->_supIzq=punto;
}

//Se establece el origen como la esquina sup izquierda
void DisplayX::EstablecerArea(Punto *punto){
    this->_infDer=punto;
    //Tenemos los dos puntos podemos calcular el área
}
