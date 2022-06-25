#include<iostream>
using namespace std;
#include"Empleado.h"
#include<string.h>

int Empleado::contador=0;

Empleado::Empleado(char nom[],char ape[])
{
    setNombre(nom);
    setApellido(ape);
    contador++;
    cout<<"Constructor empleado "<<nombre<<","<<apellido<<endl;
}
    Empleado::~Empleado()
    {
        contador--;
        cout<<"Destructor empleado "<<nombre<<","<<apellido<<endl;
    }
    void Empleado::setNombre(char nom[])
    {
        strcpy(nombre,nom);
    }
    void Empleado::setApellido(char ape[])
    {
        strcpy(apellido,ape);
    }
    const char * Empleado::getNombre()
    {
        return nombre;
    }
    const char * Empleado::getApellido()
    {
        return apellido;
    }
    int Empleado::getContador()
    {
        return contador;
    }
