#include <stdio.h>

void superficieYPerimetro(int,int,int *,int *);

int main()
{
    int lado1=0,lado2=0,sup=0,per=0;

    printf("ingrese los dos lados del rectangulo: ");
    scanf("%d %d",&lado1,&lado2);
    printf("\nEl rectangulo con lado1: %d y lado2: %d cuenta con una superficie de %d y un perimetro de %d\n",lado1,lado2,sup,per);

    superficieYPerimetro(lado1,lado2,&sup,&per);
    printf("El rectangulo con lado1: %d y lado2: %d cuenta con una superficie de %d y un perimetro de %d",lado1,lado2,sup,per);

    return 0;
}

void superficieYPerimetro(int l1,int l2,int *s,int *p)
{
    *s= l1 * l2;
    *p= l1 * 2 + l2 * 2;
}
