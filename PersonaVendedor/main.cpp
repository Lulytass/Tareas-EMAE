#include <iostream>
#include "Vendedor.h"
#include <iomanip>

using namespace std;

int main()
{
    char nom[15];
    int ven, comi;

    Vendedor v1("Lucia", 25000);
    v1.mostrar();
    cout<<"Sueldo a cobrar: "<<fixed<<setprecision(2)<<v1.sueldoACobrar()<<endl;

    cout<<"Segundo empleado"<<endl;
    cout<<"Ingrese nombre: ";
    cin>>nom;
    cout<<"Ingrese ventas: ";
    cin>>ven;
    cout<<"Ingrese comision: ";
    cin>>comi;
    Vendedor v2(nom,ven);
    v2.setComision(comi);
    v2.mostrar();
    cout<<"Sueldo a cobrar: "<<fixed<<setprecision(2)<<v2.sueldoACobrar()<<endl;

    return 0;
}
