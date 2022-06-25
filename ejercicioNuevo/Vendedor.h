#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include "Persona.h"

class Vendedor:public Persona
{
public:
    Vendedor(char[]="", int=0);
    void mostrar();
    static void setComision(int);
    void setVentas(int);
    int sueldoACobrar();
private:
    int ventas;
    static int comision;
};


#endif // VENDEDOR_H_INCLUDED
