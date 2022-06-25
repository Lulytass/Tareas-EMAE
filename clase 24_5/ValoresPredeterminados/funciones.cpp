#include <iostream>
#include "Hora.h"
#include <iomanip>
using namespace std;

Hora::Hora(int h,int m,int s)
{
    setHora(h,m,s);
}
void Hora::mostrar24()
{
    cout<<setfill('0')<<setw(2)<<hora<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo<<endl;
}

void Hora::mostrar12()
{
    if(hora==0 || hora==12)
        cout<<12;
    else
       cout<<setfill('0')<<setw(2)<<hora%12;
    cout<<setfill('0')<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo;
    if(hora<12)
        cout<<"AM"<<endl;
    else
        cout<<"PM"<<endl;
}

void Hora::setHora(int h,int m,int s)
{
    if(h>=0 && h<24)
        hora=h;
    else
        hora=0;
    if(m>=0 && m<60)
        minuto=m;
    else
        minuto=0;
    if(s>=0 && s<60)
        segundo=s;
    else
        segundo=0;
}
