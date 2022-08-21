#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{
    ofstream arch;
    int cta;
    float saldo;
    string nombre;

    arch.open("cuentas.txt",ios::out);
    if(!arch)
    {
        cout<<"Error de apertura"<<endl;
        exit(1);
    }
    cout<<"Ingrese el nro de cuenta, 0 para terminar: ";
    cin>>cta;
    while(cta!=0)
    {
        cout<<"Ingrese el nombre: ";
        fflush(stdin);
        getline(cin,nombre);
        cout<<"Ingrese el saldo: ";
        cin>>saldo;
        arch<<cta<<","<<nombre<<","<<fixed<<setprecision(2)<<saldo<<endl;
        cout<<"Ingrese otro nro de cuenta, 0 para terminar: ";
        cin>>cta;
    }
    arch.close();
    return 0;
}
