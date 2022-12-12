//Hacer un programa que ingrese por teclado el radio de un circulo y con una funcion
//se calcule el circunferencia y la superficie. El main muestra los resultados
#include <stdio.h>

void supCircun(float *, float *, float);

int main()
{
    float radio, superficie, circunferencia;
    printf("Ingrese el Radio del circulo: ");
    scanf("%f",&radio);

    supCircun(&superficie,&circunferencia,radio);

    printf("El circulo con radio %.2f, tiene una Superficie de %.2f y una Circunferencia de %.2f",radio,superficie,circunferencia);
    return 0;
}

void supCircun(float *sup, float *circ, float r)
{
    *sup= 3.14*(r*r);
    *circ= 2*3.14*r;
}
