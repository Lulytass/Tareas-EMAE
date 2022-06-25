#ifndef EMPLEADO2_H_INCLUDED
#define EMPLEADO2_H_INCLUDED

class Empleado
{
public:
    Empleado();
    Empleado(int, int, float, char[]);
    void setAntiguedad(int);
    void setDni(int);
    void setSueldo(float);
    void setNombre(char[]);
    void mostrar();
    float sueldoACobrar();

private:
    int antiguedad, dni;
    float sueldo;
    char nombre[35];
};

#endif // EMPLEADO2_H_INCLUDED
