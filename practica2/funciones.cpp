#include <iostream>
#include "empleado.h"
#include "string.h"

using namespace std;

Empleado::Empleado()
{
    strcpy(nombre, " ");
    basico=0;
    diast=0;
    horast=0;
    presentismo=0;
    faltas=0;
    antiguedad=0;
}
Empleado::Empleado(char n[], float b, int d, int h, int p, int faltas, int a)
{
    setNombre(n);
    setBasico(b);
    setDiast(d);
    setHorast(h);
    setPresentismo(p);
    setFaltas(faltas);
    setAntiguedad(a);
}
  char Empleado::setNombre(char n[])
  {
      strcpy(nombre, n);
  }
    float Empleado::setBasico(float b)
    {
        if(b>0)
            basico=b;
        else
            basico=0;
    }
    void Empleado::setDiast(int d)
    {
        if(d>0)
            diast=d;
        else
            diast=0;
    }
    void Empleado::setHorast(int h)
    {
        if(h>0)
            horast=h;
        else
            horast=0;
    }
    void Empleado::setPresentismo(int p)
    {
        if(p == 30)
            presentismo= 25;
        else if (p>27)
            presentismo=20;
        else
            presentismo=0;
    }
    void Empleado::setFaltas(int f)
    {
        if(f>0 && f <31)
            faltas=f;
        else
            faltas=0;
    }
    void Empleado::setAntiguedad(int a)
    {
        if (a>0)
            antiguedad=a;
        else
            antiguedad=0;
    }
    void Empleado::mostrar()
    {
        cout<<"Nombre del empleado: "<<nombre<<endl<<"Dias Trabajados: "<<diast<<endl<<"Sueldo a Cobrar: "<<sueldoACobrar();
    }
    int Empleado::sueldoACobrar()
    {
        return 1000;
    }
