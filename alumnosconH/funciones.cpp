#include <iostream>
#include "Alumno.h"
#include <math.h>
#include <iomanip>
#include <string.h>

using namespace std;
Alumno::Alumno(float n1, float n2, float n3, char nom[])
{
    strcpy(nombre, nom);
    if (n1>=0 && n1<=10)
    nota1=n1;
    else
        nota1=0;
    if (n2>=0 && n2<=10)
    nota2=n2;
    else
        nota2=0;
        if (n3>=0 && n3<=10)
    nota3=n3;
    else
        nota3=0;
}


void Alumno::mostrar()
{

    cout << "Nombre: "<< nombre <<endl<<"Primer nota: "<<nota1<<endl<<"Segunda nota: "<<nota2<<endl<<"Tercera nota: "<<nota3<<endl;
    cout << "El promedio de notas es: "<<fixed<<setprecision(2)<< promedio()<<endl;
    cout << "La nota mas alta es: " <<mayor()<<endl;
}
float Alumno::promedio()
{
    float prom=(nota1+nota2+nota3)/3;
    return prom;
}
float Alumno::mayor()
{
    if(nota1>nota2 && nota1 > nota3)
        return nota1;
    else  if(nota2>nota3)
        return nota2;
        else
           return nota3;

}
