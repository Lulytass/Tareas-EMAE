#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo
{
public:
    Circulo(int=0,int=0,float=0);
    void setX(int);
    void setY(int);
    void setRadio(float);
    int getX();
    int getY();
    float getRadio();
    float diametro();
    float circunferencia();
    float area();
    void imprime();
private:
    int x,y;
    float radio;
};

#endif // CIRCULO_H_INCLUDED
