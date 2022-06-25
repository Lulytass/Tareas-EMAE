#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Rectangulo
{
public:
    Rectangulo(int=1,int=1);
    void setBase(int);
    void setAltura(int);
    int getBase();
    int getAltura();
    int perimetro();
    int superficie();
private:
    int base, altura;

};

#endif // CLASS_H_INCLUDED
