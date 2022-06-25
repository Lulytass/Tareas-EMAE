#include <iostream>
#include <string.h>
#include "Figura.h"
#include "Rectangulo.h"

using namespace std;

int Rectangulo::contador=0;
Rectangulo::Rectangulo(char n[], float b, float a):Figura(n)
{
    setAltura(a);
    setBase(b);
    contador++;
}
void Rectangulo::mostrar()
{
    cout<<"Nombre: "<<Figura::mostrar()<<"\nAltura: "<<altura<<"\nBase: "<<base<<endl;
}
int Rectangulo::getContador()
{
    return contador;
}
void Rectangulo::setAltura(float a)
{
    if(a<1)
        altura=1;
    else
        altura=a;
}
void Rectangulo::setBase(float b)
{
    if(b<1)
        base=1;
    else
        base=b;
}
float Rectangulo::superficie()
{
    return altura*base;
}
float Rectangulo::perimetro()
{
    return altura*2+base*2;
}
Figura::Figura(char n[])
{
    setNombre(n);
}
void Figura::setNombre(char n[])
{
    strcpy(nombre,n);
}
const char*Figura::mostrar()
{
    return nombre;
}
