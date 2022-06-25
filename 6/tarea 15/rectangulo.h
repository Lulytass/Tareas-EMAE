#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include "figura.h"
class Rectangulo:public Figura
{
public:
   Rectangulo(char[]="", float=1,float=1);
   void mostrar();
   void setNombre(char[]);
   void setBase(float);
   void setAltura(float);
   static int getContador();
   float superficie();
   float perimetro();
private:
    float base, altura;
    static int contador;
};
#endif // RECTANGULO_H_INCLUDED
