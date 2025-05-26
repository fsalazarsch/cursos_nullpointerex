#include<stdio.h>
#include <stdlib.h>

typedef unsigned long int enteroGrande;

int main(){

    enteroGrande x = 123456789;
    printf("Numero:  %lu\n", x);

    printf("El tamano de enterogrande es %lu bytes\n", sizeof(enteroGrande));


    return 0;
    } 

