#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <sys/timeb.h>
#include <sys/time.h>
#include "orden.h"

    #ifdef WIN32   
    #define clearsc(); system("cls");
    #endif
    #ifdef __unix__
    #define clearsc(); system ("clear");
    #endif 
    #ifdef WIN
    #define clearsc(); system ("cls");
    #endif 

//enum bool{true, false};

float res[22][3];
int menu();
int opciones(int, int[]);
float dec_binario(int);
void bin_dec(float);
//int array[] = {62, 18, 32, 56, 04, 16, 42, 13, 10, 23, 35};
    
char dist_dig(int[]);
using namespace std;
int main(){
    //int array[] = {62, 18, 32, 56, 04, 16, 42, 13, 10, 23, 35};
    int array[10000] ,j;
    for(j=0;j<10000;j++)
    array[j] = 10000-j;
    
    int opc, opcentrada;
    do{
    clearsc();
    opc = menu();
    //printf("%d", opc);
    }while(opciones(opc, array) == false);
    int a = 16, b = 1;
    
    
    printf("\n%d   %d", a, b);
    
    
    swap(&a, &b);

    printf("\n%d   %d", a, b);
    
    printf("%0.0f ", dec_binario(57));
    
    bin_dec(dec_binario(57));
    
    getchar();
    getchar();
    return 0;
    }
    

int menu(){
    int opc;
    printf("Ordenamiento\n============\n");
    printf("1) QuickSort\n2) BinSort\n3) RadixSort\n4) Arboles de Decisión\n5) Selección\n6) Selección cuadrática\n7) Reemplazo- Selección\n");
    printf("8) Inserción\n9) Bublesort\n10) Mergesort\n11) Mezcla directa de orden 2\n12) Mezcla directa de orden superior\n");
    printf("13) Ordenamiento por distribución y dígito\n14) Ordenamiento por cálculo de dirección\n15) BucketSort\n16) Shellsort\n17) HeapSort\n\n");

    printf("18)Salir\n\n");
    printf("Seleccione una opción:\t");
    scanf("%d", &opc);
    
    return opc;
    }

int opciones(int op, int array[]){
     int flag = 0;
     switch(op)
     {
     case 1:
          break;
     case 2:
          break;
     case 3:
          break;
     case 4:
          break;
     case 5:
          break;
     case 6:
          break;
     case 7:
          break;
     case 8:
          break;
     case 9:
          bubblesort(array, res[8]);
          printf("%f, %f, %f\n", res[8][0], res[8][1], res[8][2]);
          getchar();getchar();
          break;
     case 10:
          break;
     case 11:
          break;
     case 12:
          break;
     case 13:
          printf("%f", dist_dig(array));
          break;
     case 14:
          break;
     case 15:
          break;
     case 16:
          break;
     case 17:
          break;
     case 18:
           flag = 1;
          break;     
     default:   
          break;
      
              }
    return flag;
     }

float dec_binario(int num){
    //maximo 1.048.575
    int i=0;
    float buffer = 0;
    int aux[20] = {0};
    while(num > 1){
    aux[i] = num%2;
    i++;
    num /= 2;
    }
    aux[i] = num;
    
    for(i=0;i<20;i++)
       buffer += aux[i]* pow(10, i);       

    return buffer;
    }

void bin_dec(float num){
    int i=0;
    float aux =0;
    while(num > 1){
    
    aux += ((int)num%10) * pow(2,i);
    num /= 10;
    i++;
    }
    
    printf("%0.0f", aux);
    }

char dist_dig(int array[]){
     char c = 'c';
     int i = 0, b[(sizeof(array))/4];
     
     for(i=0; i<(sizeof(array))/4; i++ ){
     b[i] = (int) dec_binario(array[i]);
     }
     for(i=0; i<(sizeof(array))/4; i++ ){
     printf ("%d", b[i]);
     }
     
     //float b = dec_binario(array);
     getchar();getchar();
     return c;
     }
