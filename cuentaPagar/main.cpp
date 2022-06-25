#include <iostream>
#include <iomanip>
using namespace std;
void cuentaAPagar(float, int, int,int);
int main()
{
    float total;
    int cant, prop, imp;
    cout<<"Ingrese el importe a pagar: ";
    cin>>total;
    cout<<"Entre cuantas personas se divide la cuenta: ";
    cin>>cant;
    cout<<"Cual es el porcentaje de propina: ";
    cin>>prop;
    cout<<"Ingrese el porcentaje de impuesto: ";
    cin>>imp;

    cuentaAPagar(total,cant,prop,imp);
    return 0;
}
void cuentaAPagar(float t, int c, int p, int i){
    float propina= t*p/100;
    float impuesto = t *i/100;
    float total = t + propina +impuesto;
    float totalPP= total/c;
    cout<<"El total a pagar es: "<<fixed<<setprecision(2)<<total<<endl;
    cout<<"El total por persona es: "<<fixed<<setprecision(2)<<totalPP<<endl;
}
