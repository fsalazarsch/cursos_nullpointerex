#include<stdio.h>
#include <stdlib.h>

int main(){

    unsigned char a = 5; //-->   0000 0101
    unsigned char b = 3; //-->   0000 0011

    printf("a = %u\n", a);
    printf("b = %u\n", b);
    
    //And -> &

    //0000 0101
    //0000 0011
    //0000 0001

    printf("a & b: %u\n", a & b);

    //Or -> |

    //0000 0101
    //0000 0011
    //0000 0111

    printf("a | b: %u\n", a | b);

    // complemento ~
    // 0000 0101
    // 1111 1010
    printf("~a : %u\n", (unsigned char) (~a) );
    
    //XOR  O exclusivo 
   /* 
    1 1 : f  
    0 1 : v
    1 0 : v
    0 0 : f
    */

    //0000 0101
    //0000 0011
    //0000 0110
    printf("a ^ b: %u\n", a ^ b);


    //0000 0101 
    //desplazamiento <<
    //0000 1010 
    printf("a << 1 : %u\n",  a << 1);

    //0000 0101 
    //desplazamiento <<
    //000 0010 
    
    printf("a >> 1 : %u\n",  a >> 1);

    


    return 0;
    } 

