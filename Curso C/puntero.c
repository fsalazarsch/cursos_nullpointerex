#include<stdio.h>
#include <stdlib.h>

int main(){

    int numero = 10;
    int *puntero = &numero;
    
    //  |10| --> puntero

    printf("Valor numero : %i\n", numero);
    printf("Direccion numero : %p\n", &numero);
    printf("Valor del puntero : %p\n", puntero);
    printf("Valor al que apunta: %i\n", *puntero);

    *puntero =20;
    
    printf("Valor numero : %i\n", numero);
    
    return 0;
    } 

