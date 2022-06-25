#include <iostream>
#include "Rectangulo.h"
#include <math.h>
using namespace std;

Rectangulo::Rectangulo(int l, int a)
{
    if(l>0)
    largo=l;
    else
    largo=0;
if(a>0)
    ancho=a;
    else
    ancho=0;

}
void Rectangulo::perimetro()
{
    int total= largo*2 + ancho*2;
    cout<< "el perimetro es "<<total<<endl;
}
void Rectangulo::area()
{
        int total= largo*ancho;
    cout<< "el area es "<<total<<endl;

}
