#include <stdio.h>

void cargar(char[][15],int[], float[], int);    //EL TAMAÑO DEL ARRAY NO SE COMPLETA, PERO EL DE CADA COMPONENTE SI
void mostrar(char[][15],int[], float[], int);
void ordenarPorSueldo(char[][15],int[], float[], int);

int main()
{
   int dni[5];
   float sueldo[5];
   char nombres[5][15];             //PRIMER[] MARCA EL TAMAÑO DEL ARRAY, EL SEGUNDO EL TAMAÑO DE LO QUE SE INGRESA  (A ESTO SE LO LLAMA MATRIZ)
    cargar(nombres, dni, sueldo, 5);
    printf("DATOS INGRESADOS\n");
    mostrar(nombres, dni, sueldo, 5);
    printf("DATOS INGRESADOS EN FORMA CRECIENTE CRECIENTES\n");
    ordenarPorSueldo(nombres,dni, sueldo, 5);
    mostrar(nombres, dni, sueldo, 5);

    return 0;
}


void cargar(char n[][15], int d[], float s[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un nombre: \n");
        scanf("%s",&n[i]);
        printf("Ingrese un DNI sin puntos: \n");
        scanf("%d",&d[i]);
        printf("Ingrese el sueldo: \n");
        scanf("%f",&s[i]);
    }
}

void mostrar(char n[][15], int d[], float s[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%s DNI Nro %d percibe en razon de sueldo %f\n",n[i],d[i],s[i]);

    }
}

void ordenarPorSueldo(char n[][15],int d[], float s[], int tam)
{
    int i, j, auxd;
    float aux;
    char auxn[15];
    for(i=0;i<tam-1;i++)
        for(j=i+1;j<tam;j++)
        if(s[i]>s[j])
    {
        //ORDENAMOS LOS SUELDOS
        aux=s[i];
        s[i]=s[j];
        s[j]=aux;
        //ORDENAMOS LOS NOMBRES
        memcpy(auxn,n[i],15);   //1er PARAMETRO DESTINO, 2do UBICACION ACTUAL, TAMAÑO
        memcpy(n[i],n[j],15);   //1er PARAMETRO DESTINO, 2do UBICACION ACTUAL, TAMAÑO
        memcpy(n[j],auxn,15);   //1er PARAMETRO DESTINO, 2do UBICACION ACTUAL, TAMAÑO
        //ORDENAMOS LOS DNI
        auxd=d[i];
        d[i]=d[j];
        d[j]=auxd;
    }
}
