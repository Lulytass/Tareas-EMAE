#include "class.h"
#include <string.h>

Vendedor::Vendedor(char n[15], int sb, int c, float v)
{
    setNombre(n);
    setSueldoBasico(sb);
    setComision(c);
    setVentas(v);
}
void Vendedor::setNombre(char n[15])
{
    strcpy(nombre,n);
}
void Vendedor::setSueldoBasico(int sb)
{
    if(sb>0)
        sueldoBasico=sb;
    else
        sueldoBasico=0;
}
void Vendedor::setComision(int c)
{
    if(c>0)
        comision=c;
    else
        comision=0;
}
void Vendedor::setVentas(float v)
{
    if(v>0)
        ventas=v;
    else
        ventas=0;
}
const char* Vendedor::getNombre()
{
    return nombre;
}
int Vendedor::getSueldoBasico()
{
    return sueldoBasico;
}
int Vendedor::getComision()
{
    return comision;
}
float Vendedor::getVentas()
{
    return ventas;
}
float Vendedor::sueldoACobrar()
{
    return sueldoBasico+(comision*ventas)/100;
}
