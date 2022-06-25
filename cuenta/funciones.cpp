#include <string.h>
#include "class.h"
#include <iostream>

using namespace std;

Cuenta::Cuenta(){
strcpy(titular,"");
cantidad=0;
}
void Cuenta::setTitular(char nom[20])
{
    strcpy(titular,nom);
}
void Cuenta::setCantidad(int num)
{
    if(num>0)
        cantidad=num;
    else
        cantidad=0;
}
void Cuenta::mostrar()
{
cout<<"titular de la cuenta: "<<titular<<endl<<"Cuenta: "<<cantidad<<endl;
}
int Cuenta::ingresar(int ing)
{
    if (ing>0)
        cantidad+=ing;
}
int Cuenta::retirar(int ext)
{
    if(ext>0)
        cantidad-=ext;
}
