#include <stdio.h>

int main(){
int a=10;
int *dir=NULL;
dir=&a;
printf("valor que contiene a= %d\n",a);                 //RETORNAMOS EL VALOR DE LA VARIABLE INT DESDE LA MISMA VARIABLE
printf("valor que contiene a= %d\n",*dir);              //RETORNAMOS EL VALOR DE LA VARIABLE INT DESDE EL PUNTERO
printf("direccion de a= %p\n",&a);                      //MOSTRAMOS LA DIRECCION DE LA VARIABLE USANDO LA VARIABLE CON & Y TIPO DE DATO %P
printf("direccion de a= %p\n",dir);                     //MOSTRAMOS LA DIRECCION DE LA VARIABLE USANDO EL PUNTERO Y TIPO DE DATO %P

return 0;
}
