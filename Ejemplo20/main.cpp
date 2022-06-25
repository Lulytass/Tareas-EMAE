#include <iostream>

using namespace std;

int main()
{
    int dia,mes,anio;
    cout<<"Ingrese la fecha: ";
    cin>>dia>>mes>>anio;
    if(mes==1 || mes==3 ||mes==5 ||mes==7 ||mes==8 ||mes==10 ||mes==12)
        if(dia <= 31 && dia >= 1)
            cout << "fecha correcta";
        else
            cout << "fecha incorrecta";


    else if(mes==4 || mes==6 || mes== 9 || mes==11)
        if(dia <=30 && dia >=1)
            cout << "fecha correcta";
        else
            cout << "fecha incorrecta";


    else if(mes==2)
        if(anio %4 == 0 && anio %100 != 0 || anio % 400 == 0)
            if(dia <=29 && dia >=1)
                cout << "fecha correcta";
            else
                cout << "fecha incorrecta";
        else
            if(dia <= 28 && dia>=1)
            cout << "dia correcto";
            else
            cout << "dia incorrecto";
        else
            cout << "fecha incorrecta";

    return 0;
}//cierra la llave del main
