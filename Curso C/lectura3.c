#include<stdio.h>
#include <stdlib.h>

int main( ){

    char oracion[100];
    printf("Escriba la oracion: \t");
    scanf("%[^\n]s", oracion);
    printf("%s\n", oracion);

    return 0;

    } 
