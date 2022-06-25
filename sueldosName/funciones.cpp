#include <iostream>
#include "Empleado.h"
#include <string.h>
#include <iomanip>
using namespace std;

Empleado::Empleado(char nom[], int p, float h )
{
    strcpy(nombre, nom);
    if(p<0)
        precioh=0;
    else
        precioh=p;
    if(h<0)
        horas=0;
    else
        horas=h;
}
void Empleado::mostrar()
{
    cout << "El obrero trabajo: "<<horas<<" horas, a un precio por hora de "<< precioh<<endl;

}
float Empleado::sueldo()
{
   return horas*precioh;
}
