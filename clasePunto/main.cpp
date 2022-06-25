#include <iostream>

using namespace std;
#include "Punto.h"

int main()
{
    Punto p(72,115);
    cout<<"La coordenada x es: "<<p.getX()<<" y la coordenada y es: "<<p.getY()<<endl;
    p.setX(10);
    p.setY(20);
    cout<<"La nueva ubicacion del punto es: ";
    p.imprime();
    return 0;
}
