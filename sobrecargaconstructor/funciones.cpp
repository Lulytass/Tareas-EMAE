#include <iostream>
#include "class.h"
#include <iomanip>

using namespace std;

Hora::Hora()
{
    setHora(0,0,0);
}
Hora::Hora(int h)
{
    setHora(h,0,0);
}
Hora::Hora(int h, int m)
{
    setHora(h,m,0);
}
Hora::Hora(int h, int m, int s)
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
        hora=12;
    else
       hora=hora%12;
    cout<<setfill('0')<<setw(2)<<hora<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo;
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
