//3 numeros enteros(a,b,c) y con una funcion los ordenamos que en a quede el mas chico, en b el del medio y en c el mayor

#include <stdio.h>

void ordenamos(int *, int *, int *);

int main()
{
    int a,b,c;
    printf("Ingrese 3 numeros enteros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a= %d\nb= %d\nc= %d\n",a,b,c);
    printf("NUMEROS YA ORDENADOS");
    ordenamos(&a,&b,&c);
    printf("a= %d\nb= %d\nc= %d\n",a,b,c);
    return 0;
}

void ordenamos(int *pa, int *pb, int *pc)
{
    int aux;
    if(*pa>*pb){            //LOS IF NO PUEDEN ESTAR ANIDADOS PORQUE TIENEN QUE PASAR POR TODOS SI O SI
        aux=*pa;
        *pa=*pb;
        *pb=aux;
    } if(*pa>*pc){
        aux=*pa;
        *pa=*pc;
        *pc=aux;
    } if(*pb>*pc){
        aux=*pb;
        *pb=*pc;
        *pc=aux;
    }

}
