#include <stdio.h>
//VAMOS A HACER UNA FUNCION QUE INTERCAMBIE EL VALOR DE DOS FUNCIONES ENTRE ELLAS USANDO PUNTEROS
//PASAJE POR REFERENCIA
void intercambio(int*,int*);    //SE PONE * PORQUE PASAMOS PUNTEROS
int main()
{
    int a=10, b=20;

    printf("a=%d\nb=%d",a,b);
    intercambio(&a,&b);             //PASAMOS LAS DIRECCIONES DE LAS VARIABLES
    printf("\na=%d\nb=%d",a,b);

    return 0;
}
void intercambio(int *va,int *vb)       //ENTRAMOS EN LAS DIRECCIONES
{
    int aux;
    aux=*va;        //EL CONTENIDO APUNTADO POR va LO PONEMOS EN AUX
    *va=*vb;        //EL CONTENIDO APUNTADO POR vb LO PONEMOS COMO CONTENIDO DENTRO DE va
    *vb=aux;        //EL CONTENIDO DE AUX LO PONEMOS DENTRO DE vb
}
