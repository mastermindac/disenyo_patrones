#include "componentecompuesto.h"

ComponenteCompuesto::ComponenteCompuesto(std::string nombre):ComponenteVisualC(nombre,-1,-1)
{
    this->_nombre=nombre;
    this->_numComp=0;
}

void ComponenteCompuesto::anyadir(ComponenteVisualC* hijo){
    this->_componentes[_numComp]=hijo;
    this->_numComp++;
}


void ComponenteCompuesto::Dibujar(){
    for (int i = 0; i < this->_numComp; ++i) {
        this->_componentes[i]->Dibujar();
    }
    ComponenteVisualC::Dibujar();
}
