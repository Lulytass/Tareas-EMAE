#include <stdio.h>

void cargar(int *);     //pasamos la direccion del array
void mostrar(int *);

int main(){

int numeros[10];//se crea en tiempo de compilacion   EL NOMBRE DEL VECTOR REPRESENTA DIRECCION DONDE EMPIEZA
cargar(numeros);
printf("VECTOR CARGADO\n");
mostrar(numeros);
return 0;
}

void cargar(int *pv)
{
    for(int i=0;i<10;i++){
        printf("ingrese un numeros: ");
        scanf("%d",&pv[i]);
    }
}
void mostrar(int *pv)
{
     for(int i=0;i<10;i++){
        printf("%d\n",pv[i]);
    }
}
