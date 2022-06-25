   #include "figura.h"
   #include "rectangulo.h"
   #include <iostream>
   #include <iomanip>
   #include <string.h>
   using namespace std;

   int Rectangulo::contador=0;
   Figura::Figura(char nom[])
   {
       setNombre(nom);
   }
    void Figura::setNombre(char nom[])
    {
        strcpy(nombre, nom);
    }
    const char* Figura::mostrar()
    {
        return nombre;
    }
    Rectangulo::Rectangulo(char nom[], float b,float a):Figura(nom)
    {
        setAltura(a);
        setBase(b);
        contador++;
    }
   void Rectangulo::mostrar()
   {
       cout<<"nombre: "<<Figura::mostrar()<<endl;
       cout<<"La base es: "<<base<<", la altura es: "<<altura<<endl;
   }
   void Rectangulo::setBase(float b)
   {
        if(b<1)
            b=1;
        else
            base=b;
   }
   void Rectangulo::setAltura(float a)
   {
       if(a<1)
            a=1;
        else
            altura=a;
   }
   int Rectangulo::getContador()
   {
       return contador;
   }
    float Rectangulo::superficie()
   {
       return base*altura;
   }
   float Rectangulo::perimetro()
   {
       return base*2+altura*2;
   }
