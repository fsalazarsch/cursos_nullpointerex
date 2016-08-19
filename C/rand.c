#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listas.h"



int main ()
{
    int min, max, flag = 1;

    struct nodo *L;
    L = NULL;
    
    
    do{
        
  srand (time(NULL));
  do{
  printf ("Seleccion de rango:\n");
  printf ("Numero minimo:\t");
  scanf("%d", &min);
  printf ("Numero maximo:\t");
  scanf("%d", &max);
}while(min == max);
  max *= 100;
  
  printf ("%d\n", (rand() % max)/100 + min );
  printf("\nOtra vez?? ( 1) Si 2) No ):\t");
  scanf("%d", &flag);
  
  }while(flag == 1);
  printf("Presione enter para salir...");
  getchar();
  getchar();
  return 0;
}
