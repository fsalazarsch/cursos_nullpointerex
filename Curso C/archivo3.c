#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *archivo = fopen( "test.txt" , "r");

    /**
     * adasda
     * asdasdas
     * asdasdsa qweqwe
     * xzczxcz
     */

    char linea[256];

    //fgets( linea, int memoria_linea, archivo )
    //strcspn( string_buscando,  strng coincidencia )

    while(  fgets(linea, sizeof(linea), archivo) ){
        linea[ strcspn(linea, "\r\n") ] = '\0';
        printf ("Linea leida: %s\n", linea);
    }

    if ( feof(archivo) ){
        printf("\n\nSe lleo al final del archivo");
    }

    fclose(archivo);

    
    return 0;
    } 

