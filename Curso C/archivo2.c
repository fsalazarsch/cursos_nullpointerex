#include<stdio.h>
#include <stdlib.h>

int main(){

    FILE *archivo = fopen( "test.txt" , "w+");
    fprintf( archivo, "Hola mundo %i", 1001);


    rewind(archivo);
    //fseek( __)

    char palabras[20][20];
    int num;

    fscanf( archivo, "%s %s %i", palabras[0], palabras[1], &num);

    printf("Palabra 1: %s\n", palabras[0]);
    printf("Palabra 2: %s\n", palabras[1]);
    printf("Numero: %i\n", num);

    fclose(archivo);
    return 0;
    } 

