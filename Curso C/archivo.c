#include<stdio.h>
#include <stdlib.h>

int main(){

    // apertura

    //fopen( nombre del archivo, modo)

    // r --> escritura (read)
    // w --> escritura (write) , sobreescribe
    // a --> final (append)

    // rb   --> binarios
    // wb 
    // ab

    // r+ --> leer y modificar
    // w+ --> si no exite lo crea
    // a+ --> lo crea si no existe

    // wb+
    /*
    qweqweq
    */

    FILE *archivo = fopen( "test2.txt" , "w+");
    printf("El archiv se abrio\n");



    //cerrar
    fclose(archivo);
    printf("El archiv se cerró\n");


    return 0;
    } 

