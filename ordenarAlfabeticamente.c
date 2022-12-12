#include <stdio.h>
#include <string.h>
typedef struct
{
    char nombre[30];
    int dni;
    float sueldo;
}datos;

void cargar(datos[], int);
void mostrar(datos[], int);
void ordenar(datos[], int, int);
int menu();

int main()
{
    datos empleados[5];
    int opc;
    //INGRESAMOS LOS DATOS POR TECLADO
    cargar(empleados, 5);

    printf("SE MUESTRAN LOS DATOS CARGADOS\n");
    mostrar(empleados, 5);

    //MENU
    printf("SELECCIONES EL DATO QUE TENDRA EN CUENTA PARA EL ORDEN\n");
    opc=menu();
            switch(opc)
            {
                case 1:
                    printf("Cuentas ordenadas por DNI");
                    break;
                case 2:
                    printf("Cuentas ordenadas por Sueldo");
                    break;
                case 3:
                    printf("Cuentas ordenadas por nombre");
                    break;
            }
            //ORDENAMOS LOS DATOS
            ordenar(empleados, 5, opc);




    printf("\nMOSTRAMOS LOS DATOS ACOMODADOS\n");
    mostrar(empleados, 5);

    return 0;
}

void cargar(datos emp[],int tam)
{
    int i;
    for(i=0;i<tam;i++){
        printf("Ingrese el nombre del empleado: ");
        fflush(stdin);
        gets(emp[i].nombre);
        printf("Ingrese el DNI del empleado: ");
        scanf("%d", &emp[i].dni);
        while(emp[i].dni < 1){
            printf("Ingrese un dato correcto: ");
            scanf("%d", &emp[i].dni);
        }
        printf("Ingrese el sueldo del empleado: ");
        scanf("%f", &emp[i].sueldo);
        printf("\n");
    }
}

void mostrar(datos emp[],int tam)
{
    int i;
    for(i=0;i<tam;i++){
        printf("Nombre: %s \nDNI: %d \nSueldo: %.2f \n", emp[i].nombre, emp[i].dni, emp[i].sueldo);
    }
}

void ordenar(datos emp[],int tam, int opc)
{
    int i,j;
    datos aux;
    for(i=0;i<tam-1;i++)
    for(j=i+1;j<tam;j++){
        if(opc == 1){
            if(emp[i].dni>emp[j].dni){
                aux= emp[i];
                emp[i]=emp[j];
                emp[j]=aux;
            }
        }
        else if(opc == 2){
            if(emp[i].sueldo>emp[j].sueldo){
                aux= emp[i];
                emp[i]=emp[j];
                emp[j]=aux;
        }
    }
    else{
       if(strcmp(emp[i].nombre, emp[j].nombre)> 0)
       {
        aux= emp[i];
        emp[i]=emp[j];
        emp[j]=aux;
       }
    }
}
}
int menu()
{
    int opc;
    printf("1. Ordenar por DNI\n");
    printf("2. Ordenar por Sueldo\n");
    printf("3. Ordenar por Nombre\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion: ");
     do
    {
        scanf("%d",&opc);
        if(opc<1 || opc>4)
            printf("Opción incorrecta\n");
    }while(opc<1 || opc>4);

    return opc;
}
