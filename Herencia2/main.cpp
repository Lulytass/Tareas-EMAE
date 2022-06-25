#include <iostream>

using namespace std;
#include "Circulo.h"
int main()
{
    Circulo c(3,5,2.5);
    cout<<"La coordenada x es: "<<c.getX()<<" la coordenada y es: "<<c.getY()<<" y el radio es "<<c.getRadio()<<endl;
    c.setX(10);
    c.setY(20);
    c.setRadio(5.3);
    cout<<"Nuevos valores del circulo:"<<endl;
    c.imprime();
    cout<<"El diametro es: "<<c.diametro()<<endl;
    cout<<"La circunferencia es: "<<c.circunferencia()<<endl;
    cout<<"El area es: "<<c.area()<<endl;
    return 0;
}
