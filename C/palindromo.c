#include <stdio.h>
#include <string.h>

int main(){
    int resultado = 1; //1=verdadero; 0=falso
    char palabra[100];
    int largo, i;
    
    scanf("%s",&palabra);
    largo = strlen(palabra);
    
    for(i=0;i<(largo/2); i++)
            if(palabra[i] != palabra[largo-i])
            resultado = 0;
    return 0;
    }
