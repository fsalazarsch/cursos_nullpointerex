#include<stdio.h>
#include <stdlib.h>

int main(){

    int x;
    float a, b;

    printf("OPCIONES \n ===============\n");
    printf("1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n 5) Salida\n\n");
    
    printf("Escriba la opcion: ");
    scanf("%i", &x);
    
    if (x != 5){
        printf("Escriba el valor de A: ");
        scanf("%f", &a);

        printf("Escriba el valor de B: ");
        scanf("%f", &b);
    }

    switch ( x ){

        case 1:
            printf("%f\n", a+ b);
        break;

        case 2:
            printf("%f\n", a - b);
        break;

        case 3:
            printf("%f\n", a * b);
        break;

        case 4:
            if(b == 0){
                printf("No se puede dividir por cero\n");
            }
            else{
                printf("%f\n", a / b);
            }
        break;
        
        case 5:
            printf("\nSalida ...\n");
        break;
        default:
            printf("No se selecciono niguna opción");

    }
 
    return 0;
}
