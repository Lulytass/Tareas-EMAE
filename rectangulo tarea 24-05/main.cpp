#include <iostream>
#include "class.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"ingrese la base: ";
    cin>>b;
    cout<<"ingrese la altura: ";
    cin>>a;
    Rectangulo rec1(b,a);
    rec1.setAltura(a);
    rec1.setBase(b);
    cout<<"\nBase: "<<rec1.getBase();
    cout<<"\nAltura: "<<rec1.getAltura();
    cout<<"\nSuperficie: "<<rec1.superficie();
    cout<<"\nPerimetro: "<<rec1.perimetro();
    return 0;
}
