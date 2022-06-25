#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include "Persona.h"

class Vendedor : public Persona
{
    public:
    Vendedor(char[]="", int=0);
    void mostrar();
    void setVentas(int);
    static void setComision(int);
    float sueldoACobrar();
private:
    static int comision;
    int ventas;
};

#endif // PERSONAL_H_INCLUDED
