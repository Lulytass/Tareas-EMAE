#include <iostream>
#include "class.h"
#include <string.h>

using namespace std;

Obrero::Obrero(char n[15], int h, float p)
{
	setNombre(n);
	setHoras(h);
	setPrecio(p);
}
void Obrero::setNombre(char n[15])
{
	strcpy(nombre,n);
}
void Obrero::setHoras(int h)
{
	if(h>0)
		horas=h;
	else
		horas=0;
}
void Obrero::setPrecio(float p)
{
	if(p>0)
		precio=p;
	else
		precio=0;
}
const char* Obrero::getNombre()
{
	return nombre;
}
int Obrero::getHoras()
{
	return horas;
}
float Obrero::getPrecio()
{
	return precio;
}
float Obrero::sueldoACobrar()
{
	return horas*precio;
}
