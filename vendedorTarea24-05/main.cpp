
#include <iomanip>
#include <string.h>
#include "class.h"
#include <iostream>

using namespace std;

int main()
{
	char n[15];
	float v;
	int s,c;
	cout << "ingrese el nombre del vendedor: ";
	cin >> n;
	cout << "ingrese el sueldo basico del vendedor: ";
	cin >> s;
	cout << "ingrese la comision del vendedor: ";
	cin >> c;
	cout << "ingrese el total de ventas realizadas: ";
	cin >> v;

	Vendedor vend1;

	vend1.setComision(c);
	vend1.setNombre(n);
	vend1.setSueldo(s);
	vend1.setVentas(v);
	cout << "\nNombre del vendedor: "<<vend1.getNombre()<<endl;
	cout << "Sueldo basico: "<<vend1.getSueldo()<<endl;
	cout << "Comision: "<<vend1.getComision()<<endl;
	cout << "Ventas: "<<fixed<<setprecision(2)<<vend1.getVentas()<<endl;
	cout << "Total sueldo a cobrar: "<<fixed<<setprecision(2)<<vend1.sueldoACobrar()<<endl;

	return 0;
}
