#include <stdio.h>              //LIBRERIA PARA PODER MOSTRAR POR PANTALLA, ES EL EQUIVALENTE A IOSTREAM DE C++


//PROTOTIPOS
void cargar( int[], int);           //INT[] HACE REFERENCIA A UN ARRAY DE ENTEROS

void mostrar(int[], int);          //ESTA FUNCION SOLO MUESTRA NO HACE RETORNO DE UN CALCULO POR ESO ES VOID

void ordenar(int[], int);


int main()
{
    int numeros[5];     //DECLARACION DEL ARRAY

    cargar(numeros,5);

    printf("Datos cargados\n");     //SALIDA POR PANTALLA

    mostrar(numeros, 5);

    ordenar(numeros,5);

    printf("Datos ordenados\n");

    mostrar(numeros, 5);

    return 0;
}

void cargar(int n[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un mumero: \n");
        scanf("%d",&n[i]);             //INGRESO DE DATOS. PRIMER PARAMETRO ES EL TIPO DE DATO, EL SEGUNDO DONDE SE VA A GUARDAR SIEMPRE CON & ANTES DEL NOMBRE
    }//TIPOS DE DATOS MAS COMUNES INT(%d)  FLOAT(%f)  CHAR(%c)  CHAR[n](%s) <- CADENA
}

void mostrar(int n[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n",n[i]);

    }
}
void ordenar(int n[], int tam)
{
 int i, j, aux;
    for(i=0;i<tam-1;i++)
       for(j=i+1;j<tam;j++)
        if(n[i]>n[j])
        {
           aux=n[i];
           n[i]=n[j];
           n[j]=aux;
       }
}
