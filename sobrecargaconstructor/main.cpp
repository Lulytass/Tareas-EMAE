#include <iostream>
#include "class.h"
#include <iomanip>

using namespace std;

int main()
{
   Hora h, h1(14,48,25),h2(16,26),h3(19),h4(69,90,80);
    cout<<"Hora inicial"<<endl;
    h.mostrar24();
    h.mostrar12();
    cout<<"Hora 1"<<endl;
    h1.mostrar24();
    h1.mostrar12();
    cout<<"Hora 2"<<endl;
    h2.mostrar24();
    h2.mostrar12();
    cout<<"Hora 3"<<endl;
    h3.mostrar24();
    h3.mostrar12();
    cout<<"Hora 4"<<endl;
    h4.mostrar24();
    h4.mostrar12();

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
