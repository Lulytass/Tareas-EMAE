#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "Punto.h"
class Circulo:public Punto
{
public:
    Circulo(int=0,int=0,float=0);
    void setRadio(float);
    float getRadio();
    float diametro();
    float circunferencia();
    float area();
    void imprime();
private:
    float radio;
};

#endif // CIRCULO_H_INCLUDED
