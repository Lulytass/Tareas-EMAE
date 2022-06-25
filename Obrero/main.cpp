#include <iostream>

using namespace std;
#include "Obrero.h"
#include<iomanip>

int main()
{
    Obrero o1("Tomas",10,125.5),o2("Estela",20,200.35);
    cout<<"Datos del obrero 1: "<<endl;
    o1.mostrar();
    cout<<"Su sueldo es: "<<fixed<<setprecision(2)<<o1.sueldo()<<endl;
    cout<<"Datos del obrero 2: "<<endl;
    o2.mostrar();
    cout<<"Su sueldo es: "<<fixed<<setprecision(2)<<o2.sueldo()<<endl;

    return 0;
}
