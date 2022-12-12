//definir estructura punto con cord. x cord. y y dist al origen.
//crear vector de tipo punto de hasta 50 elementos y mediante funciones cargar(la carga termina cuando x e y son = a 0), mostrar y ordenarlo por distancia de menor a mayor
#include <stdio.h>
#include <math.h>
typedef struct
{
    int x,y;
    float dis;
}punto;


int cargar(punto []);
void ordenar(punto [], int);
void mostrar(punto [], int);
int main(){
punto puntos[50];
int n;
n=cargar(puntos);
printf("Datos cargados\n");
mostrar(puntos,n);
ordenar(puntos,n);
printf("Datos ordenados por distancia\n");
mostrar(puntos,n);
return 0;
}

int cargar(punto p[])
{
    int cx,cy,i=0;

        printf("Ingrese un punto X: ");
        scanf("%d",&cx);
        printf("Ingrese un punto Y: ");
        scanf("%d",&cy);
    while(i<50 && (cx!=0 || cy!=0)){
        p[i].x = cx;
        p[i].y = cy;
        p[i].dis= sqrt(cx*cx+cy*cy);
        i++;
        printf("Ingrese un punto X: ");
        scanf("%d",&cx);
        printf("Ingrese un punto Y: ");
        scanf("%d",&cy);
    }
    return i;

}
void ordenar(punto p[], int tam)
{
    int i,j;
    punto auxDis;
    for(i=0;i<tam-1;i++)
    for(j=i+1;j<tam;j++){
        if(p[i].dis>p[j].dis){
            auxDis=p[i];
            p[i]=p[j];
            p[j]=auxDis;
        }
    }
}
void mostrar(punto p[], int tam)
{
    int i;
    for(i=0;i<tam;i++){
        printf("Punto X: %d \nPunto Y: %d \nDist: %.2f\n",p[i].x, p[i].y, p[i].dis);

    }

}
