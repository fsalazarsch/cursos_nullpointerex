#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef WIN32  
    #define clearsc(); system("cls");
    #endif
    #ifdef __unix__

    #define clearsc(); system ("clear");
    #endif
    #ifdef WIN
    #define clearsc(); system ("cls");
    #endif 

struct casilla(){
       int num;
       int color;
       int par_impar; //0 si es par 1 si es impar
       }cas[38];
    
void azar();
void tipo_apuesta();

int main (){
    do{
    tipo_apuesta();
       azar();
        getchar();
        clearsc();
        }while(1);
    
    return 0;
    }

void tipo_apuesta(){
    int opc;
    printf("Tipo de apuesta\n");
    printf("");
    Suertes sencillas 	18 números 	1 a 1
Columnas y docenas 	12 números 	2 a 1
Seisena 	6 números 	5 a 1
Cuadro 	4 números 	8 a 1
Transversal 	3 números 	11 a 1
Caballo o semipleno 	2 números 	17 a 1
Pleno 	1 número 	35 a 1
    switch(opc){
             case 1:
                  
                  break;
             }
    }

void azar(){
       srand(time(NULL));
       int azar = rand();
       srand(azar);

      printf ("%d\n", rand() % 38);
      }
