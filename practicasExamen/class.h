#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Vendedor
{
    public:
        Vendedor(char[]="", int=0, int=0,float=0);
        void setNombre(char[]);
        void setSueldoBasico(int);
        void setComision(int);
        void setVentas(float);
        const char* getNombre();
        int getSueldoBasico();
        int getComision();
        float getVentas();
        float sueldoACobrar();
    private:
        char nombre[15];
        int sueldoBasico, comision;
        float ventas;
};

#endif // CLASS_H_INCLUDED
