#include "Vendedor.h"
#include "Persona.h"
#include <iostream>
#include <string.h>

using namespace std;

int Vendedor::comision=10;
Vendedor::Vendedor(char n[], int v):Persona(n)
{
    setVentas(v);
}
void Vendedor::setVentas(int v)
{
    if(v<1)
        ventas=0;
    else
        ventas=v;
}
void Vendedor::setComision(int c)
{
    if(c<1)
        comision=0;
    else
        comision=c;
}
void Vendedor::mostrar()
{
    cout<<"Nombre: "<<Persona::mostrar()<<endl;
    cout<<"Ventas: "<<ventas<<"\nComision: "<<comision<<endl;
}
float Vendedor::sueldoACobrar()
{
    return 2000+(ventas*comision)/100;
}
Persona::Persona(char n[])
{
    setNombre(n);
}
void Persona::setNombre(char n[])
{
    strcpy(nombre,n);
}
const char*Persona::mostrar()
{
    return nombre;
}
