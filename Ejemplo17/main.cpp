#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Ingrese tres enteros: ";
    cin>>n1>>n2>>n3;
    if(n1<n2 && n1<n3)
        cout<<n1<<" es el menor";
    else if(n2<n3)
            cout<<n2<<" es el menor";
        else
            cout<<n3<<" es el menor";
    return 0;
}
