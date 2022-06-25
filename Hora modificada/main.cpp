#include <iostream>
#include "Hora.h"
using namespace std;

int main()
{
    Hora h;
    cout<<"Hora inicial"<<endl;
    h.mostrar24();
    h.mostrar12();
    h.setHora(15,25,30);
    cout<<"Hora modificada"<<endl;
    h.mostrar24();
    h.mostrar12();
    h.setHora(120,90,85);
    cout<<"Hora con datos incorrectos"<<endl;
    h.mostrar24();
    h.mostrar12();

    return 0;
}
