#include <iostream>

using namespace std;
class time
{
public:
    time();
    void doce();
    void veinticuatro();
    void horas(int, int, int);
private:
    int hora, minutos, segundos;
};
time::time(){
    hora=0;
    minutos=0;
    segundos=0;
}
void time::doce()
{

    if (hora ==24)
        hora=12;

    if(hora > 12)
        hora-=12;
        cout << hora << ":"<<minutos<<":"<<segundos<<endl;

}
void time::veinticuatro(){
        cout << hora << ":"<<minutos<<":"<<segundos<<endl;
}
void time::horas(int h, int m, int s){
    if(h<1 || h>24)
        hora = 0;
        else
            hora = h;
        if(m>59 || m <0)
       minutos =0;
       else
        minutos=m;
        if(s<0 || s>60)
        s = 0;
        else
       segundos=s;

}
int main()
{
    int h,m,s;
    time hori;
hori.horas(24,26,35);
hori.veinticuatro();
hori.doce();
    return 0;
}
