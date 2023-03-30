#ifndef FABRICADELABERINTOSST_H
#define FABRICADELABERINTOSST_H


class FabricaDeLaberintosST
{
public:
    static FabricaDeLaberintosST* Instancia();

protected:
    FabricaDeLaberintosST();

private:
    static FabricaDeLaberintosST* _instancia;
};

#endif // FABRICADELABERINTOSST_H
