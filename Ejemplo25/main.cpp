#include <iostream>
#include<iomanip>
using namespace std;
float promedio(int,int,int);
int main()
{
    int num1,num2,num3;
    cout<<"Ingrese tres enteros: ";
    cin>>num1>>num2>>num3;
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio(num1,num2,num3);
    return 0;
}

float promedio(int n1,int n2,int n3)
{
    return (n1+n2+n3)/3.0;
}
