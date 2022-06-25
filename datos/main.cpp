#include <iostream>
#include <string.h>
#include "class.h"
using namespace std;

int main()
{
    char nom[25],control[10];
    int e,d,total;
    Persona primera;
    cout<<"ingrese edad: "<<endl;
    cin>>e;
    cout<<"ingrese dni: "<<endl;
    cin>>d;
    cout<<"ingrese nombre: "<<endl;
    cin>>nom;

    primera.setNombre(nom);
    primera.setEdad(e);
    primera.setDni(d);
    primera.mostrar();
    total=primera.esMayorDeEdad(e);
    if(total>0)
        cout<<"es mayor de edad"<<endl;
    else
        cout<<"es menor de edad"<<endl;
    return 0;
}
