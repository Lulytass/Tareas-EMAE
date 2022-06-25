#include <iostream>
#include "persona.h"
#include "vendedor.h"
#include <string.h>
#include <iomanip>
using namespace std;

float Vendedor::comision = 0.10;

Persona::Persona(char n[])
{
   setNombre(n);
}
const char* Persona::setNombre(char n[])
{
    strcpy(nombre, n);
}
void Persona::mostrar()
{
    cout << "Nombre: "<<nombre<<endl;
}
Vendedor::Vendedor(char n[],int vta):Persona(n)
{
  setVentas(vta);
}
void Vendedor::setVentas(int vta)
{
    if(vta<0)
        ventas=0;
    else
        ventas= vta;
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
    cout<< "Las ventas son: "<< ventas<< " y tiene una comision de "<<fixed<<setprecision(2)<<comision<<endl;

}
float Vendedor::sueldoACobrar()
{
    return ventas*comision;
}
