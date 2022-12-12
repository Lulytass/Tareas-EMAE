//distancia = raiz cuadrada de x al cuadrado + y al cuadrado
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct{
    int x,y;
    float distancia;
}punto;

void cargar(punto *, int);
void mostrar(punto *, int);
void ordenar(punto *, int);

int main()
{
    punto *p;
    int cant;

    printf("Con cuantos datos quiere trabajar: ");
    scanf("%d",&cant);

    p=(punto*) malloc(cant * sizeof(punto));
    if(p == NULL){
        printf("Insuficiente memoria\n");
        exit(-1);
    }
    cargar(p,cant);
    printf("Datos cargados\n");
    mostrar(p,cant);
    printf("Datos ordenados\n");
    ordenar(p,cant);
    mostrar(p,cant);


    free(p);
    return 0;
}

void cargar(punto *p, int c)
{
    for(int i=0; i<c;i++){
        printf("Ingrese el punto x: ");
        scanf("%d",&p[i].x);
        printf("Ingrese el punto y: ");
        scanf("%d",&p[i].y);
        p[i].distancia=sqrt((p[i].x*p[i].x)+(p[i].y*p[i].y));
    }
}
void mostrar(punto * p, int c)
{
     for(int i=0; i<c;i++){
        printf("(%d,%d) distancia: %.2f\n",p[i].x,p[i].y,p[i].distancia);
    }
}
void ordenar(punto * p, int c)
{
    punto aux;
    for(int i=0; i<c-1;i++){
        for(int j=i+1; j<c;j++){
            if(p[i].distancia>p[j].distancia){
                aux=p[i];
                p[i]=p[j];
                p[j]=aux;
            }
        }
    }
}
