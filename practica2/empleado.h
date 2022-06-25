#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado
{
public:
    Empleado();
    Empleado(char[], float, int, int, int, int, int);
    char setNombre(char[]);
    float setBasico(float);
    void setDiast(int);
    void setHorast(int);
    void setPresentismo(int);
    void setFaltas(int);
    void setAntiguedad(int);
    void mostrar();
    int sueldoACobrar();
private:
    char nombre[35];
    float basico;
    int diast, horast, presentismo, faltas, antiguedad;
};


#endif // EMPLEADO_H_INCLUDED
