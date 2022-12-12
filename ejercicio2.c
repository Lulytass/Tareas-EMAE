#include <stdio.h>

void cargar(int[], int);
void mostrar(int[], int);
int buscar(int[], int, int); //RETORNA UN VALOR ENTERO ASI QUE LA DECLARAMOS COMO INT
int main()
{
   int numeros[10], aBuscar, pos;
    cargar(numeros,10);
    printf("Numeros ingresados\n"); //SALIDA POR PANTALLA
    mostrar(numeros,10);

    printf("ingrese un numero a buscar\n");
    scanf("%d",&aBuscar);   //INGRESAMOS DATOS, PRIMER PARAMETRO EL TIPO DE DATO, EL SEGUNDO ES DONDE SE VA A GUARDAR; SIEMPRE CON UN & ANTES
    pos=buscar(numeros,10,aBuscar); // LO QUE RETORNA LA FUNCION SE VA A GUARDAR EN pos
    if(pos!=-1)
        printf("El numero %d se encuentra en la posicion %d", aBuscar, pos); //SALIDA POR PANTALLA, PRIMER PARAMETRO EL TEXTO CON LOS TIPOS DE DATOS, DESPUES LAS VARIBLES(SIN & YA QUE SOLO SE USA EN EL SCANF) EN EL ORDEN EN EL QUE SE IMPRIMEN
    else
        printf("El numero %d NO se encuentra en el vector", aBuscar);

    return 0;
}


void cargar(int n[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&n[i]);
    }
}

void mostrar(int n[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n",n[i]);

    }
}

int buscar(int n[], int tam, int busc)
{
    int i=0;
    while(n[i]!=busc && i<tam)
    {
        i++;
    }
    if(i>=tam)
        return -1;
    else
        return i;
}
