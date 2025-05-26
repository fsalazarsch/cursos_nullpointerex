#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char ch = 'a';
    
    //| h| o| l| a| _| _| ...|\0|
    //  0  1  2  3
    
    char str1[10] = "Hola";
    char str2[] = "Hola2";

    ch = str2[2];

    printf("Caracter: %c \n", ch);
    
    printf("String 1: %s \n", str1);
    printf("String 2: %s \n", str2);


    return 0;
    } 

