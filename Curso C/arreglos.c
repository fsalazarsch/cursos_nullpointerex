#include<stdio.h>
#include <stdlib.h>

int main(){

    char ch = 'A';
    char palbra[] = "Hola";

    int x = 5;
    int arreglo[] = { -20, -10 , 0, 10, 20 };

    printf("%i, ", arreglo[0]);
    printf("%i, ", arreglo[1]);
    printf("%i, ", arreglo[2]);
    printf("%i, ", arreglo[3]);
    printf("%i", arreglo[4]);


    int matriz[][3] ={
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\n");
    printf("%i, ", matriz[0][0]);
    printf("%i, ", matriz[0][1]);
    printf("%i, ", matriz[0][2]);
    printf("\n");
    printf("%i, ", matriz[1][0]);
    printf("%i, ", matriz[1][1]);
    printf("%i, ", matriz[1][2]);
    printf("\n");
    
    char palabras[][10] = {
        "uno",
        "dos",
        "tres",
        "cuatro"
    };

    printf("%s\n", palabras[0]);
    printf("%s\n", palabras[1]);
    printf("%s\n", palabras[2]);

    printf("%c\n", palabras[1][1]);

    
    scanf("%i", &matriz[0][0]);



    return 0;

    } 

