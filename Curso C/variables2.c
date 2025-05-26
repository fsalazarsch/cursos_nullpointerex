#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 5;  
    unsigned int y = 6;
    short int  corto = -123;
    long int largo = 123456789012345;    
    long double pi = 3.14151415141514151415;
    

    printf("Entero: %i\n", x);
    printf("Unsigned Entero: %u\n", y);

    printf("Entero corto : %hd\n", corto);
    printf("Entero largo : %ld\n", largo);

    printf("Double largo : %Lf\n", pi);



    return 0;
    } 

