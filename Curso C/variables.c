#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 5;
    float pi = 3.14;
    double pi2 = 3.1415;
    char ch = 'a';

    printf("Entero: %i\n", x);
    printf("Float: %.2f\n", pi);
    printf("Double: %.5f\n", pi2);
    printf("Caracter: %c \n", ch);
    

    float f = 0.12345678901234567890;
    double d = 0.12345678901234567890;

    printf(" float:  %.10f \n double %.17f\n  ", f, d);


    return 0;
    } 

