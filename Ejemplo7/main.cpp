#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int gradosC;
    float gradosF;
    cout<<"Ingrese los grados centigrados: ";
    cin>>gradosC;
    gradosF=9.0/5*gradosC+32;
    cout<<"Los grados Fahrenheit son: "<<fixed<<setprecision(2)<<gradosF<<endl;
    return 0;
}
