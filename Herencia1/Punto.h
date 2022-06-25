#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto
{
public:
    Punto(int=0,int=0);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void imprime();
protected:
    int x,y;
};

#endif // PUNTO_H_INCLUDED
