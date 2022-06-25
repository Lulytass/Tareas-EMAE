#include<iostream>
using namespace std;
#include "Persona.h"
#include "Vendedor.h"
#include<string.h>
#include<iomanip>

float Vendedor::comision=0.10;

Persona::Persona(char nom[])
{
    setNombre(nom);
}

void Persona::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
}

void Persona::setNombre(char nom[])
{
    strcpy(nombre,nom);
}

Vendedor::Vendedor(char nom[],int vta):Persona(nom)
{
    setVentas(vta);
}

void Vendedor::setVentas(int vta)
{
    if(vta<0)
        ventas=0;
    else
        ventas=vta;
}

void Vendedor::setComision(float com)
{
    if(com<0)
        comision=0;
    else
        comision=com;
}

void Vendedor::mostrar()
{
    Persona::mostrar();
    cout<<"Sus ventas son: "<<ventas<<" y tiene una comision de "<<fixed<<setprecision(2)<<comision<<endl;
}

float Vendedor::sueldoACobrar()
{
    return ventas*comision;
}
