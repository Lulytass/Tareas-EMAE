#include <iostream>
#include "class.h"
#include <string.h>
using namespace std;



int main()
{
    Punto puntito(4,6);
    cout<<"la cordenada x es: "<<puntito.getX()<<endl;
    cout<<"la cordenada y es: "<<puntito.getY()<<endl;
    puntito.setX(10);
    puntito.setY(20);
    cout<< "La nueva ubicacion del punto es";
    puntito.imprime();
    return 0;
}

