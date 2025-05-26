#include <stdio.h>
 
struct barco{
       int jugador;
       char nombre[10];
        
       char casillas[5][2];
       int estado; //1=0K 0= Hundido
       };
 
int main(){
    char tablero[11][13];
    int i,j;
 
    for(i=0;i<13;i++)
    for(j=0;j<11;j++)
    tablero[j][i] = '.';
 
    for(i=0;i<13;i++){
    printf("\n");
    for(j=0;j<11;j++)
    printf("[%c]", tablero[j][i]);
    }
     
     
    getchar();
    return 0;
    }
