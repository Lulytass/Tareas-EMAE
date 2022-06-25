#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
class Empleado
{
public:
    Empleado();
    Empleado(char [],int,float,int);
    void setNombre(char []);
    void setDni(int);
    void setAntig(int);
    void setSueldo(float);
    void mostrar();

private:
    char nombre[30];
    int dni,antig;
    float sueldo;
    float sueldoACobrar();
};


#endif // EMPLEADO_H_INCLUDED
