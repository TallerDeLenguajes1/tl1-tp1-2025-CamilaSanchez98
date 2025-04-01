#include <stdio.h>

int main(){

    printf("Hola mundo :)\n");

    int variable = 16;
    int *puntero = &variable;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamaño de la variable en memoria: %zu bytes\n", sizeof(variable));

    return 0;
}

