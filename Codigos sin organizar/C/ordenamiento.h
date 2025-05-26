#include <stdio.h>
#include <math.h>

int length(int matriz[]) //saca el largo de un arreglo, en caso de que se asigne en una variable
{
  return (int)( sizeof(matriz) / sizeof(matriz[0]));
}

void bubblesort(int matriz[])
{
  int aux;
  int i,j;
  for(i = 0; i < length(matriz); i++)
  {
    for(j = 0; j < i; j++)
    {
    if(matriz[i] < matriz[j])
    {
      aux = matriz[j];
      matriz[j] = matriz[i];
      matriz[i] = aux;
    }
    }
 }
}

void insertsort(int matriz[])
{
  int i, aux, j;
  for (i = 1; i < length(matriz); i++)
  {
    aux = matrix[i];
    j = i - 1;
    while ( (matriz[j] > aux) && (j >= 0) )
    {
      matriz[j + 1] = matriz[j];
      j--;
    }
  matriz[j + 1] = aux;
  }
}


void selectsort(int matriz[])
{
int i, j, k, p, aux;
lim = matriz.length-1;
for(k = 0; k < lim; k++)
  {
  p = k;
  for(i = k+1; i <= lim; i++)
    if(matriz[i] < matriz[p]) p = i;
      if(p != k)
      {
        aux = matriz[p];
        matriz[p] = matriz[k];
        matriz[k] = aux;
      }
  }
}


void mergesort(int matriz[], int init, int n)
{
  int n1;
  int n2;
  if (n > 1)
  {
    n1 = n / 2;
    n2 = n - n1;
    mergesort(matriz, init, n1);
    mergesort(matriz, init + n1, n2);
    merge(matriz, init, n1, n2);
  }
}

void merge(int matriz[], int init, int n1, int n2)
{
  //int aux[] = new int[n1+n2]; --> para c++
  int* aux = malloc((n1+n2)*sizeof(*aux))
  int temp = 0;
  int temp1 = 0;
  int temp2 = 0;
  int i;
  while ((temp1 < n1) && (temp2 < n2))
  {
    if (matriz[init + temp1] < matriz[init + n1 + temp2])
      aux[temp++] = matriz[init + (temp1++)];
    else
      aux[temp++] = matriz[init + n1 + (temp2++)];
  }
while (temp1 < n1)
  aux[temp++] = matriz[init + (temp1++)];
while (temp2 < n2)
  aux[temp++] = matriz[init + n1 + (temp2++)];
for (i = 0; i < n1+n2; i++)
  matriz[init + i] = aux[i];

free(aux);
}


void shellsort(int matriz[])
{ 
  for ( int index = length(matriz) / 2; index > 0; index = (index == 2 ? 1 : (int) Math.round(index / 2.2)))
  {
    for (int i = index; i < length(matriz); i++)
    {
      for (int j = i; j >= index && matriz[j - index] > matriz[j]; j -= index)
      {
        int aux = matriz[j];
        matriz[j] = matriz[j - index];
        matriz[j - index] = aux;
      }
    }
  }
}


void quicksort(int matriz[], int a, int b)
{
  int aux;
  int inicio = a;
  int termino = b;
  int pivot = matriz[(inicio+termino)/2];
  do
  {
    while(matriz[inicio] < pivot)
    {
    inicio++;
    }
    while(matriz[termino] > pivot)
    {
    termino--;
    }
  if(inicio <= termino)
  {
    aux = matriz[inicio];
    matriz[inicio] = matriz[termino];
    matriz[termino] = aux;
    inicio++;
    termino--;
  }
  }while(inicio <= termino);

  if(a < termino)
    {
    quicksort(matriz, a, termino);
    }
  if(inicio < b)
    {
    quicksort(matriz, inicio, b);
    }

}
