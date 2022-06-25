#include <iostream>

using namespace std;
#include "Empleado.h"

int main()
{
    cout<<"Cantidad de empleados: "<<Empleado::getContador()<<endl;
    {
        Empleado e1("Susana","Gomez");
        Empleado e2("Juan","Lopez");
        cout<<"Cantidad de empleados: "<<e1.getContador()<<endl;
        cout<<"Empleado 1: "<<e1.getNombre()<<","<<e1.getApellido()<<endl;
        cout<<"Empleado 2: "<<e2.getNombre()<<","<<e2.getApellido()<<endl;
    }
    cout<<"Cantidad de empleados: "<<Empleado::getContador()<<endl;
    return 0;
}
