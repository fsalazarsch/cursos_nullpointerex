#include<stdio.h>
#include <stdlib.h>

int main(){

    int x;

    printf("Escriba la opcion de x : ");
    scanf("%i", &x);

    if (  x > 10  ) {
        printf("El numero es mayor que 10\n");
    }

    if (  x > 15  ) {
        printf("El numero es mayor que 15\n");
        if (x >= 20){
            printf("El numero es mayoro igual que 20\n");    
        }
    }

    if (  x > 10  ) {
        printf("El numero es mayor que 10\n");
    }
    else{
        //if (){
        //}else{}
        printf("El numero es menor o igual que 10\n");
    } 



    return 0;
    } 
