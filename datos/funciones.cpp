#include "class.h"
#include <iostream>
#include <string.h>
using namespace std;

Persona::Persona()
{
    strcpy(nombre, "");
    edad=0;
    dni=0;
}
void Persona::setNombre(char nom[25])
{
  strcpy(nombre, nom);
}
void Persona::setEdad(int num)
{
	if(num>0)
		edad=num;
	else
		edad=0;
}
void Persona::setDni(int d)
{
	if(d>0)
		dni=d;
	else
		dni=0;
}
bool Persona::esMayorDeEdad(int num)
{
    return num>17;
}

void Persona::mostrar()
{
cout<< "nombre: "<<nombre<<endl<<"edad: "<<edad<<endl<<"DNI: "<<dni<<endl;
}
