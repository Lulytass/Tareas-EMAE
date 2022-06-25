#include <iostream>
using namespace std;
int menor(int,int,int);
int main()
{
    int num1,num2,num3;
    cout<<"Ingrese tres enteros: ";
    cin>>num1>>num2>>num3;
    cout<<"El valor menor es: "<<menor(num1,num2,num3);
    return 0;
}

int menor(int n1,int n2,int n3)
{
    int men;
    if(n1<n2 && n1<n3)
        men=n1;
    else if(n2<n3)
            men=n2;
        else
            men=n3;
    return men;
}
