#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

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

#endif // CLASS_H_INCLUDED
