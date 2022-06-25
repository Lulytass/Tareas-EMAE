#include <iostream>
#include "Empleado.h"

using namespace std;

int main()
{

    Empleado e1("Juan",150, 4);
    e1.mostrar();
    cout<< "el sueldo es: " <<e1.sueldo()<<endl;

    Empleado e2("adrian", 100, 5);
    e2.mostrar();
    cout<< "el sueldo es: " <<e2.sueldo()<<endl;

    return 0;
}
