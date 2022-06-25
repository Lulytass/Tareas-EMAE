#include <iostream>
#include "Vendedor.h"

using namespace std;

int main()
{
    char nom[15];
    int ven,com;
    Vendedor v1("lucia", 21500);
    v1.mostrar();

    cout << "ingrese nombre";
    cin >> nom;
    cout << "ingrese la venta";
    cin >> ven;
    cout<<"ingrese comision";
    cin>>com;
    Vendedor v2(nom,ven);
    v2.setComision(com);
    v2.mostrar();
    cout<<"\nsueldo: "<<v2.sueldoACobrar();
    return 0;
}
