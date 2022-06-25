#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED

class Hora
{
public:
    Hora(int=0,int=0,int=0);
    void setHora(int,int,int);
    void mostrar12();
    void mostrar24();
private:
    int hora,minuto,segundo;
};

#endif // HORA_H_INCLUDED
