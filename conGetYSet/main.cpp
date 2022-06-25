#include <iostream>
#include "class.h"
#include <iomanip>

using namespace std;

int main()
{
    Hora h;
    int hs,minu,seg;
    cout<<"ingrese las horas: ";
    cin>>hs;
    cout<<"ingrese los minutos: ";
    cin>>minu;
    cout<<"ingrese los segundos: ";
    cin>>seg;
    h.setHora(hs);
    h.setMinuto(minu);
    h.setSegundo(seg);
    cout<<"Hora ingresada: " << h.getHora() << " Minutos ingresados: " << h.getMinuto() << " Segundos ingresados: " << h.getSegundo() << endl;
    return 0;
}
