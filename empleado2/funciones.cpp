#include "Empleado.h"
#include<iostream>
using namespace std;
#include<iomanip>
#include<string.h>

Empleado::Empleado()
{
    strcpy(nombre,"");
    dni=0;
    antig=0;
    sueldo=0;
}
    Empleado::Empleado(char nom[],int d,float s,int a)
    {
        setNombre(nom);
        setDni(d);
        setSueldo(s);
        setAntig(a);
    }
    void Empleado::setNombre(char nom[])
    {
        strcpy(nombre,nom);
    }
    void Empleado::setDni(int d)
    {
        if(d<0)
            dni=0;
        else
            dni=d;
    }

    void Empleado::setAntig(int a)
    {
        if(a<0)
            antig=0;
        else
            antig=a;
    }

    void Empleado::setSueldo(float s)
    {
        if(s<0)
            sueldo=0;
        else
            sueldo=s;
    }

    void Empleado::mostrar()
    {
        cout<<"Nombre: "<<nombre<<" Dni: "<<dni<<" Antigüedad: "<<antig<<"Sueldo: "<<fixed<<setprecision(2)<<sueldo<<endl;
    }

    float Empleado::sueldoACobrar()
    {
        float acobrar;
        if(antig<2)
            acobrar=sueldo;
        else if(antig<=4)
            acobrar=sueldo*1.20;
        else if(antig<=8)
            acobrar=sueldo*1.40;
        else if(antig<=12)
            acobrar=sueldo*1.60;
        else
            acobrar=sueldo*1.80;
        return acobrar;
    }
