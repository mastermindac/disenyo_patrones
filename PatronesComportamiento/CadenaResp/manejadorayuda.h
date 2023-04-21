#ifndef MANEJADORAYUDA_H
#define MANEJADORAYUDA_H


#include <string>

typedef int Tema;

class ManejadorAyuda
{
public:

    static const Tema SIN_TEMA_AYUDA = -1;
    static const Tema TEMA_APLICACION = 0;
    static const Tema TEMA_IMPRESION = 1;
    static const Tema TEMA_FUNCIONAMIENTO = 2;

    ManejadorAyuda(ManejadorAyuda* m=0,Tema t=SIN_TEMA_AYUDA);

    virtual bool TieneAyuda();
    virtual void EstablecerManejador(ManejadorAyuda* m,Tema t){};
    virtual void ManejarAyuda();
    virtual std::string TemaAyuda();

private:
    ManejadorAyuda* _sucesor;
    Tema _tema;

};

#endif // MANEJADORAYUDA_H
