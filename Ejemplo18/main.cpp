#include <iostream>

using namespace std;

int main()
{
    float nota;
    cout<<"Ingrese la nota: ";
    cin>>nota;
    if(nota>=1 && nota<=10)
    {
        if(nota==10)
            cout<<"Excelente";
        else if(nota>=8)
            cout<<"Muy bien";
            else if(nota>=6)
                cout<<"Bien";
                else if(nota>=4)
                    cout<<"Regular";
                    else
                        cout<<"Mal";
    }
    else
        cout<<"Nota incorrecta"<<endl;

    return 0;
}

