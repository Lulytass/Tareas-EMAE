#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado
{
public:
    Empleado(char [],int,float);
    void mostrar();
private:
    char nombre[25];
    int dni;
    float sueldo;
};

#endif // EMPLEADO_H_INCLUDED
