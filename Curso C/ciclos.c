#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 1, y;

    
    while(  x < 10 ){
        printf(" %i\t", x);
        x += 1; 
    }

    printf("\n");
    //x = 1;

    do{
        printf(" %i\t", x);
        x += 1; 
    }while( x < 10 );

    printf("\n");

    //for(  cond_inicial ; expresion  ; despues )
    for( y = 1  ; y < 10  ; y++ ){
        printf("y : %i\n", y);

    }


    int a;
    scanf("%i", &a);
    
    if (a > 7){
        goto marcador;
    }
    printf("No pasa por GOTO\n");

    marcador:
        printf("Si paso por GOTO\n");



    return 0;
    } 

