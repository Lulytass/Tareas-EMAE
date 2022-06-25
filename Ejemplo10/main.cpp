#include <iostream>

using namespace std;

int main()
{
    int num,u,d,c,um,dm;
    cout<<"Ingrese un numero de 5 cifras: ";
    cin>>num;
    u=num%10;
    d=num/10%10;
    c=num/100%10;
    um=num/1000%10;
    dm=num/10000%10;
    cout<<dm<<"-"<<um<<"-"<<c<<"-"<<d<<"-"<<u<<endl;
    return 0;
}
