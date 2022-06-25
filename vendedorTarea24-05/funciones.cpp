
#include <iomanip>
#include <string.h>
#include "class.h"
#include <iostream>

using namespace std;

Vendedor::Vendedor(char nom[15], int s, float v, int c)
{
	setNombre(nom);
	setSueldo(s);
	setVentas(v);
	setComision(c);
}
void Vendedor::setNombre(char nom[15])
{
	strcpy(nombre,nom);
}
void Vendedor::setSueldo(int s)
{
	if(s>0)
		sueldo=s;
	else
		sueldo=0;
}
void Vendedor::setVentas(float v)
{
	if(v>0)
		ventas=v;
	else
		ventas=0;
}
void Vendedor::setComision(int c)
{

	if(c>0)
		comision=c;
	else
		comision=0;
}
const char* Vendedor::getNombre()
{
	return nombre;
}
int Vendedor::getSueldo()
{
	return sueldo;
}
float Vendedor::getVentas()
{
	return ventas;
}
int Vendedor::getComision()
{
	return comision;
}
float Vendedor::sueldoACobrar()
{
	return sueldo+(comision*ventas)/100;
}
