#include<stdio.h>
#include <stdlib.h>

int main(){

    int x;
    float y;
    double z;
    char c;
    char palabra[20];

    printf("Escriba la variable int: \t");
    scanf("%i", &x);

    printf("Escriba la variable float: \t");
    scanf("%f", &y);

    printf("Escriba la variable duoule: \t");
    scanf("%lf", &z);

    printf("Escriba la variable char: \t");
    scanf(" %c", &c);

    printf("Escriba la variable strinf: \t");
    scanf("%s", palabra);

    printf("Int: %i\n float %f\n double : %f\n char %c\n string %s\n", x, y,z, c, palabra);

    return 0;

    } 

