#include <iostream>
#include "class.h"
using namespace std;


int main()
{
    float lar,anc;
   Rectangulo rec1,rec(5,7);
   rec.mostrar();
   cout << "ingrese largo: ";
   cin>>lar;
    cout << "ingrese ancho: ";
   cin>>anc;
   rec1.setAncho(anc);
   rec1.setLargo(lar);
   rec1.mostrar();
    return 0;
}
