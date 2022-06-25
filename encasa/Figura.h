#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

class Figura
{
public:
    Figura(char[]="");
    const char* mostrar();
    void setNombre(char[]);
private:
    char nombre[15];
};
#endif // FIGURA_H_INCLUDED
