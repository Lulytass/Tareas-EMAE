#include <iostream>
#include "Rectangulo.h"
#include <iomanip>
using namespace std;
int main()
{
    float base,altura;
    char nom[15];
    cout<<"contador "<<Rectangulo::getContador()<<endl;
    Rectangulo r1("rect",5,10);
    r1.mostrar();
    cout<<"Superficie: "<<fixed<<setprecision(2)<<r1.superficie()<<endl;
    cout<<"Perimetro: "<<fixed<<setprecision(2)<<r1.perimetro()<<endl;
    cout<<"contador "<<r1.getContador()<<endl;

    cout<<"Ingrese nombre: "<<endl;
    cin>>nom;
    cout<<"Ingrese base: "<<endl;
    cin>>base;
    cout<<"Ingrese altura: "<<endl;
    cin>>altura;
    Rectangulo r2(nom,base,altura);
    r2.mostrar();
    cout<<"Superficie: "<<fixed<<setprecision(2)<<r2.superficie()<<endl;
    cout<<"Perimetro: "<<fixed<<setprecision(2)<<r2.perimetro()<<endl;
    cout<<"contador "<<r2.getContador()<<endl;
    return 0;
}
