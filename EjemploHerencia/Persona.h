#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona
{
public:
    Persona(char []="");
    void mostrar();
    void setNombre(char []);
private:
    char nombre[30];
};

#endif // PERSONA_H_INCLUDED
