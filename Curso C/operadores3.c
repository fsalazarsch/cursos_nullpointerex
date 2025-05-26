#include<stdio.h>
#include <stdlib.h>

int main(){

    // AND  &&
    // OR  ||
    // NOT  !


    /*1 0
    0 1
    1 1
    0 0*/
    //--> v ; 0--> f

    int v = 1;


    printf("1 AND 1: %i\n",  1 && 1 );
    printf("1 AND 0: %i\n",  1 && 0 );
    printf("0 AND 1: %i\n",  0 && 1 );
    printf("0 AND 0: %i\n",  0 && 0 );

    printf("===========================\n");
    
    printf("1 OR 1: %i\n",  1 || 1 );
    printf("1 OR 0: %i\n",  1 || 0 );
    printf("0 OR 1: %i\n",  0 || 1 );
    printf("0 OR 0: %i\n",  0 || 0 );

    printf("===========================\n");

    printf("%i\n", v);
    printf("%i\n", !v);
    

    


    return 0;
    } 

