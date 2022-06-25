#include <iomanip>
#include <iostream>
#include "class.h"
#include <string.h>

using namespace std;

int main()
{
	//declaracion de nuevo obrero
	Obrero ob1;
	//declaracion de varibles
	char n[15];
	int h;
	float p;
	//pedido de datos
	cout << "Ingrese el nombre del obrero: ";
	cin >> n;
	cout << "Ingrese la cantidad de horas trabajadas: ";
	cin >> h;
	cout << "Ingrese el precio por hora: ";
	cin >> p;

	ob1.setNombre(n);
	ob1.setHoras(h);
	ob1.setPrecio(p);

	cout << "Nombre del obrero: "<<ob1.getNombre()<<endl;
	cout << "Cantidad de horas trabajadas: "<<ob1.getHoras()<<endl;
	cout << "Precio por hora: "<<fixed<<setprecision(2)<<ob1.getPrecio()<<endl;
	cout << "Sueldo total: "<<fixed<<ob1.sueldoACobrar()<<endl;

return 0;
}
