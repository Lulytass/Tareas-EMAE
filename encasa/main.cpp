#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    cout<<Rectangulo::getContador()<<endl;
    Rectangulo rec("rectangulito",12,6);
    rec.mostrar();
    cout<<"perimeritro: "<<rec.perimetro()<<endl;
    cout<<"superficie: "<<rec.superficie()<<endl;
    cout<<rec.getContador()<<endl;



    return 0;
}
