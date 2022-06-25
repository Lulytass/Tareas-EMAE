#include <iostream>

using namespace std;
int triple(int);//prototipo de la funcion
int main()
{
    int num,result;
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    result=triple(num);
    cout<<"El triple de "<<num<<" es "<<result;
    return 0;
}
int triple(int n)
{
    int r;
    r=3*n;
    return r;
}
