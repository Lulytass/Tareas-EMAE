#include <iostream>
#include "Hora.h"
using namespace std;

int main()
{
    Hora h;
    int hs,minu,seg;
    cout<<"Ingrese las horas: ";
    cin>>hs;
    cout<<"Ingrese los minutos: ";
    cin>>minu;
    cout<<"Ingrese los segundos: ";
    cin>>seg;
    h.setHora(hs);
    h.setMinuto(minu);
    h.setSegundo(seg);
    cout<<"Hora ingresada"<<endl;
    cout<<"Hora: "<<h.getHora()<<" Minuto: "<<h.getMinuto()<<" Segundo: "<<h.getSegundo()<<endl;
    h.setHora(21);
    h.setMinuto(30);
    h.setSegundo(55);
    cout<<"Nuevo horario"<<endl;
    h.mostrar12();
    h.mostrar24();
    return 0;
}
