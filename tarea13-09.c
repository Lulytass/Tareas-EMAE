//Definir struct con CODIGO DEL OBRERO, NOMBRE, CATEGORIA(1,2,3),HORAS TRABAJADAS. Hacer un vector de 5 elementos.
//Una funcion para CALCULAR EL SUELDO DE CADA EMPLEADO, MOSTRAR TODO, INCLUIDO EL TOTAL DE SUELDOS A PAGAR.
//tener en cuenta que CATEGORIA 1: $100xH, CATEGORIA 2: $150xH, CATEGORIA 3: $200xH.
#include <stdio.h>

typedef struct{
    char nombre[30];
    int codigo, categoria,horasTrabajadas;
}obrero;

void cargar(obrero *);
void sueldos(obrero *);

int main()
{
    obrero ob[5];

    cargar(&ob);
    sueldos(&ob);

    return 0;
}

void cargar(obrero *o){
    for(int i=0;i<5;i++){
        printf("Ingrese el nombre del obrero: ");
        fflush(stdin);
        gets(o[i].nombre);
        printf("Ingrese el codigo del empleado: ");
        scanf("%i",&o[i].codigo);
        for(int j=0;j<i;j++){
            if(o[i].codigo==o[j].codigo){
                do{
                    printf("Ingrese un nuevo codigo ya que el ingresado esta en uso: ");
                    scanf("%i",&o[i].codigo);
                }while(o[i].codigo==o[j].codigo);
            }
        }
        printf("Ingrese la categoria del empleado: ");
        scanf("%i",&o[i].categoria);
        if(o[i].categoria<1 || o[i].categoria>3)
        do{
            printf("Ingrese una categoria correcta para el empleado: ");
            scanf("%i",&o[i].categoria);
        }while(o[i].categoria<1 || o[i].categoria>3);
        printf("Ingrese las horas trabajadas por empleado: ");
        scanf("%i",&o[i].horasTrabajadas);
    }
}

void sueldos(obrero *o){
    int sueldoE=0, sueldosT=0;
    printf("\n%*s %*s %*s %*s %*s\n",-10,"NOMBRE",-10,"CODIGO",-10,"CATEGORIA",-10,"HORAS TRAB",-10,"SUELDO");
        for(int i=0;i<5;i++){
            if(o[i].categoria == 1){
                sueldoE=100*o[i].horasTrabajadas;
                sueldosT+=sueldoE;
            }
             else if(o[i].categoria == 2){
                sueldoE=150*o[i].horasTrabajadas;
                sueldosT+=sueldoE;
            }
             else{
                sueldoE=200*o[i].horasTrabajadas;
                sueldosT+=sueldoE;
            }
            printf("%*s %*d %*d %*d %*d\n",-10,o[i].nombre,-10,o[i].codigo,-10,o[i].categoria,-10,o[i].horasTrabajadas,-10,sueldoE);
        }
        printf("El total de sueldos a pagar el corriente mes es de: %d\n",sueldosT);
}
