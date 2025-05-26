#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *archivo = fopen( "test.dat" , "wb+");

    int num = 1001;
    
    //fwrite( *puntero,  tamaño (sizeof(___)),  10, archivo )

    fwrite( "Hola Mundo", sizeof(char), strlen("Hola Mundo") +1, archivo );
    fwrite( &num, sizeof(int), 1, archivo );

    rewind(archivo);

    char pal[20];
    int num2;
    
    fread( pal,  sizeof(char), strlen("Hola Mundo") +1, archivo );
    fread( &num2, sizeof(int), 1, archivo );

    printf("Palabra: %s\n", pal);
    printf("Numero: %i\n", num2);



    fclose(archivo);
    return 0;
    } 

