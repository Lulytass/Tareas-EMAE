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

void cargar(empleado *);

int main()
{
    empleado e;


    cargar(&e);

    printf("dni: %d\nnombre: %s\nsueldo: %.2f\nfecha ingreso: %d/%d/%d", e.dni,e.nombre,e.sueldo,e.fI.dia,e.fI.mes,e.fI.anio);


    return 0;
}

void cargar(empleado *p)
{
    ;
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(p->nombre);                       //NO SE USA EL & EN EL GETS()
    printf("Ingrese dni: ");
    scanf("%d",&p->dni);                //USAMOS -> PORQUE TOMAMOS LOS DATOS CON EL PUNTERO         USAMOS & PORQUE CON EL SCAN SE USA SIEMPRE
    printf("Ingrese sueldo: ");
    scanf("%f",&p->sueldo);
    printf("Ingrese fecha de ingreso: ");
    scanf("%d %d %d",&p->fI.dia, &p->fI.mes, &p->fI.anio);

}
