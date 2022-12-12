#include <stdio.h>
#include <stdlib.h>     //libreria que tiene las finciones para asignar y liberar memoria


void cargar(int *,int);
void mostrar(int *, int);
int maximo(int *, int);
void ordenar(int *, int);

int main()
{
    int *pV, cant;       //declaramos la variable de tipo puntero porque es la que vamos a pasar para crear el vector de forma dinamica

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d",&cant);

    pV=(int*)/*con esto convertimos a int lo que retorne malloc*/malloc(cant*sizeof(int));       //MALLOC es la funcion que asigna memmoria dinamica
                                                //multiplicamos la cantidad por el tamaño que ocupa un entero
                                                //MALLOC RETORNA UN PUNTERO A VOID
    if(pV==NULL){
        printf("Insuficiente memoria");
        exit(-1);        //es exit -1 porque se dice que no se asigno memoria
    }
    cargar(pV,cant);
    printf("Datos cargados\n");
    mostrar(pV,cant);               // no se usa el & porque la variable ya es de tipo puntero. es un pasaje por valor
    int mayor=maximo(pV,cant);
    printf("El numero mas grande es %d\n",mayor);
    printf("Datos ordenados\n");
    ordenar(pV,cant);
    mostrar(pV,cant);


    free(pV); //funcion para liberear la memoria
    return 0;
}

void cargar(int *p,int c)
{
    for(int i=0; i< c; i++){
        printf("Ingrese un numero: ");
        scanf("%d",&p[i]);
    }
}
void mostrar(int *p, int c)
{
     for(int i=0; i< c; i++)
        printf("%d\n",p[i]);
}
int maximo(int *p, int c)
{
    int aux=0;
    for(int i=0; i< c; i++){
        if(aux < p[i]){
            aux= p[i];
        }
    }
    return aux;
}
void ordenar(int *p, int c)
{
    int aux;
    for(int i=0; i< c-1; i++){
        for(int j=i+1; j<c;j++){
            if(p[i]>p[j]){
                aux=p[i];
                p[i]=p[j];
                p[j]=aux;
            }
        }
    }
}
