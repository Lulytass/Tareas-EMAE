#include <stdio.h>
typedef struct{
    int dia,mes,anio;
}fecha;

typedef struct{
    int dni;
    char nombre[30];
    float sueldo;
    fecha fI;
}empleado;

int main()
{

    empleado e={32845233,"Lucia",215325.59,01,07,2007}, *p;
    p=&e;

    printf("dni: %d\nnombre: %s\nsueldo: %.2f\nfecha ingreso: %d/%d/%d", p->dni,p->nombre,p->sueldo,p->fI.dia,p->fI.mes,p->fI.anio);
    return 0;
}
