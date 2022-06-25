#include "Obrero.h"
#include<string.h>
#include<iostream>
using namespace std;
#include<iomanip>

Obrero::Obrero(char nom[],int canth,float p)
{
    strcpy(nombre,nom);
    if(canth<0)
        horas=0;
    else
        horas=canth;
    if(p<0)
        precio=0;
    else
        precio=p;
}
void Obrero::mostrar()
{
    cout<<"Nombre: "<<nombre<<" Horas trabajadas: "<<horas<<" Precio por hora: "<<fixed<<setprecision(2)<<precio<<endl;
}

float Obrero::sueldo()
{
    float result;
    result=horas*precio;
    return result;
}
