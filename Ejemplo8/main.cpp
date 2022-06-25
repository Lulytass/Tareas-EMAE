#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pesos;
    float cotizacion;
    cout<<"Ingrese el monto en pesos: ";
    cin>>pesos;
    cout<<"Ingrese la cotizacion: ";
    cin>>cotizacion;
    cout<<"La cantidad de dolares es: "<<fixed<<setprecision(2)<<pesos/cotizacion<<endl;
    return 0;
}
