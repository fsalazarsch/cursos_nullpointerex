#include<stdio.h>
#include <stdlib.h>


//tipo_deaadto nombre( parametros ){
//    ---codigo
//    return var/cte;
//}

float suma( float a, float b ){
    return  (a + b);
}

void  saludo(){
    printf("Hola ... \n");
} 

int* aobtenerArray(){
    static int arr[] = {10, 20, 30};
    return arr;
}

char*  saludo2(){
    char* saludo = "Hola 2 ....";
    return saludo;
}

//5! = 5x4x3x2x1
int factorial( int x ){
    if ((x == 0) || (x == 1)){
        return 1;
    } 
    else{
        return x * factorial(x -1);
    }

}


int main( ){

    int resultado = suma( 5, 2);
    printf("Funcion resultado: %i\n", resultado );

    saludo();

    int* arrayMain = aobtenerArray();
    printf("Elementos %i, %i, %i\n", arrayMain[0], arrayMain[1], arrayMain[2]);

    char* auxiliar = saludo2();
    printf("%s\n", auxiliar);

    int num = 5;
    printf("El factorial de %i es %i\n", num, factorial(num));

    printf("El factorial de 0 es %i\n", factorial(0));

    return 0;
    } 

