#ifndef OBRERO_H_INCLUDED
#define OBRERO_H_INCLUDED

class Obrero
{
public:
    Obrero(char [],int ,float);
    void mostrar();
    float sueldo();
private:
    char nombre[30];
    int horas;
    float precio;
};

#endif // OBRERO_H_INCLUDED
