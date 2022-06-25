#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona
{
public:
    Persona(char[]="");
    const char* mostrar();
    void setNombre(char[]);
private:
    char nombre[15];
};

#endif // PERSONA_H_INCLUDED
