#include <iostream>

using namespace std;

int main()
{
    int nota;
    cout<<"Ingrese la nota: ";
    cin>>nota;
    if(nota>=1 && nota<=10)
    {
        if(nota>=4)
            cout<<"Aprobado";
        else
            cout<<"Desaprobado";
    }
    else
        cout<<"Nota incorrecta"<<endl;

    return 0;
}


