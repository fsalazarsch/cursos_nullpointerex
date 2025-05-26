#include<stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){

    FILE *archivo = fopen( "test2.txt" , "a+");

    //fseek( archivo, -5, SEEK_END)
    //SEEK_SET --> Desde le inicio
    //SEEK_CUR --> DESDE LA POSICION ACTUAL
    //SEEK_END --> desde le final

    fseek( archivo, 0, SEEK_END);

    //fseek(archivo, 0, SEEK_SET);
    //rewind(archivo);

    //fseek(archivo, 0, SEEK_END);
    //feof(archivo);

    long tamanho =  ftell( archivo);
    printf("Tamano del archivo : %li bytes\n", tamanho );


    fclose(archivo);
    return 0;
    } 

