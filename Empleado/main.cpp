#include <iostream>
#include "Empleado.h"
using namespace std;

int main()
{
    Empleado e1("Jose",33456789,95450.25);
    char nom[25];
    int d;
    float s;
    cout<<"Ingrese el nombre: ";
    cin>>nom;
    cout<<"Ingrese el dni: ";
    cin>>d;
    cout<<"Ingrese el sueldo: ";
    cin>>s;
    Empleado e2(nom,d,s);
    cout<<"Datos del empleado 1"<<endl;
    e1.mostrar();
    cout<<"Datos del empleado 2"<<endl;
    e2.mostrar();
    return 0;
}
