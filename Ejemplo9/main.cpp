#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float lado1,lado2,lado3,p,area;
    cout<<"Ingrese los lados de un triangulo: ";
    cin>>lado1>>lado2>>lado3;
    p=(lado1+lado2+lado3)/2;
    area=sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
    cout<<"El area es: "<<fixed<<setprecision(2)<<area<<endl;
    return 0;
}


