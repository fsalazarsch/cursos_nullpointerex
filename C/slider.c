#include <stdio.h>
#include <time.h>
#include <stdlib.h>


    #ifdef WIN32   
    #define clearsc(); system("cls");
    #endif
    #ifdef __unix__
    #define clearsc(); system ("clear");
    #endif 
    #ifdef WIN
    #define clearsc(); system ("cls");
    #endif 
    
//Nombre: Rompecabezas slider
//Autor: Felipe Salazar Schlotterbeck
void swap(int,int);

int main(){
    int matriz[5][5], i,j,k=0;
    int array[25], aux;
    int salida =0;
    int coord_x, coord_y;
    char dir;
    
    for(k=0;k<25;k++)
           array[k] = k;

     srand (time(NULL));
    for(k=0;k<25;k++){
        j = rand()%25;
        aux = array[k];
        array[k] = array[j];
        array[j] = aux;       
        }
               
        k=0;        
     for(i=0;i<5;i++){
       for(j=0;j<5;j++){
           matriz[i][j] = array[k];
           k++;
           }}
    

    do{
           for(i=0;i<5;i++){
       printf("\n");
       for(j=0;j<5;j++){
               if(matriz [i][j] == 0){
               coord_x = j;
               coord_y = i;
               }
               if(matriz[i][j] <10)
               printf("[0%d]  ",matriz[i][j]);
               else
                printf("[%d]  ",matriz[i][j]);
           }
       }
       printf("\n(%d,%d)",coord_x+1, coord_y+1 );
    printf("\nEscriba la posición a mover: ");
    
    scanf("%c",&dir);
         if(dir == 'w')
                if((coord_y-1) >= 0){
                aux = matriz[coord_y][coord_x];
                matriz[coord_y][coord_x] = matriz[coord_y-1][coord_x];
                matriz[coord_y-1][coord_x] = aux;        
                coord_y --;
                }
         if(dir == 's')
                if((coord_y+1) < 5){
                aux = matriz[coord_y][coord_x];
                matriz[coord_y][coord_x] = matriz[coord_y+1][coord_x];
                matriz[coord_y+1][coord_x] = aux;        
                coord_y ++;
                }         
         if(dir == 'a')
                if((coord_x-1) >= 0){
                aux = matriz[coord_y][coord_x];
                matriz[coord_y][coord_x] = matriz[coord_y][coord_x-1];
                matriz[coord_y][coord_x-1] = aux;        
                coord_x --;
                }         
         if(dir == 'd')
                if((coord_x+1) < 5){
                aux = matriz[coord_y][coord_x];
                matriz[coord_y][coord_x] = matriz[coord_y][coord_x+1];
                matriz[coord_y][coord_x+1] = aux;        
                coord_x --;
                }   
         clearsc();     
         getchar();
    }while(salida == 0);
    getchar();
    return 0;
    }
