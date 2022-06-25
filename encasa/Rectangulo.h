#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include "Figura.h"

class Rectangulo:public Figura
{
    public:
    Rectangulo(char[]="",int=0,int=0);
    ~Rectangulo();
    void mostrar();
    static int getContador();
    void setAltura(int);
    void setBase(int);
    int superficie();
    int perimetro();
    private:
        int base,altura;
        static int contador;
};

#endif // RECTANGULO_H_INCLUDED
