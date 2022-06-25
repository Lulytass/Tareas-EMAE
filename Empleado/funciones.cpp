#include <string.h>
#include <iostream>
using namespace std;
#include <iomanip>
#include "Empleado.h"
Empleado::Empleado(char nom[],int d,float s)
{
    strcpy(nombre,nom);
    if(d<0)
        dni=0;
    else
        dni=d;
    if(s<0)
        sueldo=0;
    else
        sueldo=s;
}

void Empleado::mostrar()
{
    cout<<"Nombre: "<<nombre<<" Dni: "<<dni<<" Sueldo: "<<fixed<<setprecision(2)<<sueldo<<endl;
}
