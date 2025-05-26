#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x, y;

    printf("Escriba el valor de X: \t");
    scanf("%i", &x);
    printf("Escriba el valor de Y: \t");
    scanf("%i", &y);
    
    //  >, <, >=, <=, ==, !=
    // VERDADERO  = 1
    // FALSO  = 0
    

    printf(" resultado  > : %i\n", x > y); 
    printf(" resultado  < : %i\n", x < y);
    printf(" resultado  >= : %i\n", x >= y); 
    printf(" resultado  =< : %i\n", x <= y);
    printf(" resultado  == : %i\n", x == y); 
    printf(" resultado  != : %i\n", x != y);


    
    return 0;

    } 

