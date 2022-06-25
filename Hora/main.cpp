#include <iostream>
#include <iomanip>

using namespace std;

class Hora
{
public:
    Hora();
    void setHora(int,int,int);
    void mostrar12();
    void mostrar24();
private:
    int hora,minuto,segundo;
};

Hora::Hora()
{
    hora=0;
    minuto=0;
    segundo=0;
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
