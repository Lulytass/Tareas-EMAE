#include "class.h"

Rectangulo::Rectangulo(int b, int a)
{
    setBase(b);
    setAltura(a);
}
void Rectangulo::setBase(int b)
{
    if(b>1)
        base=b;
    else
        base=1;
}
void Rectangulo::setAltura(int a)
{
    if(a>1)
        altura=a;
    else
        altura=1;
}
int Rectangulo::getBase()
{
    return base;
}
int Rectangulo::getAltura()
{
    return altura;
}
int Rectangulo::perimetro()
{
    return altura*2+base*2;
}
int Rectangulo::superficie()
{
    return altura*base;
}
