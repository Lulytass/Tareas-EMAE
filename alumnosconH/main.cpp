#include <iostream>
#include "Alumno.h"
#include <iomanip>
using namespace std;

int main()
{
    Alumno a2(5,10,8,"Alejandro");

    char nom[30];
    float n1,n2,n3;
    cout << "ingrese el nombre del alumno: ";
    cin >> nom;
    cout << "ingrese nota: ";
    cin >> n1;
    cout << "ingrese nota: ";
    cin >> n2;
    cout << "ingrese nota: ";
    cin >> n3;
    Alumno al(n1,n2,n3,nom);

    a2.mostrar();

    al.mostrar();
    return 0;
}
