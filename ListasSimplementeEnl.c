#include <stdlib.h>     //PORQUE SE USA EL MALLOC
#include <stdio.h>


typedef struct listas   //SE PONE ESTE NOMBRE PARA USARLO EN LA DEFINICION DEL PUNTERO AL SIGUIENTE ELEMENTO
{
    int dni;
    char nombre[15];
    float sueldo;
    struct lista *sig;      //VA A TENER LA DIRECCION DEL PROXIMO ELEMENTO Y SI ES EL ULTIMO NULL
}nodo;


nodo * crearNodo();    //PORQUE VA A RETORNAR LA DIRECCION DEL OBJETO CREADO
void cargarNodo(nodo *);    //PASAMOS LA DIRECCION DEL NODO PARA CARGARLO
void insertarP(nodo **,nodo *);   //PASAMOS LA DIRECCION DEL NODO Y LA CABEZA DE LA LISTA    ES NODO ** PORQUE PASAMOS POR REFERENCIA YA QUE VAMOS A MODIFICAR
void mostrar(nodo *);              //PASAMOS LA DIRECCION DE LA CABECERA PARA MOSTRAR TODO
void eliminarLista(nodo **);          //NODO ** PORQUE VAMOS A MODIFICAR LA VARIABLE, YA QUE VAMOS A MODIFICARLO PARA IR ELIMINANDO

int main()
{
  nodo *cab= NULL, *aux;  //SE DECLARA ESTE PUNTERO PARA GUARDAR LA DIRECCION DEL PRIMER ELEMENTO  !!!!!SI O SI¡¡¡¡ SI NO, NO SABRIAMOS LAS DIRECCIONES DE LOS ELEMENTOS
    //LO DECLARAMOS NULL PORQUE CUANDO SE CREA EL PRIMERO ES EL UNICO
   int cont;

    for(cont=1;cont<=5;cont++)
    {
        aux=crearNodo();//RECIBE EL VALOR QUE RETORNA LA FUNCION
        cargarNodo(aux);
        insertarp(&cab,aux); //PASAMOS POR REFERENCIA LA CABEZA ASI LA MODIFICAMOS ASI QUE USAMOS   &  (DIRECCION DE DIRECCION)
    }
    printf("LISTA CREADA\n");
    mostrar(cab);       //PASAMOS LA DIRECCION DEL PRIMER NODO PARA MOSTRAR TODO
    eliminarLista(&cab);
    return 0;
}

nodo * crearNodo()
{
    nodo * p;
    p=(nodo *) malloc(sizeof(nodo)); //CREAMOS DE A UNO LOS OBJETOS POR ESO NO SE MULTIPLICA

    if(p == NULL)
    {
        printf("insuficiente memoria");
        exit(-1);    //exit -1 salimos por problemas de memoria
    }
    return p;
}
void cargarNodo(nodo *a)          //CARGAMOS LOS DATOS CON CADA UNA DE LAS DIRECCIONES QUE ESTAN EN AUX
{
    printf("ingrese DNI: ");
    scanf("%d",&n->dni);        //USAMOS LA FLECHA PORQUE ES UN PUNTERO N
    printf("ingrese el nombre: ");
    fflush(stdin);
    gets(n->nombre);
    printf("Ingrese sueldo: ");
    scanf("%f",&n->sueldo);
    n->sig=NULL;            //ASIGNAMOS UN NULL EN DONDE SE GUARDAN LAS DIRECCIONES SIGUIENTES
}
void insertarP(nodo **c,nodo *a)
{
    n->sig = *c;    //C tiene la direccion de la variable CAB
    *c= a;
}
void mostrar(nodo *)
{

}
void eliminarLista(nodo **)
{

}
