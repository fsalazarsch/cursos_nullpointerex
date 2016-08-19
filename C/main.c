#include <stdio.h>
#include <winbgim.h>
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


int res[8][3];
int menu();
int opciones(int, int[]);
char dec_binario(int, char[]);
void bin_dec(float);
void pasar_arregl_bin(int[]);
int largo(int[]);

void Clickmouse();
void iniciar_grafica(int[8][3]);

int main()
{
        int array[] = {62, 18, 32, 56, 04, 16, 42, 13, 10, 23, 35};
    /*int array[30000] ,j;
    for(j=0;j<30000;j++)
    array[j] = 30000-j;
    array[30000] = '\0';*/
    
    int opc, opcentrada;
    do{
    clearsc();
    opc = menu();
    
    iniciar_grafica(res);
    
    }while(opciones(opc, array) == true);
    int a = 16, b = 1;
    
    printf("\n%d   %d", a, b);
    swap(&a, &b);
    printf("\n%d   %d", a, b);
    
    getchar();
    getchar();
    return 0;
    }

int menu(){
    int opc;
    printf("Ordenamiento\n============\n");
    printf("1) HeapSort (Arboles de Decisión)\n2) Selección\n");
    printf("3) Reemplazo - Selección\n4) Inserción\n5) Bublesort\n6) Shellsort\n\n");

    printf("7)Salir\n\n");
    printf("Seleccione una opción:\t");
    scanf("%d", &opc);
    
    return opc;
    }

int opciones(int op, int array[]){
     int flag = 0;
     switch(op)
     {
     case -1:
     system("explorer http://creativecommons.org/licenses/by-nc-sa/3.0/es/");
     getchar();getchar();
     break;
     case 0:
          printf("No se consideran los siguinetes algorimos:\n - Mezcla directa\\natural de orden 2\n - Mezcla directa\\natural de orden superior\n - Selección cuadrática\n");
          printf("Y los algoritmos de ordenación de archivos:\n - Ordenamiento externo\n - Ordenamiento balanceado\n - Ordenamiento polifase\n");
          printf(" - Ordenamiento cascada\n - Ordenamiento con discos\n");
          getchar();getchar();
          break;
     case 1: //listo
          heapsort(array, res[2], 13);
          printf("%d, %d, %d\n", res[2][0], res[2][1], res[2][2]);
          printf("El largo de arreglo es: %d", largo(array));
          getchar();getchar();
          break;
     case 2://listo
          selectsort(array, res[3],13);
          printf("%d, %d, %d\n", res[3][0], res[3][1], res[3][2]);
          printf("El largo de arreglo es: %d", largo(array)); 
          getchar();getchar();
          break;
     case 3://listo
          rem_sel(array, res[4],13);
          printf("%d, %d, %d\n", res[4][0], res[4][1], res[4][2]);
          printf("El largo de arreglo es: %d", largo(array)); 
          getchar();getchar();
          break;
     case 4://listo
          insertsort(array, res[5],13);
          printf("%d, %d, %d\n", res[5][0], res[5][1], res[5][2]);
          printf("El largo de arreglo es: %d", largo(array)); 
          getchar();getchar();
          break;
     case 5://listo
          bubblesort(array, res[6],13);
          printf("%d, %d, %d\n", res[6][0], res[6][1], res[6][2]);
          printf("El largo de arreglo es: %d", largo(array)); 
          getchar();getchar();
          break;
     case 6: //listo
          shellsort(array, res[7],13);
          printf("%d, %d, %d\n", res[7][0], res[7][1], res[7][2]);
          printf("El largo de arreglo es: %d", largo(array)); 
          getchar();getchar();
          break;
     case 7:
           flag = 1;
          break;     
     default:   
          break;
      
              }
    return flag;
     }

void iniciar_grafica(int res[8][3]){
         
    initwindow(400,300); 
        
    settextstyle(0,0,2);
    setcolor(RED);
    outtextxy(20,100,"%d", res[0][0]);
    setcolor(GREEN);
    outtextxy(60,130,"Click this window");
    outtextxy(120,160,"to exit.");
    
                
    // while(!kbhit());
    Clickmouse();
    closegraph();

     
     }

void Clickmouse()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50;
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}

