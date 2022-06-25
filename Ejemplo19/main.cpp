#include <iostream>

using namespace std;

int main()
{
    int lado1,lado2,lado3;
    cout<<"Ingrese los lados del triangulo: ";
    cin>>lado1>>lado2>>lado3;
    if(lado1==lado2 && lado1==lado3)
        cout<<"Es equilatero";
    else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
        cout<<"Es escaleno";
        else
            cout<<"Es isosceles";
    return 0;
}
