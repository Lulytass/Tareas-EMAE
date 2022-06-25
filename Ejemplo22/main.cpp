#include <iostream>

using namespace std;

int main()
{
    float n1,n2;
    char oper;
    cout<<"Ingrese dos numeros: ";
    cin>>n1>>n2;
    cout<<"Ingrese la operacion: (+,-,*,/) ";
    cin>>oper;
    switch(oper)
    {
    case '+':
        cout<<"La suma es: "<<n1+n2;
        break;
    case '-':
        cout<<"La resta es: "<<n1-n2;
        break;
    case '*':
        cout<<"El producto es: "<<n1*n2;
        break;
    case '/':
        if(n2!=0)
            cout<<"El cociente es: "<<n1/n2;
        else
            cout<<"No se puede dividir por cero";
        break;
    default:
        cout<<"Operacion incorrecta";
    }
    return 0;
}
