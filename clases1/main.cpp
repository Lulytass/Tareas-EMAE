#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main()
{

    Rectangulo r(5, 7);
    r.perimetro();
    r.area();
    Rectangulo r1(2, 4);
    r1.perimetro();
    r1.area();

    return 0;
}
