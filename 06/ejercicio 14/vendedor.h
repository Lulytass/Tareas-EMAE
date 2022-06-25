#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include "persona.h"

class Vendedor: public Persona
{
public:
    Vendedor(char[]="", int=0);
    void setVentas(int);
    static void setComision(float);
    void mostrar();
    float sueldoACobrar();

private:
   static float comision;
     int ventas;
};

#endif // VENDEDOR_H_INCLUDED
