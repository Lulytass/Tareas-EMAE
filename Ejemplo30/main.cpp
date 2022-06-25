#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float perimetro(int,int);
float hipotenusa(int,int);
int main()
{
    int cat1,cat2;
    float per;
    cout<<"Ingrese los catetos del triangulo rectangulo: ";
    cin>>cat1>>cat2;
    per=perimetro(cat1,cat2);
    cout<<"El perimetro es: "<<fixed<<setprecision(2)<<per;
    return 0;
}
float perimetro(int c1,int c2)
{
    float hipo;
    hipo=hipotenusa(c1,c2);
    return c1+c2+hipo;
}

float hipotenusa(int c1,int c2)
{
    return sqrt(c1*c1+c2*c2);
}
