#include <stdio.h>


typedef struct{
    char nombre[30];
    int dni;
    float promedio;

}alumno;


void cargar(alumno *);
void ordenar(alumno *);
void mostrar(alumno *);


int main()
{
    alumno a[5];

    cargar(a);
    printf("datos cargados\n");
    mostrar(a);
    ordenar(a);
    printf("datos ordenados por promedio\n");
    mostrar(a);

    return 0;
}

void cargar(alumno *pa)
{
    for(int i=0;i<5;i++)
    {
        printf("Ingrese Nombre: ");
        fflush(stdin);
        gets(pa[i].nombre);      //en la ubicacion I el dato nombre
        printf("Ingrese DNI: ");
        scanf("%d",&pa[i].dni);
        printf("Ingrese Promedio: ");
        scanf("%f",&pa[i].promedio);
    }

}
void ordenar(alumno *pa)
{
    alumno aux;
    for(int i=0;i<4;i++)
    {
         for(int j=i+1;j<5;j++){
            if(pa[i].promedio>pa[j].promedio){
                aux=pa[i];
                pa[i]=pa[j];
                pa[j]=aux;
            }
         }

    }
}
void mostrar(alumno *pa)
{
    for(int i=0;i<5;i++)
        printf("nombre: %s\nDNI: %i\nPromedio: %.2f\n",pa[i].nombre,pa[i].dni,pa[i].promedio);

}
