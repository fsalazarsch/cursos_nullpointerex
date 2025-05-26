#include<stdio.h>
#include <stdlib.h>


float suma(float, float);
void saludo();
int* aobtenerArray();
char*  saludo2();
int factorial(int);


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
