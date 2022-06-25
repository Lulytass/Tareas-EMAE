#include<iostream>
using namespace std;
#include "ConstructorDestructor.h"

Entero::Entero(int n)
{
    dato=n;
    cout<<"Constructor objeto "<<dato<<endl;
}

Entero::~Entero()
{
    cout<<"Destructor objeto "<<dato<<endl;
}
