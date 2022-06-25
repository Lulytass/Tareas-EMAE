#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona
    {
        public:
        Persona(char[]="");
        void mostrar();
        const char*setNombre(char[]);
    private:
        char nombre[15];
    };

#endif // PERSONA_H_INCLUDED
