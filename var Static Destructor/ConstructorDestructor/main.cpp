#include <iostream>

using namespace std;
#include "ConstructorDestructor.h"
void crear();
int main()
{
    Entero obj1(1);
    crear();
    Entero obj2(2);
    return 0;
}

void crear()
{
    Entero obj3(3);
    Entero obj4(4);
}
