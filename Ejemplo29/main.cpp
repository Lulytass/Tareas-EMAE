#include <iostream>

using namespace std;
bool es_par(int);
int main()
{
    int num;
    cout<<"Ingrese un entero: ";
    cin>>num;
    if(num!=0)
    {
        if(es_par(num))// if(es_par(num)==true)
            cout<<"El numero es par";
        else
            cout<<"El numero es impar";
    }
    else
        cout<<"El numero es cero";
    return 0;
}
bool es_par(int n)
{
    return n%2==0;
}

/*
bool es_par(int n)
{
    if(n%2==0)
        return true;
    else
        return false;
}
*/
