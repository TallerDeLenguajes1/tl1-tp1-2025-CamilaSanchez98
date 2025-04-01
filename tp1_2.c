#include <stdio.h>

int CalcularCuadrado(int num);
void CalcularCuadradoVacio(int num);
void DireccionYcontenido(int *pVariable);
void Invertir(int *x, int *y);
void Orden(int *x, int *y);

int main(){
    //las funciones están hechas para numero entero, si quiero para un numero más grande o con punto flotante  deberia crear otras funciones para mayor eficiencia
    int numero = 10;
    int cuadrado = CalcularCuadrado(numero);
    DireccionYcontenido(&numero);
    printf("FORMA 1: El cuadrado es: %d\n", cuadrado);
    CalcularCuadradoVacio(numero);


    printf("----------------------------------------------\n");

    int a, b;
    printf("Ingrese un número entero a: ");
    scanf("%d", &a);
    printf("Ingrese un número entero b: ");
    scanf("%d", &b);

    printf("Antes de invertir: a = %d, b = %d\n", a, b);
    Invertir(&a, &b);
    printf("Después de invertir: a = %d, b = %d\n", a, b);

    printf("Antes de ordenar de menor a mayor: a = %d, b = %d\n", a, b);
    Orden(&a, &b);
    printf("Después de ordenar de menor a mayor: a = %d, b = %d\n", a, b);

    printf("----------------------------------------------\n");
    printf("----------------------------------------------\n");

    int c, d;
    printf("Ingrese un número entero c: ");
    scanf("%d", &c);
    printf("Ingrese un número entero d: ");
    scanf("%d", &d);

    printf("Antes de invertir: c = %d, d = %d\n", c, d);
    Invertir(&c, &d);
    printf("Después de invertir: c = %d, d = %d\n", c, d);

    printf("Antes de ordenar de menor a mayor: c = %d, d = %d\n", c, d);
    Orden(&c, &d);
    printf("Después de ordenar de menor a mayor: c = %d, d = %d\n", c, d);


    return 0;
}

int CalcularCuadrado(int num){
    return num * num;
}

void CalcularCuadradoVacio(int num){
    printf("FORMA 2: El cuadrado del número %d es: %d\n", num, num * num);
}

void DireccionYcontenido(int *pVariable){
    printf("El contenido de la variable es: %d\n", *pVariable);
    printf("La dirección de memoria de la variable es: %p\n", (void*)pVariable);
}

void Invertir(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void Orden(int *x, int *y){
    if (*x > *y) {
        int aux = *x;
        *x = *y;
        *y = aux;
    }
}
