#include "listas.h"
#include "arboles.h"
#include <math.h>

struct timeb tic, tac;
void swap(int *, int *);
void bubblesort(int[], int[], int);
void selectsort(int[], int[], int);
void mostrar(int[]);
void copiar(int[], int[]);
void insertsort(int[], int[], int);
void rem_sel(int[], int[], int);
void shellsort(int[], int[], int);
void heapsort(int[], int[], int);
//de menor a mayor
//tiempo, compraciones e intercambios


int largo(int array[]){
    int aux = 0;
    while(array[aux] != '\0'){
       aux++;
       }
    return aux;
    }

void copiar(int a[], int b[]){
     int i=0, n = largo(a);
     for(i=0; i<n ;i++){
        b[i] = a[i];
        }
     }

void mostrar(int a[]){
     int i;
     for(i=0; i<largo(a);i++)
     printf("%d, ", a[i]);
     }

void swap(int *a, int *b){
     int aux;
     aux = *a;
     *a = *b;
     *b = aux;
     }

void selectsort(int array[], int cit[], int n){
     cit[0] = cit[1] = cit[2] = 0;
     int i,j, b[n], min;
     copiar(array, b);
     ftime(&tic);
        for(i=0; i<(n-1); i++){
        min = i;
           for(j=(i+1); j<n; j++){
              if(b[j] < b[min]){
                      min = j;
                      }
              cit[0]++;
           }
           swap(&b[i], &b[min]);
           cit[1]++;
        }
         ftime(&tac);
         cit[2] = (int) (1000.0 * (tac.time - tic.time) + (tac.millitm - tic.millitm));
     return;
     }

void bubblesort(int array[], int cit[], int n){
     cit[0] = cit[1] = cit[2] = 0;
     int i,j, b[n];
     copiar(array, b);
     ftime(&tic);
     for(i=0;i<n;i++)
     for(j=0;j<i;j++){
         if(b[i] < b[j]){
         swap(&b[i], &b[j]);
         cit[1]++;
         }
         cit[0]++;
         }
         ftime(&tac);
         cit[2] = (int) (1000.0 * (tac.time - tic.time) + (tac.millitm - tic.millitm));
     return;
     }

void insertsort(int array[], int cit[], int n){
    cit[0] = cit[1] = cit[2] = 0;
     int i,j, b[n], aux;
     copiar(array, b);
     ftime(&tic);
    for(i=1; i<n; i++){
         aux = b[i];
         j= i-1;
         while ((j>=0) && (b[j]>aux)){
              cit[0] += 2;
              b[j+1]= b[j];
              j= j-1;
         }
         b[j+1] = aux;
         cit[1]++;
    }
    ftime(&tac);
         cit[2] = (int) (1000.0 * (tac.time - tic.time) + (tac.millitm - tic.millitm));
     return;
}

void rem_sel(int array[], int cit[], int n){
     cit[0] = cit[1] = cit[2] = 0;
     int i = 0, j, k, b[n];
     copiar(array, b);
     ftime(&tic);
     while(n>i){
             k = i;
             j = i+1;
             while(n>j){
             cit[0]++;
                  if(b[k] > b[j]){
                  cit[1]++;
                  k = j;
                  }
             j++;
             }
             swap(&b[i],&b[k]);
             i++;
             }
     ftime(&tac);
     cit[2] = (int) (1000.0 * (tac.time - tic.time) + (tac.millitm - tic.millitm));
     return;
}

void shellsort(int array[], int cit[], int n){
      cit[0] = cit[1] = cit[2] = 0;
     int i = 0, j, k, b[n];
     copiar(array, b);
     ftime(&tic);
     
     for(k = n/2; k>0 ; k/=2)
     {
           for(j= k; j<n; j++)
           {
                 for(i=(j-k); i >= 0; i -= k)
                 {
                 cit[0]++;
                 if(b[k+i]>=b[i])
                 break;
                 else{
                 swap(&b[i],&b[k+i]);
                    cit[1]++;
                    }
                 }
           }
     }
     ftime(&tac);
     cit[2] = (int) (1000.0 * (tac.time - tic.time) + (tac.millitm - tic.millitm));
     return;

}

void heapsort(int array[], int cit[], int n){
     
     struct arbol *A;
     A = NULL;
     cit[0] = cit[1] = cit[2] = 0;
     int i = 0, b[n];
     copiar(array, b);
     ftime(&tic);
     
     for(i =0; i<n; i++)
        insertar_arbol(&A, b[i], cit);

     //inorden(A);
     ftime(&tac);
     cit[2] = (int) (1000.0 * (tac.time - tic.time) + (tac.millitm - tic.millitm));
     
     return;
     }
