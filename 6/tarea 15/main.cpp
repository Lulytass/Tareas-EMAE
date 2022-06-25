#include "rectangulo.h"
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
   cout<<Rectangulo::getContador()<<endl;

    Rectangulo r1("rectangulito", 12, 5);
    char nombre[15];
    float altura, base;
    cout<<"Primer rectangulo: "<<endl;
    r1.mostrar();
    cout<<"La superficie es: "<<fixed<<setprecision(2)<<r1.superficie()<<endl;
    cout<<"El perimetro es: "<<fixed<<setprecision(2)<<r1.perimetro()<<endl;
    cout<<"Hay "<<r1.getContador()<<" figura/s."<<endl;

    cout<<"DATOS PARA NUEVA FIGURA"<<endl;
    cout<<"Ingrese un nombre: ";
    cin >> nombre;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese la altura: ";
    cin>>altura;
    Rectangulo r2(nombre, base, altura);
    r2.mostrar();
    cout<<"La superficie es: "<<fixed<<setprecision(2)<<r2.superficie()<<endl;
    cout<<"El perimetro es: "<<fixed<<setprecision(2)<<r2.perimetro()<<endl;
    cout<<"Hay "<<r2.getContador()<<" figura/s."<<endl;

    return 0;
}
