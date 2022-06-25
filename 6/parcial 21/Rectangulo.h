#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include "Figura.h"

class Rectangulo:public Figura
{
public:
    Rectangulo(char[]="",float=1,float=1);
    void mostrar();
    static int getContador();
    void setAltura(float);
    void setBase(float);
    float superficie();
    float perimetro();
private:
    float base, altura;
    static int contador;
};
#endif // RECTANGULO_H_INCLUDED
