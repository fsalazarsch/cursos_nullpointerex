#include<stdio.h>
#include <stdlib.h>

int main(){

    //malloc memory allocate
    //realloc reallocate 
    //free

    int *array;
    int tamanho_inicial = 5; // 0, 10, 20 , 30, 40
    int tamanho_nuevo = 10;
    int i;

    array =  (int *) malloc(  tamanho_inicial * sizeof(int) );

    if (array == NULL){
        printf("Error asignacion memoria");
        return 1;
    }

    printf("Array inicial: \n");
    for (i = 0; i < tamanho_inicial; i ++){
        array[i] = i * 10;
        printf("%i\t",  array[i]);
    }
    printf("\n");

    array = (int *) realloc(  array,  tamanho_nuevo * sizeof(int) );

    if (array == NULL){
        printf("Error reasignacion memoria");
        return 1;
    }

    for (i = tamanho_inicial; i < tamanho_nuevo; i ++){
        array[i] = i * 10;
        printf("%i\t",  array[i]);
    }
    
    printf("\n");
    printf("Nuevo array completto: \n");
    
    for (i = 0; i < tamanho_nuevo; i ++){
        printf("%i\t",  array[i]);
    }

    printf("\n");
    
    free(array);
    array = NULL;


    return 0;
    } 

