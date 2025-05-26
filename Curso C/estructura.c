#include<stdio.h>
#include <stdlib.h>
#include <string.h>

/*struct Persona{
    char nombre[30];
    int edad;
};*/

typedef struct{
    char nombre[30];
    int edad;
}Persona;


int main(){

    //struct Persona p;
    Persona p;

    //strcpy( nombre_variable, valor );

    strcpy(p.nombre, "Felipe");
    p.edad = 35;

    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %i\n", p.edad);
    

    Persona *p2 = malloc( sizeof(Persona));
    
    strcpy(p2->nombre, "Ignacio");
    p2->edad = 36;

    printf("Nombre2: %s\n", p2->nombre);
    printf("Edad2: %i\n", p2->edad);


    return 0;
    } 

