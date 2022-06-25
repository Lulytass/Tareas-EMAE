#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Rectangulo
{
public:
    Rectangulo();
    Rectangulo(float,float);
    void setLargo(float);
    void setAncho(float);
    float perimetro();
    float area();
    void mostrar();
private:
   float largo, ancho;
};

#endif // CLASS_H_INCLUDED
