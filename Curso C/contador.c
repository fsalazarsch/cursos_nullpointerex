#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 5;
    printf("%i\n", x);
    
    x = x + 2; // 7
    //x += 2;

    printf("%i\n", x);

    x = x - 4; // 3
    //x -= 4;
    printf("%i\n", x);

    x = x * -3; // 3
    //x +=-3
    printf("%i\n", x);

    x = x / 2;
    //x /= 2;
    printf("%i\n", x);

    x = x % 5;
    //x %= 5;
    printf("%i\n", x);


    //x = x +1 --> x +=1
    
    int y = 5;
    int y_1 = y++;

    int z = 5;
    int z_1 = ++z;
    
    printf( " y : %i, y_1: %i\n", y ,y_1 );
    printf( " z : %i, z_1: %i\n", z ,z_1 );

    
    return 0;

    } 

