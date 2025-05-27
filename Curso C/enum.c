#include<stdio.h>
#include <stdlib.h>

enum dias {
    LUNES = 2,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

int main(){

    enum dias hoydia = MIERCOLES;
    
    printf("Dia: %i\n", hoydia);



    return 0;
    } 
