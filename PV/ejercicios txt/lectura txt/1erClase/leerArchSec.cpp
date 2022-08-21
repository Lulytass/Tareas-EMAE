#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    ifstream arch;
    string line;
    const char *linea;
    char lin[100];
    char *cta,*nom,*saldo;
    arch.open("cuentas.txt",ios::in);
    if(!arch)
    {
        cout<<"Error de apertura"<<endl;
        exit(1);
    }

    cout<<left<<setw(10)<<"Cuenta"<<setw(25)<<"Nombre"<<setw(8)<<"Saldo"<<endl;
    getline(arch,line);
    while(!arch.eof())
    {
        linea=line.c_str();
        strcpy(lin,linea);
        cta=strtok(lin,",");
        nom=strtok(NULL,",");
        saldo=strtok(NULL,",");
        cout<<left<<setw(10)<<atoi(cta)<<setw(25)<<nom<<setw(8)<<fixed<<setprecision(2)<<atof(saldo)<<endl;
        getline(arch,line);
    }
    arch.close();
    return 0;
}
