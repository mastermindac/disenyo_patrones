#ifndef OBSERVADOR_H
#define OBSERVADOR_H


class Sujeto;

class Observador
{
public:
    Observador();

    virtual void Actualizar(Sujeto *sujetoNotifica)=0;
};

#endif // OBSERVADOR_H
