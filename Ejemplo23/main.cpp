#include <iostream>

using namespace std;

int main()
{
    int mes,anio;
    cout<<"Ingrese el nro de mes: ";
    cin>>mes;
    cout<<"Ingrese el año: ";
    cin>>anio;
    switch(mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout<<"Tiene 31 dias";
        break;
    case 4: case 6: case 9: case 11:
        cout<<"Tiene 30 dias";
        break;
    case 2:
        if(anio%4==0 && anio%100!=0 || anio%400==0)
            cout<<"Tiene 29 dias";
        else
            cout<<"Tiene 28 dias";
        break;
    default:
        cout<<"Mes incorrecto";
    }
    return 0;
}
