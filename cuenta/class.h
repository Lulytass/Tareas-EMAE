#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
class Cuenta
{
public:
    Cuenta();
    void setTitular(char[20]);
    void setCantidad(int);
    void mostrar();
    int ingresar(int);
    int retirar(int);
private:
    char titular[20];
    int cantidad;
};


#endif // CLASS_H_INCLUDED
