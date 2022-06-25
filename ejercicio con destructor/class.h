#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Punto
{
public:
    Punto(int=0,int=0);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void imprime();
    private:
        int x, y;
};

#endif // CLASS_H_INCLUDED
