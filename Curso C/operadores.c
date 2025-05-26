#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x = -4;
    float y = 2.73;

    int a = 17;
    int b = 4;

    //suma
    printf("%f\n", x + y);

    //resta
    printf("%.2f\n", x - y);
    
    //multiplicacion
    printf("%f\n", -x * y);
    
    //division
    printf("%f\n", x / y);
    

    //division
    printf("%i\n",  a / b);
    printf("%f\n", (float) a / b);
    
    
    //resto %
    // 5 :2 = 2 --> 1
    printf("%i\n",  a % b);
    
    printf("%f", pow( (double) 2, (double) 3 ));


    return 0;

    } 

