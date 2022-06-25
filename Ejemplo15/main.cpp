#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
    if(num1%num2==0)
        cout<<"El primero es multiplo del segundo";
    else
        cout<<"El primero NO es multiplo del segundo";
    return 0;
}
