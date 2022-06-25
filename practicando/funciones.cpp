#include <iostream>
#include "class.h"

using namespace std;

Rectangulo::Rectangulo()
{
    setLargo(0);
    setAncho(0);
}
Rectangulo::Rectangulo(float n, float n1)
{
    if(n > 0 && n1 > 0)
        {
        largo=n;
        ancho=n1;
        }
    else
        {
        largo=0;
        ancho=0;
        }
}
void Rectangulo::setLargo(float l)
{
       if(l > 0)
        largo=l;
}
void Rectangulo::setAncho(float a)
{
    if(a > 0)
        ancho=a;
}
float Rectangulo::perimetro()
{

        return largo*2+ancho*2;

}
float Rectangulo::area()
{

        return largo*ancho;


}
void Rectangulo::mostrar()
{
    cout << "el perimetro es: "<<perimetro()<<" el area da: "<<area()<<endl;
}
