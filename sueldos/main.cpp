#include <iostream>
#include <iomanip>
using	namespace std;
class Empleados
{
    public:

    constructor();
    void indSueldo();
    void totalSueldo();
    void sueldos(int, float);

    private:

        int horas, precio;
        float sueldo, sueldototal;

};
Empleados::constructor()
{
    horas= 0;
    sueldo=0;
    sueldo=0;
    sueldototal=0;
}
void Empleados::indSueldo(){
    cout << "El sueldo de este empleado es: $"<<fixed<<setprecision(2)<<sueldo<<endl;
}
void Empleados::totalSueldo(){
    cout<<"El total de los sueldos es: $"<<fixed<<setprecision(2)<<sueldototal<< endl;
}
void Empleados::sueldos(int h, float p){
    while(h != 0 )
    {
        cout << "ingrese la cantidad de horas trabajadas:  "<<endl;
        cin >> h;
        horas=h;
        if (h != 0){
            cout << "Cual es el precio por hora trabajada: "<<endl;
            cin >> p;
            precio=p;
            sueldo= h*p;
            sueldototal+=(h*p);
            indSueldo();
            }
    }
}
int main()
{

    Empleados emp;

    emp.sueldos(5,10);
    emp.totalSueldo();

    return 0;
}

