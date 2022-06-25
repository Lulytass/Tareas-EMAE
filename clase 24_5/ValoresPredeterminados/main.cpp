#include <iostream>

using namespace std;
#include "Hora.h"
int main()
{
    Hora h1,h2(2),h3(15,40),h4(20,10,45),h5(69,90,80);
    cout<<"Hora 1"<<endl;
    h1.mostrar12();
    h1.mostrar24();
    cout<<"Hora 2"<<endl;
    h2.mostrar12();
    h2.mostrar24();
    cout<<"Hora 3"<<endl;
    h3.mostrar12();
    h3.mostrar24();
    cout<<"Hora 4"<<endl;
    h4.mostrar12();
    h4.mostrar24();
    cout<<"Hora 5"<<endl;
    h5.mostrar12();
    h5.mostrar24();
    return 0;
}
