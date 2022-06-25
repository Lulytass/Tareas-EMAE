#include <iostream>

using namespace std;
int menu();
int main()
{
    int n1,n2,oper;
    cout<<"Ingrese dos enteros: ";
    cin>>n1>>n2;
    oper=menu();
    switch(oper)
    {
    case 1:
        cout<<"La suma es: "<<n1+n2;
        break;
    case 2:
        cout<<"La resta es: "<<n1-n2;
        break;
    case 3:
        cout<<"El producto es: "<<n1*n2;
        break;
    case 4:
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

int menu()
{
    int opc;
    cout<<"1-SUMAR"<<endl;
    cout<<"2-RESTAR"<<endl;
    cout<<"3-MULTIPLICAR"<<endl;
    cout<<"4-DIVIDIR"<<endl;
    cout<<"Elija una opcion de menu: ";
    cin>>opc;
    return opc;
}
