#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

class Figura
{
public:
    Figura(char[]="");
    void setNombre(char[]);
    const char* mostrar();
private:
    char nombre[15];
};
#endif // FIGURA_H_INCLUDED
