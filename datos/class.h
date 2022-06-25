#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Persona{
    public:
        Persona();
        void setNombre(char[]);
        void setEdad(int);
        void setDni(int);
        bool esMayorDeEdad(int);
        void mostrar();
    private:
        char nombre[25];
        int edad, dni;
};

#endif // CLASS_H_INCLUDED
