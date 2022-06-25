#include <iostream>

using namespace std;
#include "Vendedor.h"
#include<iomanip>
int main()
{
    Vendedor v1("Juan",1000),v2;
    char nom[30];
    int vta;
    float com;
    cout<<"Datos del vendedor 1"<<endl;
    v1.mostrar();
    cout<<"Sueldo a cobrar: "<<fixed<<setprecision(2)<<v1.sueldoACobrar()<<endl;
    cout<<"Ingreso de datos del vendedor 2"<<endl;
    cout<<"Ingrese el nombre: ";
    cin>>nom;
    cout<<"Ingrese las ventas: ";
    cin>>vta;
    v2.setNombre(nom);
    v2.setVentas(vta);
    cout<<"Nueva comision: ";
    cin>>com;
    Vendedor::setComision(com);
    cout<<"Datos del vendedor 2"<<endl;
    v2.mostrar();
    cout<<"Sueldo a cobrar: "<<fixed<<setprecision(2)<<v2.sueldoACobrar()<<endl;
    return 0;
}
