#include <iostream>
#include "class.h"
#include <string.h>
using namespace std;

int main()
{
    int i, e, c;
    char t[20];
    Cuenta titular;
    cout<<"nombre: "<<endl;
    cin>>t;
    cout<<"saldo: "<<endl;
    cin>>c;
    titular.setTitular(t);
    titular.setCantidad(c);
    cout<<"\ndatos sin ingreso ni egreso de eftvo"<<endl;
    titular.mostrar();
    cout<<"egreso de dinero: ";
    cin>>e;
    cout<<"\ndatos con egreso"<<endl;
    titular.retirar(e);
    titular.mostrar();
    cout<<"ingreso de dinero: ";
    cin>>i;
    cout<<"\ndatos con ingreso"<<endl;
    titular.ingresar(i);
    titular.mostrar();

    return 0;
}
