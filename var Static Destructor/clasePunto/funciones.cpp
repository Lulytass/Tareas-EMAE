#include<iostream>
using namespace std;
#include "Punto.h"


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
