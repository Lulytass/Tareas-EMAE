#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado
{
public:
    Empleado(char []="",char []="");
    ~Empleado();
    void setNombre(char []);
    void setApellido(char []);
    const char *getNombre();
    const char *getApellido();
    static int getContador();
private:
    char nombre[25],apellido[30];
    static int contador;
};
#endif // EMPLEADO_H_INCLUDED
