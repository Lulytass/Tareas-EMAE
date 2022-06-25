#include "class.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    char n[15];
    int s,c;
    float v;

    Vendedor vend1;

    cout << "ingrese el nombre del vendedor: ";
    cin >> n;
    cout << "ingrese el sueldo basico del vendedor: ";
    cin >> s;
    cout << "ingrese la comision del vendedor: ";
    cin >> c;
    cout << "ingrese el total de las ventas que realizo el vendedor: ";
    cin >> v;

    vend1.setNombre(n);
    vend1.setSueldoBasico(s);
    vend1.setComision(c);
    vend1.setVentas(v);
    cout<<"\nVENDEDOR CON VALORES PASADOS POR TECLADO"<<endl;
    cout << "Nombre: "<<vend1.getNombre()<<endl;
    cout << "Sueldo Basico: "<<vend1.getSueldoBasico()<<endl;
    cout << "Comision: " << vend1.getComision() << endl;
    cout << "Total ventas: " << fixed<<setprecision(2)<<vend1.getVentas() << endl;
    cout << "\nTotal sueldo: " <<fixed<<setprecision(2)<< vend1.sueldoACobrar() << endl;
    cout << "\nVENDEDOR CON VALORES PASADOS POR PARAMETRO"<<endl;
    Vendedor vend2("Adrian", 70000, 15, 150654.45);
    cout << "Nombre: "<<vend2.getNombre()<<endl;
    cout << "Sueldo Basico: "<<vend2.getSueldoBasico()<<endl;
    cout << "Comision: " << vend2.getComision() << endl;
    cout << "Total ventas: " << vend2.getVentas() << endl;
    cout << "\nTotal sueldo: " <<fixed<<setprecision(2)<< vend2.sueldoACobrar() << endl;

    return 0;
}
