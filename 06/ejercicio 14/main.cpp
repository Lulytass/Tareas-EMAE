#include <iostream>
#include "vendedor.h"
#include <iomanip>
using namespace std;

int main()
{
Vendedor v1("juan", 1000);
char nom[15];
int vta;
float comision;
cout<<"vendedor 1"<<endl;
v1.mostrar();
cout<<"sueldo a cobrar: "<< fixed<<setprecision(2)<<v1.sueldoACobrar()<<endl;

cout<< "ingrese nombre";
cin >>nom;
cout<< "ingrese sueldo: ";
cin>> vta;
cout<< "ingrese comision";
cin >> comision;

cout<<"vendedor 2"<<endl;
Vendedor v2(nom,vta);
v2.setComision(comision);
v2.mostrar();
cout<<"sueldo a cobrar: "<< fixed<<setprecision(2)<<v2.sueldoACobrar()<<endl;

    return 0;
}
