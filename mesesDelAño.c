//Defina una struct que guarde el nombre de un mes, una abreviatura de 3 letras y el numero de dias el mes.
//Hacer un programa que permita ingresar N fechas con formato dd/mm/aaaa y para cada fecha que se ingreso diga cuantos dias
//pasaron desde el inicio del año
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char abrev[4];
    char nombre[20];
    int cantdias;
}mes;

int cantidad(mes [], int, int, int);

int main(){
mes meses[12]={"ene","Enero",31,"feb","Febrero",28,"mar","Marzo",31,"abr","Abril",30,"may","Mayo",31,"jun","Junio",30, "jul","Julio",31,"ago","Agosto",31,"set","Septiembre",30,"oct","Octubre",31,"nov","Noviembre",30,"dic","Diciembre",31};
int n,d,m,a,i;
char fecha[12];

printf("Ingrese la cantidad de fechas que va ingresar: ");
scanf("%d", &n);

for(i=0;i<n;i++){
    printf("ingrese la fecha separada con /: ");
    fflush(stdin);
    gets(fecha);
    d=atoi(strtok(fecha,"/"));
    m=atoi(strtok(NULL,"/"));
    a=atoi(strtok(NULL,"/"));
    printf("cantidad de dias transcurridos %d\n",cantidad(meses,d,m,a));
}
return 0;
}

int cantidad(mes v[], int d, int m, int a){
    int suma=d, i;
    for(i=0; i <m-1 ; i++){
        suma+=v[i].cantdias;
    }
    if((a % 4 == 0 && a % 100 != 0 || a % 400==0) && m > 2)
        suma++;
    return suma;
}
