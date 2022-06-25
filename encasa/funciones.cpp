#include <iostream>
#include "Figura.h"
#include "Rectangulo.h"
#include <string.h>

using namespace std;

int Rectangulo::contador=0;
Figura::Figura(char n[])
{
    setNombre(n);
}
const char* Figura::mostrar()
{
    return nombre;
}
void Figura::setNombre(char n[])
{
    strcpy(nombre,n);
}
Rectangulo::Rectangulo(char n[],int a, int b):Figura(n)
{
    setAltura(a);
    setBase(b);
    contador++;
}
Rectangulo::~Rectangulo()
{
    contador--;
    cout<<"destructor "<<contador;
}
void Rectangulo::mostrar()
{
    cout<<"nombre: "<<Figura::mostrar()<<endl;
   cout<<"\nLa altura es: "<<altura<<"\nLa base: "<<base<<endl;
}
int Rectangulo::getContador()
{
    return contador;
}
void Rectangulo::setAltura(int a)
{
    if(a<1)
        altura=1;
    else
        altura=a;
}
void Rectangulo::setBase(int b)
{
    if(b<1)
        base=1;
    else
        base=b;
}
int Rectangulo::superficie()
{
    return base*altura;
}
int Rectangulo::perimetro()
{
    return base*2+altura*2;
}

