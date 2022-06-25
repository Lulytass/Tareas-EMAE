#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado
{
public:
    Empleado(char [], int, float);
    void mostrar();
    float sueldo();
private:
    char nombre[25];
    int horas;
    float precioh;
};

#endif  EMPLEADO_H_INCLUDED
