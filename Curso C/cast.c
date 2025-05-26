#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 5;
    float f =  (float) x;

    printf("Entero : %i\n", x);
    printf("Float : %f\n", f);


    float y = -6.34;
    int parse =  (int) y;

    printf("Float : %f\n", y);
    printf("Entero : %i\n", parse);
    

    char letra = 'a';
    int parse2 = (int) letra;

    printf("Letra : %c\n", letra);
    printf("Entero parseado 2: %i\n", parse2);

    int a = 66;
    char conv =  (char) a;

    printf("Entero letra: %i\n", a);
    printf("Letra parseada: %c\n", conv);
    
    
    //atoi --> ascii to int    
    char str[] = "1234";
    int num  = atoi(str);

    printf("String: %s\n", str);
    printf("numer: %i\n", num);

    //itoa(numer(int), str(char[]), base=10)

    return 0;
    } 

