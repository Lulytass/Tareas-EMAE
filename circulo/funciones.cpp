#include "class.h"
#include <iostream>
#include <iomanip>

using namespace std;




  Circulo::Circulo(int valorx ,int valory,float valorRadio)
  {
      x=valorx;
      y=valory;
      setRadio(valorRadio);
  }
    void Circulo::setX(int valorx)
    {
         x=valorx;
    }
    void Circulo::setY(int valory)
    {
        y=valory;
    }
    void Circulo::setRadio(float valorRadio)
    {
     if(valorRadio<0)
        radio=0;
     else
        radio=valorRadio;
    }
     int Circulo::getX()
     {
         return x;
     }
    int Circulo::getY()
    {
        return y;
    }
    float Circulo::getRadio()
    {
        return radio;
    }
    float Circulo::diametro()
    {
        return radio*2;
    }
    float Circulo::circunferencia()
    {
        return 2*3.14*radio;
    }
    float Circulo::area()
    {
        return 3.14*radio*radio;
    }
    void Circulo::imprime()
    {
        cout<<"Centro = ["<<x<<","<<y<<"]"<<" Radio: "<<radio<<endl;
    }
