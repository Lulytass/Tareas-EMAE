#include <stdio.h>

typedef struct{
    int dni;
    char nombre[30];
    float sueldo;
}empleado;



int main()
{
    empleado e={32845233,"Lucia",215325.59}, *p;
    p=&e;

    printf("dni: %d\nnombre: %s\nsueldo: %.2f", p->dni,p->nombre,p->sueldo);


    return 0;
}
