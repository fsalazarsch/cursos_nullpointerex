#include<stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main( ){

    int resultado = suma( 5, 2);
    printf("Funcion resultado: %i\n", resultado );

    saludo();

    int* arrayMain = aobtenerArray();
    printf("Elementos %i, %i, %i\n", arrayMain[0], arrayMain[1], arrayMain[2]);

    char* auxiliar = saludo2();
    printf("%s\n", auxiliar);

    int num = 5;
    printf("El factorial de %i es %i\n", num, factorial(num));

    printf("El factorial de 0 es %i\n", factorial(0));

    return 0;
    } 

