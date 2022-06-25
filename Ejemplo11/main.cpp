#include <iostream>

using namespace std;

int main()
{
    int segt,s,m,hs,dias;
    cout<<"Ingrese la cantidad total de segundos: ";
    cin>>segt;
    s=segt%60;
    m=segt/60%60;
    hs=segt/3600%24;
    dias=segt/86400;
    cout<<dias<<" dias "<<hs<<" horas "<<m<<" minutos "<<s<<" segundos"<<endl;
    return 0;
}
