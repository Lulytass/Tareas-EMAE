#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
class Alumno
{
public:

    Alumno(float, float, float, char[]);
    float promedio();
    float mayor();
    void mostrar();


private:

    float nota1, nota2, nota3;
    char nombre[35];
};




#endif // ALUMNO_H_INCLUDED
