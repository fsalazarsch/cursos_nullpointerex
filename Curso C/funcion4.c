#include<stdio.h>
#include <stdlib.h>

void modificar( int valor, int *referencia ){
    valor += 10;
    *referencia += 20;
}

int main(){
    int a = 5, b=10;

    printf("Antes de funcion : \n");
    printf("A: %i\n", a);
    printf("B: %i\n", b);
    
    modificar(a, &b);

    printf("\nDespues de funcion : \n");
    printf("A: %i\n", a);
    printf("B: %i\n", b);

    
    return 0;
    } 

