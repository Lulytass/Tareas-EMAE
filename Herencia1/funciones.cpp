#include<iostream>
using namespace std;
#include "Punto.h"
#include "Circulo.h"

Punto::Punto(int valorx,int valory)
{
    x=valorx;
    y=valory;
}

void Punto::setX(int valorx)
{
    x=valorx;
}

void Punto::setY(int valory)
{
    y=valory;
}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

void Punto::imprime()
{
    cout<<'['<<x<<','<<y<<']'<<endl;
}

Circulo::Circulo(int valorx,int valory,float valorRadio)
{
    x=valorx;
    y=valory;
    setRadio(valorRadio);
}
    void Circulo::setRadio(float valorRadio)
    {
        if(valorRadio<0)
            radio=0;
        else
            radio=valorRadio;
    }

    float Circulo::getRadio()
    {
        return radio;
    }
    float Circulo::diametro()
    {
        return 2*radio;
    }
    float Circulo::circunferencia()
    {
        return 2*3.14*radio;
    }
    float Circulo::area()
    {
        return 3.14*radio*radio;
    }
    void Circulo::imprime()
    {
        cout<<"Centro = ["<<x<<','<<y<<']'<<" Radio: "<<radio<<endl;
    }

